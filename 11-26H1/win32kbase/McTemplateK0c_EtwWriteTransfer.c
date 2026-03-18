/*
 * XREFs of McTemplateK0c_EtwWriteTransfer @ 0x1401DBD68
 * Callers:
 *     EtwTraceConvertTimeOutToBlocking @ 0x1401DAA90 (EtwTraceConvertTimeOutToBlocking.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0c_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  char *v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  char v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = 1LL;
  v6 = &v8;
  return McGenEventWrite_EtwWriteTransfer(a1, &ConvertTimeOutToBlocking, &W32kControlGuid, 2u, &v5);
}
