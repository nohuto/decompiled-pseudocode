/*
 * XREFs of ?ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z @ 0x14009B730
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessMove(__int64 a1, const struct tagPOINT *a2, HWND a3)
{
  LONG y; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v4[3]; // [rsp+34h] [rbp-45h] BYREF
  HWND v5; // [rsp+40h] [rbp-39h] BYREF
  __int64 v6; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v9; // [rsp+70h] [rbp-9h]
  int v10; // [rsp+78h] [rbp-1h]
  int v11; // [rsp+7Ch] [rbp+3h]
  __int64 *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  _DWORD *v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  LONG *p_y; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  HWND *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    y = a2->y;
    v4[0] = a2->x;
    v18 = &v5;
    p_y = &y;
    v14 = v4;
    v12 = &v6;
    v6 = a1;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v5 = a3;
    v19 = 8LL;
    v17 = 4LL;
    v15 = 4LL;
    v13 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v9 = &unk_14028C672;
    UserData.Reserved = 2;
    v10 = 64;
    v11 = 1;
    v4[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
}
