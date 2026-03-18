/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1405CA5D0
 * Callers:
 *     PnpSerializeBoot @ 0x1405D875C (PnpSerializeBoot.c)
 *     PiSwIrpStartCreate @ 0x140A7B85C (PiSwIrpStartCreate.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14049F320 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 1u, &v3);
}
