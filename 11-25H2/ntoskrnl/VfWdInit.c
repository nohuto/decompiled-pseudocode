/*
 * XREFs of VfWdInit @ 0x140B8C918
 * Callers:
 *     ViIovInitialization @ 0x140B94EF4 (ViIovInitialization.c)
 * Callees:
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     VfWdSetCancelTimeout @ 0x140B8C9D8 (VfWdSetCancelTimeout.c)
 */

__int64 VfWdInit()
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    result = (unsigned int)ViWdInitialized;
    if ( !ViWdInitialized )
    {
      VfWdIrpListLock = 0LL;
      qword_140FFCBE8 = (__int64)&VfWdIrpListHead;
      VfWdIrpListHead = (__int64)&VfWdIrpListHead;
      ExInitializeNPagedLookasideListInternal(
        (__int64)&ViWdIrpLookasideList,
        0LL,
        (void (__stdcall *)(PVOID))VfUtilFreePoolDispatchLevel,
        512,
        32,
        1683449430,
        16,
        VfInitializedWithoutReboot);
      KeInitializeTimer(&ViWdIrpTimer);
      KeInitializeDpc(&ViWdIrpTimerDpc, ViWdIrpTimerDpcRoutine, 0LL);
      VfWdSetCancelTimeout((unsigned int)VfWdIrpTimeoutMsec);
      return (unsigned int)_InterlockedExchange(&ViWdInitialized, 1);
    }
  }
  return result;
}
