/*
 * XREFs of McTemplateK0cp_EtwWriteTransfer @ 0x140107CB8
 * Callers:
 *     EtwTraceEndSendMessage @ 0x140107C00 (EtwTraceEndSendMessage.c)
 *     EtwTraceEndRetrieveSendMessage @ 0x140107C60 (EtwTraceEndRetrieveSendMessage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cp_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  char *v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 *v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  char v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v8 = 1LL;
  v7 = &v11;
  v10 = 8LL;
  v9 = &a5;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
