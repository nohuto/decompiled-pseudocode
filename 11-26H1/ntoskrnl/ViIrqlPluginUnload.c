/*
 * XREFs of ViIrqlPluginUnload @ 0x140C427C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void ViIrqlPluginUnload()
{
  _InterlockedExchange(&ViIrqlTrimAndLog, 0);
  if ( ViTrackIrqlQueue )
  {
    ExFreePoolWithTag(ViTrackIrqlQueue, 0x6C717249u);
    ViTrackIrqlQueue = 0LL;
    ViTrackIrqlIndex = 0;
    ViKeTrackIrqlDisabled = 0;
    ViTrackIrqlActiveCount = 0;
  }
  if ( VfKeCriticalRegionTraces )
  {
    ExFreePoolWithTag(VfKeCriticalRegionTraces, 0x52436656u);
    VfKeCriticalRegionTraces = 0LL;
    VfKeCriticalRegionTraceActiveCount = 0;
    VfKeCriticalRegionTracesIndex = 0;
  }
}
