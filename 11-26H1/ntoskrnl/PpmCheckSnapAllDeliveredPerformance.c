/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x1402547B0
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x1404D9690 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     PpmCheckQueuePhaseActions @ 0x140253FF8 (PpmCheckQueuePhaseActions.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140254FC0 (PpmPerfSnapDeliveredPerformance.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14032DD60 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlGetReferenceTime @ 0x140411360 (HvlGetReferenceTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PpmCheckSnapAllDeliveredPerformance()
{
  PBOOLEAN v0; // rdi
  char v1; // r12
  __int64 ReferenceTime; // r13
  __int64 v3; // r15
  __int64 v4; // r14
  unsigned int i; // esi
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // bx
  unsigned __int16 Count; // di
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 Prcb; // rax
  unsigned int v15; // r8d
  PBOOLEAN j; // rbx
  unsigned int k; // edi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  char v23; // al
  unsigned __int16 v24; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v25; // [rsp+3Ah] [rbp-CEh]
  int v26; // [rsp+3Ch] [rbp-CCh]
  _QWORD v27[33]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v27, 0, 0x100uLL);
  v0 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
  v1 = 0;
  ReferenceTime = 0LL;
  while ( v0 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    for ( i = 0; i < *((_DWORD *)v0 + 74); ++i )
    {
      v3 = *((_QWORD *)v0 + 39);
      v4 = 1224LL * i;
      if ( *(_DWORD *)(v4 + v3 + 16) == 1 )
      {
        if ( !ReferenceTime )
          ReferenceTime = HvlGetReferenceTime();
        v22 = *(_QWORD *)(v4 + v3);
        v23 = PpmPerfSnapDeliveredPerformance(v22, 0LL, ReferenceTime - 50000);
        *(_BYTE *)(v22 + 72) = v23 == 0;
        if ( !v23 )
        {
          HvlUpdatePerformanceStateCountersForLp(*(unsigned int *)(v4 + v3 + 20));
          v1 = 1;
        }
      }
    }
    v0 = *(PBOOLEAN *)v0;
  }
  v25 = 32;
  memset_0(v27, 0, 0x100uLL);
  v6 = 32;
  v7 = 0;
  Count = 32;
  v26 = 0;
  if ( PpmCheckRegistered.Count <= 0x20u )
    Count = PpmCheckRegistered.Count;
  v24 = Count;
  if ( Count )
  {
    memmove(v27, &PpmCheckRegistered.8, 8LL * Count);
    do
      ++v7;
    while ( v7 < Count );
    v6 = v25;
  }
  if ( v7 < v6 )
  {
    do
    {
      v9 = v7++;
      v27[v9] = 0LL;
    }
    while ( v7 < v25 );
  }
  v10 = v27[0];
  LOWORD(v11) = 0;
  while ( 1 )
  {
    while ( v10 )
    {
      _BitScanForward64(&v12, v10);
      v10 &= ~(1LL << v12);
      v13 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v11].Flink
            + (unsigned __int8)v12);
      Prcb = KeGetPrcb(v13);
      if ( (unsigned __int8)PpmPerfSnapDeliveredPerformance(Prcb + 35264, 0LL, 0LL) )
      {
        v15 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v13);
        if ( v24 > v15 >> 6 )
          v27[v15 >> 6] &= ~(1LL << (v15 & 0x3F));
      }
    }
    v11 = (unsigned __int16)(v11 + 1);
    if ( (unsigned int)v11 >= v24 )
      break;
    v10 = v27[v11];
  }
  if ( v1 )
  {
    for ( j = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
          j != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
          j = *(PBOOLEAN *)j )
    {
      for ( k = 0; k < *((_DWORD *)j + 74); ++k )
      {
        v19 = 1224LL * k;
        v20 = *((_QWORD *)j + 39);
        if ( *(_DWORD *)(v19 + v20 + 16) == 1 )
        {
          v21 = *(_QWORD *)(v19 + v20);
          if ( *(_BYTE *)(v21 + 72) )
          {
            *(_BYTE *)(v21 + 72) = 0;
            LOBYTE(v21) = 1;
            PpmPerfSnapDeliveredPerformance(*(_QWORD *)(v19 + v20), v21, ReferenceTime);
          }
        }
      }
    }
  }
  return PpmCheckQueuePhaseActions((__int64)&v24, 0);
}
