/*
 * XREFs of KiHandleMultipleBugchecksDuringRecovery @ 0x1405FA29C
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C76A8 (IoSaveBugCheckRecoveryStatus.c)
 *     KiRecordRecoveryFailure @ 0x1405FA508 (KiRecordRecoveryFailure.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405FA698 (KiSetBugCheckRecoveryProgressFlag.c)
 */

char __fastcall KiHandleMultipleBugchecksDuringRecovery(unsigned int a1)
{
  char v1; // bl
  char v2; // al
  unsigned int Number; // r8d
  unsigned int v4; // edx
  signed __int32 v5; // eax
  int StackLimit; // ett
  signed __int32 v7; // ecx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  bool v10; // [rsp+24h] [rbp-14h]
  char v11; // [rsp+25h] [rbp-13h]
  BOOL v12; // [rsp+26h] [rbp-12h]
  __int16 v13; // [rsp+2Ah] [rbp-Eh]

  v1 = 0;
  if ( *(int *)&KsepShimDbLock.SchedulerApcFill5[48] > 0 )
  {
    _m_prefetchw(&KsepShimDbLock.SchedulerApcFill5[60]);
    v2 = _InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 0x10u);
    if ( (v2 & 0x11) == 1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      if ( (v2 & 2) != 0 )
      {
        v11 = ((a1 >> 2) & 3) + 1;
        v13 = 0;
        v9 = 3;
        v10 = a1 >> 4 == Number;
        v12 = *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[56] == Number;
        IoSaveBugCheckRecoveryStatus(&v9);
        if ( (int)KiSetBugCheckRecoveryProgressFlag(0x800000LL) < 0 )
          KiRecordRecoveryFailure(5LL);
      }
      _m_prefetchw(&KsepShimDbLock.SchedulerApcFill5[60]);
      if ( (_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.SchedulerApcFill5[60], 8u) & 8) == 0 )
      {
        v4 = (16 * KeGetCurrentPrcb()->Number) | 3;
        StackLimit = (int)KiDpcWatchdogConfigurationLock.StackLimit;
        v5 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.StackLimit,
               v4,
               (signed __int32)KiDpcWatchdogConfigurationLock.StackLimit);
        if ( StackLimit != v5 )
        {
          do
          {
            v7 = v5;
            v5 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.StackLimit,
                   v4,
                   v5);
          }
          while ( v5 != v7 );
        }
        return 1;
      }
    }
  }
  return v1;
}
