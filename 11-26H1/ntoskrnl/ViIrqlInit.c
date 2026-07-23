/*
 * XREFs of ViIrqlInit @ 0x140C425D4
 * Callers:
 *     VfIrqlPluginEntry @ 0x14064BAF0 (VfIrqlPluginEntry.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 ViIrqlInit()
{
  _InterlockedExchange(&ViIrqlTrimAndLog, 1);
  if ( !ViTrackIrqlQueue )
  {
    ViTrackIrqlQueue = (PVOID)ExAllocatePool3(
                                64LL,
                                (struct _KLOCK_ENTRIES *)(unsigned int)(56 * ViTrackIrqlQueueLength),
                                0x6C717249u,
                                (__int64)&VfExtendedParameters,
                                1u);
    if ( !ViTrackIrqlQueue )
      return 3221225495LL;
  }
  if ( VfKeCriticalRegionTraces )
    return 0LL;
  VfKeCriticalRegionTraces = (PVOID)ExAllocatePool3(
                                      64LL,
                                      (struct _KLOCK_ENTRIES *)(unsigned int)(80 * VfKeCriticalRegionTracesLength),
                                      0x52436656u,
                                      (__int64)&VfExtendedParameters,
                                      1u);
  return VfKeCriticalRegionTraces == 0LL ? 0xC0000017 : 0;
}
