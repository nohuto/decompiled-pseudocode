/*
 * XREFs of McTemplateK0cd_EtwWriteTransfer @ 0x14001FD78
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x14001FD20 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceWakeRIT @ 0x1400E5A90 (EtwTraceWakeRIT.c)
 *     EtwTraceWakeMIT @ 0x140133D90 (EtwTraceWakeMIT.c)
 *     EtwTraceEndDispatchMessage @ 0x14013FDB0 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceBeginDispatchMessage @ 0x140140000 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x14015E770 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceEndTranslateMessage @ 0x140160B40 (EtwTraceEndTranslateMessage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cd_EtwWriteTransfer(
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
  v10 = 4LL;
  v9 = &a5;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
