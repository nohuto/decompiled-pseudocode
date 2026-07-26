/*
 * XREFs of McTemplateK0pp_EtwWriteTransfer @ 0x1400DD770
 * Callers:
 *     ?ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1400DD280 (-ndisMSendPacketCompleteToOpen@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pp_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  va_list v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &SendPacketCompleteToOpen, a3, 3u, &v4);
}
