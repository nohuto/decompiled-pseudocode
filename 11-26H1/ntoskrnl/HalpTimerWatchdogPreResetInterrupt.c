/*
 * XREFs of HalpTimerWatchdogPreResetInterrupt @ 0x1405970B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1404F5780 (HalpTimerWatchdogResetCountdown.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerWatchdogPreResetInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  ULONG_PTR v2; // rbx
  ULONG_PTR InterruptTimePrecise; // rax
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
  guard_dispatch_icall_no_overrides(InternalData, v1);
  if ( (unsigned __int64)HalpTimerWatchdogResetCount <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset < (unsigned __int64)HalpTimerWatchdogResetCount >> 1 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v5);
      KeBugCheckEx(
        0x101u,
        v2,
        (unsigned __int64)HalpTimerWatchdogResetCount >> 1,
        InterruptTimePrecise,
        (unsigned int)KiClockTimerOwner);
    }
    HalpTimerWatchdogResetCountdown();
  }
  return 1;
}
