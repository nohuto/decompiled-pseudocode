/*
 * XREFs of ?QueueEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GG@Z @ 0x14012D190
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14009F5B4 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::QueueEvent(
        __int64 a1,
        const struct tagPOINT *a2,
        unsigned __int16 a3,
        unsigned __int16 a4)
{
  int v4; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+34h] [rbp-55h] BYREF
  LONG y; // [rsp+38h] [rbp-51h] BYREF
  _DWORD v7[3]; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v11; // [rsp+70h] [rbp-19h]
  int v12; // [rsp+78h] [rbp-11h]
  int v13; // [rsp+7Ch] [rbp-Dh]
  __int64 *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  _DWORD *v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  LONG *p_y; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]
  int *v20; // [rsp+B0h] [rbp+27h]
  __int64 v21; // [rsp+B8h] [rbp+2Fh]
  int *v22; // [rsp+C0h] [rbp+37h]
  __int64 v23; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    v8 = a1;
    v5 = a3;
    y = a2->y;
    v7[0] = a2->x;
    v22 = &v4;
    v20 = &v5;
    p_y = &y;
    v16 = v7;
    v14 = &v8;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v4 = a4;
    v23 = 4LL;
    v21 = 4LL;
    v19 = 4LL;
    v17 = 4LL;
    v15 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v11 = &unk_14028C8D9;
    UserData.Reserved = 2;
    v12 = 74;
    v13 = 1;
    v7[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
