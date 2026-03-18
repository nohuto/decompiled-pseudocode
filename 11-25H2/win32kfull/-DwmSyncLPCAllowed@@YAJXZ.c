/*
 * XREFs of ?DwmSyncLPCAllowed@@YAJXZ @ 0x140118DBC
 * Callers:
 *     DwmSyncFlushWindowChanges @ 0x14011825C (DwmSyncFlushWindowChanges.c)
 *     DwmSyncDesktopSwitch @ 0x1401182EC (DwmSyncDesktopSwitch.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1401183F4 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     DwmSyncCaptureSurfaceBits @ 0x14011861C (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x140118934 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncHitTestQuery @ 0x140118B24 (DwmSyncHitTestQuery.c)
 *     DwmSyncGetCompositionAttribute @ 0x140118C6C (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncNotifyMinimizing @ 0x1401190E4 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1401191E0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncSignalGhost @ 0x140325630 (DwmSyncSignalGhost.c)
 * Callees:
 *     <none>
 */

__int64 DwmSyncLPCAllowed(void)
{
  return (unsigned __int8)UserIsInVideoPnpCallout() != 0 ? 0xC0000001 : 0;
}
