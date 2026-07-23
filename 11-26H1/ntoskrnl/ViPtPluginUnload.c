/*
 * XREFs of ViPtPluginUnload @ 0x140C30750
 * Callers:
 *     VfPoolTrackingEntry @ 0x140645390 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExClearPoolFlags @ 0x1406CFA70 (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140C30440 (ViPtDeleteAvlTrees.c)
 */

void ViPtPluginUnload()
{
  ExClearPoolFlags(16LL);
  if ( (VfOptionFlags & 0x1000) != 0 )
    ViPtDeleteAvlTrees();
  if ( VfPoolTraces )
  {
    ExWaitForRundownProtectionRelease(&ViPtUnloadRundown);
    ExFreePoolWithTag(VfPoolTraces, 0x6E496956u);
    VfPoolTraces = 0LL;
    _InterlockedExchange64((volatile __int64 *)&ViPtUnloadRundown, 1LL);
  }
  VfPoolTracesIndex = 0;
  VfPoolTracesLength = 0;
}
