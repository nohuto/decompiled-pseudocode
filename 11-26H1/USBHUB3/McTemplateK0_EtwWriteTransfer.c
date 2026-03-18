/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x140001A84
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x140079008 (HUBDRIVER_EtwEnableCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x14007ABE0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A20 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 1u, &v4);
}
