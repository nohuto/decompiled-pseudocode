/*
 * XREFs of PfInitializeSuperfetch @ 0x140CCE038
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x140725870 (ZwNotifyChangeKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PfpScenCtxInitialize @ 0x1407C602C (PfpScenCtxInitialize.c)
 *     PfpScenCtxStart @ 0x1407C6060 (PfpScenCtxStart.c)
 *     PfpRpStart @ 0x1407C6EA4 (PfpRpStart.c)
 *     PfpPartitionGlobalContextInitialize @ 0x1407C7250 (PfpPartitionGlobalContextInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140CCE1F8 (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140CCE460 (PfpParametersInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  int v0; // edx
  unsigned int v1; // r8d
  unsigned int v2; // eax
  unsigned int v3; // ecx

  PfpParametersInitialize(&stru_140E66B30.WaitBlockFill11[48]);
  memset_0(&stru_140E66B30.KernelShadowStack, 0, 0xA0uLL);
  v0 = -1;
  stru_140E66B30.Spare35[0] = 0LL;
  *(_QWORD *)&stru_140E66B30.ResourceIndex = 0LL;
  v1 = -1;
  stru_140E66B30.KcsanThread = 0LL;
  v2 = 8;
  *(_QWORD *)&stru_140E66B30.SchedulerAssistYieldCounter = 0LL;
  v3 = 8;
  stru_140E66B30.KernelShadowStack = 0LL;
  stru_140E66B30.KernelShadowStackInitial = 0LL;
  do
  {
    ++v1;
    v3 >>= 1;
  }
  while ( v3 );
  *(_QWORD *)&stru_140E66B30.ModeHistory = 0LL;
  stru_140E66B30.Spare36 = v1;
  stru_140E66B30.Spare35[1] = 0LL;
  do
  {
    ++v0;
    v2 >>= 1;
  }
  while ( v2 );
  *(_KLOCK_ENTRIES **)((char *)&stru_140E66B30.KernelAbEntries + 4) = 0LL;
  stru_140E66B30.KernelShadowStackBase = &stru_140E66B30.KernelShadowStackLimit;
  LODWORD(stru_140E66B30.AutoBoostThreadState) = v0;
  stru_140E66B30.SchedulerSharedSwappablePage = 0LL;
  stru_140E66B30.SchedulerAssistLastYieldBoostTime = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140E66B30.SchedulerAssistLastYieldBoostTime);
  if ( (stru_140E66B30.WaitBlockFill7[116] & 2) != 0 )
    PfpRpStart((__int64)&stru_140E66B30.KernelShadowStack);
  PfpScenCtxInitialize((__int64)&stru_140E66B30.OtherOperationCount);
  PfpScenCtxStart((__int64)&stru_140E66B30.OtherOperationCount);
  stru_140E66B30.Padding[3] = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140E66B30.Padding[3]);
  _InterlockedExchange64((volatile __int64 *)&stru_140E66B30.Padding[3], 1LL);
  LODWORD(stru_140E66FF0.SListFaultAddress) |= 1u;
  stru_140E66FF0.Header.WaitListHead.Blink = &stru_140E66FF0.Header.WaitListHead;
  stru_140E66FF0.Header.WaitListHead.Flink = &stru_140E66FF0.Header.WaitListHead;
  stru_140E66B30.Padding[4] = 0LL;
  *(_QWORD *)&stru_140E66FF0.Header.Lock = 0LL;
  PfSnInitializePrefetcher();
  PfpPartitionGlobalContextInitialize(&stru_140E66FF0.InitialStack);
  stru_140F12D20.Padding[1] = 0x23C34600uLL / (unsigned int)KeMaximumIncrement;
  *(_OWORD *)&stru_140F12D20.Padding[2] = 0LL;
  if ( stru_140E66B30.WaitBlock[1].WaitListEntry.Blink )
    ZwNotifyChangeKey(
      stru_140E66B30.WaitBlock[1].WaitListEntry.Blink,
      0LL,
      (PIO_APC_ROUTINE)&stru_140E66B30.WaitBlockFill11[80],
      (PVOID)1,
      (PIO_STATUS_BLOCK)&stru_140E66B30.WaitBlockFill11[64],
      0x1000000Fu,
      0,
      &stru_140E66B30.WaitBlockFill11[112],
      4u,
      1u);
  return 0LL;
}
