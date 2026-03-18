/*
 * XREFs of McTemplateK0tt_EtwWriteTransfer @ 0x140011108
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     DxgkSetPresenterViewMode @ 0x140413F50 (DxgkSetPresenterViewMode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0tt_EtwWriteTransfer(__int64 a1, __int64 a2)
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2);
}
