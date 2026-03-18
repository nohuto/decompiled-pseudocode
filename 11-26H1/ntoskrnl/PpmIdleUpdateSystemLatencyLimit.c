/*
 * XREFs of PpmIdleUpdateSystemLatencyLimit @ 0x14028FBF0
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028FA08 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PpmEventAffinityMask @ 0x14060DE10 (PpmEventAffinityMask.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  PpmAcquireLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  PopAcquireRwLockShared(&stru_140F10070.1136);
  PpmIdleUnparkedLatencyLimit = v2;
  RtlSubtractAffinityEx((struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister, &PpmPerfCoreParkingMask, (__int64)&v15);
  v1 = v16[0];
  LOWORD(v2) = 0;
  while ( 1 )
  {
    while ( v1 )
    {
      _BitScanForward64(&v3, v1);
      v1 &= ~(1LL << v3);
      Prcb = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                        + 64 * (unsigned __int16)v2
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
      v8 = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                      + 64 * (unsigned __int16)v6
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
      v12 = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                       + 64 * (unsigned __int16)v10
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
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
  return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
}
