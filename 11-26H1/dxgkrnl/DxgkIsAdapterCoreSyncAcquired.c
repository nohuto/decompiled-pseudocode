/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x14030BF64
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x140192278 (DpiFdoWaitConnectionChangeComplete.c)
 *     DpExcludeAdapterAccess @ 0x140237630 (DpExcludeAdapterAccess.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x14024D210 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030BFE0 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

char __fastcall DxgkIsAdapterCoreSyncAcquired(__int64 a1)
{
  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired();
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 329;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"No pAdapter specified", 329LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
