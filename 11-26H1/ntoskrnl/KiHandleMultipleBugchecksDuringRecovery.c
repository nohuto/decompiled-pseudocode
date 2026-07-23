/*
 * XREFs of KiHandleMultipleBugchecksDuringRecovery @ 0x1405FCCBC
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     IoSaveBugCheckRecoveryStatus @ 0x1405C9F78 (IoSaveBugCheckRecoveryStatus.c)
 *     KiRecordRecoveryFailure @ 0x1405FCF28 (KiRecordRecoveryFailure.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405FD0B8 (KiSetBugCheckRecoveryProgressFlag.c)
 */

char __fastcall KiHandleMultipleBugchecksDuringRecovery(unsigned int a1)
{
  char v1; // bl
  char v2; // al
  unsigned int Number; // r8d
  unsigned int v4; // edx
  signed __int32 v5; // eax
  int InitialStack; // ett
  signed __int32 v7; // ecx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  bool v10; // [rsp+24h] [rbp-14h]
  char v11; // [rsp+25h] [rbp-13h]
  BOOL v12; // [rsp+26h] [rbp-12h]
  __int16 v13; // [rsp+2Ah] [rbp-Eh]

  v1 = 0;
  if ( SLODWORD(KsepShimDbLock.QueueListEntry.Flink) > 0 )
  {
    _m_prefetchw(&KsepShimDbLock.WaitBlockFill11[96]);
    v2 = _InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 0x10u);
    if ( (v2 & 0x11) == 1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      if ( (v2 & 2) != 0 )
      {
        v11 = ((a1 >> 2) & 3) + 1;
        v13 = 0;
        v9 = 3;
        v10 = a1 >> 4 == Number;
        v12 = *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[104] == Number;
        IoSaveBugCheckRecoveryStatus(&v9);
        if ( (int)KiSetBugCheckRecoveryProgressFlag(0x800000LL) < 0 )
          KiRecordRecoveryFailure(5LL);
      }
      _m_prefetchw(&KsepShimDbLock.WaitBlockFill11[96]);
      if ( (_InterlockedOr((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[96], 8u) & 8) == 0 )
      {
        v4 = (16 * KeGetCurrentPrcb()->Number) | 3;
        InitialStack = (int)KiDpcWatchdogConfigurationLock.InitialStack;
        v5 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.InitialStack,
               v4,
               (signed __int32)KiDpcWatchdogConfigurationLock.InitialStack);
        if ( InitialStack != v5 )
        {
          do
          {
            v7 = v5;
            v5 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&KiDpcWatchdogConfigurationLock.InitialStack,
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
