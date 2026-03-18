/*
 * XREFs of ?DwmSyncLPCAllowed@@YAJXZ @ 0x14014C610
 * Callers:
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x14014A5D0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncNotifyMinimizing @ 0x14014A6DC (DwmSyncNotifyMinimizing.c)
 *     DwmSyncFlushWindowChanges @ 0x14014A7F0 (DwmSyncFlushWindowChanges.c)
 *     DwmSyncDesktopSwitch @ 0x14014A880 (DwmSyncDesktopSwitch.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x14014B8B0 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     DwmSyncCaptureSurfaceBits @ 0x14014BDE4 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetCompositionAttribute @ 0x14014BF4C (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncGetTitleBarInfo @ 0x14014C2D4 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncHitTestQuery @ 0x14014C4C4 (DwmSyncHitTestQuery.c)
 *     DwmSyncSignalGhost @ 0x1403479A0 (DwmSyncSignalGhost.c)
 * Callees:
 *     <none>
 */

__int64 DwmSyncLPCAllowed(void)
{
  return (unsigned __int8)UserIsInVideoPnpCallout() != 0 ? 0xC0000001 : 0;
}
