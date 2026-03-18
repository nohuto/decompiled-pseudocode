/*
 * XREFs of McTemplateK0cd_EtwWriteTransfer @ 0x14003CA70
 * Callers:
 *     EtwTraceEndTranslateMessage @ 0x14003BD20 (EtwTraceEndTranslateMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x14003BD50 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceEndDispatchMessage @ 0x14003C3E0 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceBeginDispatchMessage @ 0x14003C410 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceWakeMIT @ 0x14003C580 (EtwTraceWakeMIT.c)
 *     EtwTraceEndAppMessageProcessing @ 0x14003CAF0 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceWakeRIT @ 0x140139AF0 (EtwTraceWakeRIT.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14003E650 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0cd_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  _QWORD v6[3]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  char v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  v6[2] = &v12;
  v8 = 0;
  v7 = 1;
  v9 = &a5;
  v11 = 0;
  v10 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3LL, v6);
}
