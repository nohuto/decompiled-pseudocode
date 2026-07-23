/*
 * XREFs of RtlGuardRestoreContext @ 0x180077EF0
 * Callers:
 *     KiUserExceptionDispatcher @ 0x180162EC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlGuardIsValidStackPointer @ 0x180078190 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckExceptionHandler @ 0x180078420 (RtlGuardCheckExceptionHandler.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrpValidateUserCallTarget @ 0x180127470 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x1801274C0 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x1801275C0 (RtlFailFast2.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     bsearch_s @ 0x180129E70 (bsearch_s.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int ExceptionCode; // eax
  unsigned __int64 v5; // rdi
  ULONG_PTR CfgBitMap; // rdx
  void *v7; // rbp
  int v8; // edi
  __int64 Config; // rax
  rsize_t v10; // r8
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rdi
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  int Key; // [rsp+78h] [rbp+10h] BYREF

  if ( !ExceptionRecord )
  {
LABEL_23:
    if ( !LdrSystemDllInitBlock.CfgBitMap
      || (LdrSystemDllInitBlock.Flags & 1) != 0
      || (unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
    {
      goto LABEL_26;
    }
    goto LABEL_33;
  }
  ExceptionCode = ExceptionRecord->ExceptionCode;
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionCode == -2147483607 )
    {
      if ( ExceptionRecord->NumberParameters )
      {
        v11 = ExceptionRecord->ExceptionInformation[0];
        LOBYTE(v12) = LdrControlFlowGuardEnforced();
        if ( v12 )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v14, v13, v15) )
            LdrpValidateUserCallTargetES(v11);
          else
            LdrpValidateUserCallTarget(v11);
        }
      }
    }
    else if ( ExceptionCode == -1073741785 )
    {
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        RtlGuardCheckExceptionHandler((PVOID)ContextRecord->Rip);
      goto LABEL_26;
    }
    goto LABEL_23;
  }
  v5 = ExceptionRecord->ExceptionInformation[0];
  CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v5 + 16)) )
    {
      CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
      goto LABEL_7;
    }
LABEL_33:
    __fastfail(0xDu);
  }
LABEL_7:
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
  {
    v7 = *(void **)(v5 + 80);
    Key = 0;
    if ( CfgBitMap )
    {
      if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        v19 = 0LL;
        *(_OWORD *)BaseOfImage = 0LL;
        if ( (unsigned __int64)v7 < *((_QWORD *)&xmmword_1801DF450 + 1)
          || (unsigned __int64)v7 >= *((_QWORD *)&xmmword_1801DF450 + 1)
                                   + (unsigned __int64)(unsigned int)qword_1801DF460 )
        {
          RtlpxLookupFunctionTable(v7, (char **)BaseOfImage);
        }
        else
        {
          *(_OWORD *)BaseOfImage = xmmword_1801DF450;
        }
        v8 = (int)BaseOfImage[1];
        if ( BaseOfImage[1] )
        {
          Config = LdrImageDirectoryEntryToLoadConfigEx(BaseOfImage[1]);
          if ( Config )
          {
            if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
            {
              Key = (_DWORD)v7 - v8;
              v10 = *(_QWORD *)(Config + 184);
              if ( !v10
                || !bsearch_s(
                      &Key,
                      *(const void **)(Config + 176),
                      v10,
                      (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
                      RtlpTargetCompare,
                      0LL) )
              {
                goto LABEL_36;
              }
            }
          }
        }
        else
        {
          if ( !RtlpProtectedPolicies )
            goto LABEL_36;
          RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
          v16 = bsearch(
                  &unk_180178558,
                  RtlpProtectedPolicies,
                  (unsigned int)RtlpProtectedPoliciesActiveCount,
                  0x18uLL,
                  RtlpCompareProtectedPolicyEntry);
          if ( !v16 )
          {
            RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
            goto LABEL_36;
          }
          v17 = v16[2];
          RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
          if ( !v17 )
LABEL_36:
            RtlFailFast2(38LL, v7);
        }
      }
    }
  }
LABEL_26:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
