/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x14025B7A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueuePhaseActions @ 0x140253FF8 (PpmCheckQueuePhaseActions.c)
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x140608EC8 (PpmPerfApplyHiddenProcessorState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PpmPerfApplyProcessorStates()
{
  PBOOLEAN i; // rbx
  __int64 v1; // rdi
  unsigned int j; // esi
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  struct _KPRCB *Prcb; // rax
  struct _KPRCB *v9; // rsi
  _PROC_PERF_CONSTRAINT *Constraint; // r14
  unsigned int v11; // r8d
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C8h]
  _BYTE v15[256]; // [rsp+48h] [rbp-C0h] BYREF

  v13 = 2097153LL;
  v14 = 0LL;
  memset_0(v15, 0, 0xF8uLL);
  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    if ( i[1446] )
    {
      RtlOrAffinityEx(i + 24, &v13, &v13);
      for ( j = 0; j < *((_DWORD *)i + 74); ++j )
      {
        v1 = *((_QWORD *)i + 39) + 1224LL * j;
        if ( *(_DWORD *)(v1 + 16) )
        {
          if ( *(_BYTE *)(v1 + 168) )
          {
            LOBYTE(v3) = 1;
            PpmPerfApplyHiddenProcessorState(i, *((_QWORD *)i + 39) + 1224LL * j, v3);
            *(_BYTE *)(v1 + 168) = 0;
          }
          PpmPerfApplyHiddenProcessorState(i, v1, 0LL);
        }
      }
      i[1446] = 0;
    }
  }
  v4 = v14;
  LOWORD(v5) = 0;
  while ( 1 )
  {
    while ( v4 )
    {
      _BitScanForward64(&v6, v4);
      v4 &= ~(1LL << v6);
      v7 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v5].Flink
           + (unsigned __int8)v6);
      Prcb = (struct _KPRCB *)KeGetPrcb(v7);
      v9 = Prcb;
      Constraint = Prcb->PowerState.CheckContext.Constraint;
      if ( !Constraint->Force )
        goto LABEL_13;
      if ( PpmPerfApplyProcessorState(Prcb, 1) )
      {
        Constraint->Force = 0;
LABEL_13:
        if ( PpmPerfApplyProcessorState(v9, 0) )
        {
          v11 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v7);
          if ( (unsigned __int16)v13 > v11 >> 6 )
            *(_QWORD *)&v15[8 * (v11 >> 6) - 8] &= ~(1LL << (v11 & 0x3F));
        }
      }
    }
    v5 = (unsigned __int16)(v5 + 1);
    if ( (unsigned int)v5 >= (unsigned __int16)v13 )
      return PpmCheckQueuePhaseActions((__int64)&v13, 2);
    v4 = *(_QWORD *)&v15[8 * v5 - 8];
  }
}
