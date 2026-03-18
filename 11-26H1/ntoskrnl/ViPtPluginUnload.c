/*
 * XREFs of ViPtPluginUnload @ 0x140C2A740
 * Callers:
 *     VfPoolTrackingEntry @ 0x1406417B0 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExClearPoolFlags @ 0x1406CBA40 (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140C2A430 (ViPtDeleteAvlTrees.c)
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
