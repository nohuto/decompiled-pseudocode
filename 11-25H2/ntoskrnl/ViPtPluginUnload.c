/*
 * XREFs of ViPtPluginUnload @ 0x140B7CA70
 * Callers:
 *     VfPoolTrackingEntry @ 0x1406053B0 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExClearPoolFlags @ 0x140647F60 (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140B7C760 (ViPtDeleteAvlTrees.c)
 */

void ViPtPluginUnload()
{
  ExClearPoolFlags(16);
  if ( (VfOptionFlags & 0x1000) != 0 )
    ViPtDeleteAvlTrees();
  if ( VfPoolTraces )
  {
    ExWaitForRundownProtectionRelease(&ViPtUnloadRundown);
    ExFreePoolWithTag(VfPoolTraces, 0x6E496956u);
    VfPoolTraces = 0LL;
    _InterlockedExchange64((volatile __int64 *)&ViPtUnloadRundown, 1LL);
  }
  VfPoolTracesLength = 0;
  VfPoolTracesIndex = 0;
}
