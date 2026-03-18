/*
 * XREFs of McTemplateK0nq_EtwWriteTransfer @ 0x1401BDDE4
 * Callers:
 *     EtwTraceUIPISystemError @ 0x1401DBAF0 (EtwTraceUIPISystemError.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0nq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  v8 = a5;
  v9 = 36LL;
  v10 = &a6;
  v11 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &UIPISystemEvent, &W32kControlGuid, 3u, &v7);
}
