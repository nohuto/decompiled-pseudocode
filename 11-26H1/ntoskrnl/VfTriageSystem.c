/*
 * XREFs of VfTriageSystem @ 0x140CE5AC8
 * Callers:
 *     ViInitSystemPhase0 @ 0x140CE513C (ViInitSystemPhase0.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ViFindTriageRule @ 0x140CE5E30 (ViFindTriageRule.c)
 *     ViMakeVerifierSettings @ 0x140CE5ED0 (ViMakeVerifierSettings.c)
 *     ViTriageSameDriversFromDump @ 0x140CE5FC0 (ViTriageSameDriversFromDump.c)
 *     ViValidateTriageRules @ 0x140CE6078 (ViValidateTriageRules.c)
 *     MmTriageActiveInLastCrash @ 0x140D0021C (MmTriageActiveInLastCrash.c)
 *     TriageGetBugcheckData @ 0x140D0A400 (TriageGetBugcheckData.c)
 */

__int64 __fastcall VfTriageSystem(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r15
  unsigned int v6; // esi
  int v7; // r14d
  _DWORD *v8; // rbx
  _DWORD *TriageRule; // rdi
  const CHAR *v10; // r8
  _BYTE v12[40]; // [rsp+40h] [rbp-30h] BYREF

  v1 = 0;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: verifier triage global/registry settings %X \n", ViVerifyTriage);
  if ( MmVerifyDriverLevel != -1 || ViVerifyAllDrivers )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: driver verifier settings present.\n");
    return 0LL;
  }
  if ( ViVerifyTriage == -1 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is not enabled by default.\n");
  }
  else if ( ViVerifyTriage )
  {
    if ( ViVerifyTriage < 0 )
    {
      v1 = (unsigned __int16)ViVerifyTriage;
      v3 = (unsigned __int16)ViVerifyTriage;
      ViVerifyTriage = 1;
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: simulated crash code %X.\n", v3);
    }
    v4 = *(_QWORD *)(a1 + 240);
    if ( v4 )
    {
      if ( *(_DWORD *)v4 >= 0x1150u )
      {
        v5 = *(_QWORD *)(v4 + 40);
        if ( (int)TriageGetBugcheckData(
                    v5,
                    (unsigned int)v12,
                    (unsigned int)&v12[8],
                    (unsigned int)&v12[16],
                    (__int64)&v12[24],
                    (__int64)&v12[32]) >= 0 )
        {
          v7 = 1;
          v6 = *(_DWORD *)v12;
          DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a real crash happened.\n");
        }
        else
        {
          if ( !v1 )
          {
            DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: standard retail exit point.\n");
            return 0LL;
          }
          v6 = v1;
          v7 = 0;
          *(_QWORD *)v12 = v1;
          *(__m128i *)&v12[8] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *(_OWORD *)&v12[24] = *(_OWORD *)&v12[8];
          DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a fake crash will be simulated.\n");
        }
        DbgPrintEx(
          0x5Du,
          3u,
          "CRASH TRIAGE: previous crash was %Ix %Ix %Ix %Ix %Ix.\n",
          v6,
          *(_DWORD *)&v12[8],
          *(_DWORD *)&v12[16],
          *(_DWORD *)&v12[24],
          *(_DWORD *)&v12[32]);
        ViTriageCrashData = *(_OWORD *)v12;
        qword_140F09080 = *(_QWORD *)&v12[32];
        xmmword_140F09070 = *(_OWORD *)&v12[16];
        if ( v7 )
        {
          if ( (unsigned int)MmTriageActiveInLastCrash(a1) == 1 )
          {
            DbgPrintEx(
              0x5Du,
              3u,
              "CRASH TRIAGE: triage skipped because it was active in previous crash or server system.\n");
            return 0LL;
          }
          if ( !(unsigned int)ViTriageSameDriversFromDump(a1, v5) )
          {
            DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: some drivers changed from previous crash.\n");
            return 0LL;
          }
        }
        if ( (unsigned int)ViValidateTriageRules(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize) )
        {
          if ( (unsigned int)ViValidateTriageRules(&ViInternalTriageRules, 48LL) )
          {
            v8 = 0LL;
            TriageRule = (_DWORD *)ViFindTriageRule(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize, v6);
            if ( TriageRule || (TriageRule = (_DWORD *)ViFindTriageRule(&ViInternalTriageRules, 48LL, v6)) != 0LL )
            {
              if ( *TriageRule < 0x80000u )
              {
                v8 = &ViVerifyTriageRules;
                while ( v8 < (_DWORD *)((char *)&ViVerifyTriageRules + (unsigned int)ViVerifyTriageRulesSize) )
                {
                  if ( (*v8 & 0x70000) == 0 )
                  {
                    v10 = "CRASH TRIAGE: zeroed rules structure (hit an invalid type rule).\n";
                    goto LABEL_40;
                  }
                  if ( (HIWORD(*v8) & 7) == 1 )
                  {
                    v8 = (_DWORD *)((char *)v8 + ((unsigned __int64)(unsigned int)*v8 >> 19) + 8);
                  }
                  else if ( (HIWORD(*v8) & 7) == 2 )
                  {
                    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: found a `targets' rule.\n");
                    goto LABEL_41;
                  }
                }
                v10 = "CRASH TRIAGE: no `targets' rule found.\n";
LABEL_40:
                v8 = 0LL;
                DbgPrintEx(0x5Du, 3u, v10);
LABEL_41:
                if ( v8 )
                  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no `targets' rule found.\n");
              }
              if ( TriageRule[1] )
              {
                ViMakeVerifierSettings(TriageRule, v8);
                DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage enabled!\n");
                return 1LL;
              }
              DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to rule with null features.\n");
            }
            else
            {
              DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: crash code %Ix will not be triaged.\n", v6);
            }
          }
          else
          {
            DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid internal rules!\n");
          }
        }
        else
        {
          DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid registry rules.\n");
        }
      }
      else
      {
        DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: unexpected loader extension size.\n");
      }
    }
    else
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: null loader extension.\n");
    }
  }
  else
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is disabled explicitely.\n");
  }
  return 0LL;
}
