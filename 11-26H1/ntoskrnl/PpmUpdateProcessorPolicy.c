/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x140A9D7C8
 * Callers:
 *     PpmPerfReApplyStates @ 0x1407CE2FC (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x1404E92BC (PpmUpdateTargetProcessorPolicy.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int i; // ebx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r8
  _DWORD v16[4]; // [rsp+20h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v17; // [rsp+30h] [rbp-D0h] BYREF

  v16[0] = 0;
  memset_0(&v17.8, 0, sizeof(v17.8));
  LOWORD(CurrentPrcb) = stru_140F11D08.SchedulerAssistPriorityFloor & *a1;
  v5 = &PpmCurrentProfile[89 * dword_140F106CC];
  LOWORD(v16[0]) = (_WORD)CurrentPrcb;
  if ( !a2 && (v16[0] & 0x400) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x27u) )
    {
      v13 = __readmsr(0xDB0u);
      CurrentPrcb = (struct _KPRCB *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
      v14 = v13 | 1;
      if ( *((_BYTE *)v5 + 256) )
        CurrentPrcb = (struct _KPRCB *)v14;
      __writemsr(0xDB0u, (unsigned __int64)CurrentPrcb);
    }
  }
  v16[0] &= ~0x400u;
  if ( LOWORD(v16[0]) )
  {
    v6 = 10000LL * *((unsigned int *)v5 + 23);
    if ( v6 <= (unsigned int)KeMaximumIncrement )
    {
      v7 = 0LL;
    }
    else
    {
      v6 -= (unsigned int)KeMaximumIncrement;
      v7 = v6 / 0x2710;
    }
    LODWORD(stru_140F11D08.InGlobalUpdateVpThreadPriorityList) = v7;
    if ( !stru_140F11D08.Spare35[1]
      || (LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(v6, v7), (int)CurrentPrcb >= 0) )
    {
      if ( a2 )
      {
        v8 = *(char **)a2;
      }
      else
      {
        a2 = *(__int64 *)((char *)&Mm64BitPhysicalAddress + 2);
        v8 = (char *)&Mm64BitPhysicalAddress + 2;
      }
      *(_QWORD *)&v17.Count = 2097153LL;
      memset_0(&v17.8, 0, sizeof(v17.8));
      while ( (char *)a2 != v8 )
      {
        RtlOrAffinityEx((struct _KAFFINITY_EX *)(a2 + 24), &v17, (__int64)&v17);
        for ( i = 0; i < *(_DWORD *)(a2 + 296); ++i )
        {
          v12 = *(_QWORD *)(a2 + 312) + 1224LL * i;
          if ( *(_DWORD *)(v12 + 16) )
            PpmUpdateTargetProcessorPolicy(a2, (_QWORD *)v12, v16, (__int64)(v5 + 5));
        }
        a2 = *(_QWORD *)a2;
      }
      PopExecuteOnTargetProcessors(
        (__int64)PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)v16,
        (__int64)(v5 + 5));
      LOWORD(CurrentPrcb) = stru_140F11D08.Spare36;
      if ( *(_QWORD *)&stru_140F11D08.Spare36 )
        LOWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(v10, v9);
    }
  }
  return (__int16)CurrentPrcb;
}
