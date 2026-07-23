/*
 * XREFs of PpmIdleUpdateSystemLatencyLimit @ 0x14028F150
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PpmEventAffinityMask @ 0x140610F10 (PpmEventAffinityMask.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmIdleUpdateSystemLatencyLimit(int a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  struct _KPRCB *Prcb; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  struct _KPRCB *v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  struct _KPRCB *v12; // rax
  unsigned __int16 i; // cx
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[33]; // [rsp+40h] [rbp-C8h] BYREF
  struct _KAFFINITY_EX v17; // [rsp+148h] [rbp+40h] BYREF

  LODWORD(v2) = a1;
  memset_0(v16, 0, 0x100uLL);
  memset_0(&v17.8, 0, sizeof(v17.8));
  *(_QWORD *)&v17.Count = 2097153LL;
  memset_0(&v17.8, 0, sizeof(v17.8));
  v15 = 2097153LL;
  memset_0(v16, 0, 0x100uLL);
  PpmAcquireLock(&PpmIdlePolicyLock.ThreadLock);
  PopAcquireRwLockShared(&PpmIdlePolicyLock);
  PpmIdleUnparkedLatencyLimit = v2;
  RtlSubtractAffinityEx((struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister, &PpmPerfCoreParkingMask, (__int64)&v15);
  v1 = v16[0];
  LOWORD(v2) = 0;
  while ( 1 )
  {
    while ( v1 )
    {
      _BitScanForward64(&v3, v1);
      v1 &= ~(1LL << v3);
      Prcb = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v2].Flink
                                        + (unsigned int)(unsigned __int8)v3));
      PpmIdleUpdateProcessorLatencyLimit(Prcb, &v17);
    }
    v2 = (unsigned __int16)(v2 + 1);
    if ( (unsigned int)v2 >= (unsigned __int16)v15 )
      break;
    v1 = v16[v2];
  }
  v5 = PpmParkSoftParkingMask.Bitmap[0];
  LOWORD(v6) = 0;
  while ( 1 )
  {
    while ( v5 )
    {
      _BitScanForward64(&v7, v5);
      v5 &= ~(1LL << v7);
      v8 = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v6].Flink
                                      + (unsigned int)(unsigned __int8)v7));
      PpmIdleUpdateProcessorLatencyLimit(v8, &v17);
    }
    v6 = (unsigned __int16)(v6 + 1);
    if ( (unsigned int)v6 >= PpmParkSoftParkingMask.Count )
      break;
    v5 = PpmParkSoftParkingMask.Bitmap[v6];
  }
  RtlSubtractAffinityEx(&PpmPerfCoreParkingMask, &PpmParkSoftParkingMask, (__int64)&v15);
  v9 = v16[0];
  LOWORD(v10) = 0;
  while ( 1 )
  {
    while ( v9 )
    {
      _BitScanForward64(&v11, v9);
      v9 &= ~(1LL << v11);
      v12 = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v10].Flink
                                       + (unsigned int)(unsigned __int8)v11));
      PpmIdleUpdateProcessorLatencyLimit(v12, &v17);
    }
    v10 = (unsigned __int16)(v10 + 1);
    if ( (unsigned int)v10 >= (unsigned __int16)v15 )
      break;
    v9 = v16[v10];
  }
  for ( i = 0; i < v17.Count; ++i )
  {
    if ( v17.Bitmap[i] )
    {
      PpmEventAffinityMask(&PPM_ETW_PROCESSOR_LATENCY_REEVALUATION_WAKE);
      HalRequestIpi(0LL, &v17);
      break;
    }
  }
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return PpmReleaseLock(&PpmIdlePolicyLock.ThreadLock);
}
