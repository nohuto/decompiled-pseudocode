/*
 * XREFs of ?YieldInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14027D1B8
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x14023EDC0 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14012B154 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::YieldInputQueue(const struct tagQMSG *a1, const struct tagQ *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // [rsp+30h] [rbp-49h] BYREF
  int v6; // [rsp+34h] [rbp-45h] BYREF
  int v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  int *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  __int64 *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  int *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  int *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_14039BB50 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_14039BB50, 64LL) )
    {
      v5 = *(_DWORD *)(v2 + 40);
      v6 = *(_DWORD *)(v2 + 520);
      v7 = *(_DWORD *)(v3 + 24);
      v9 = *(_QWORD *)(v3 + 144);
      v19 = &v5;
      v17 = &v6;
      v15 = &v8;
      v13 = &v7;
      v11 = &v9;
      v8 = v2;
      v20 = v4;
      v18 = v4;
      v16 = 8LL;
      v14 = v4;
      v12 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14039BB50, byte_140367639, 0LL, 0LL, 7u, &v10);
    }
  }
}
