/*
 * XREFs of ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1400F9FB4
 * Callers:
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::StartFrame(const struct RIMDEV *a1, const struct RIMHOLDINGFRAME *a2)
{
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v5[3]; // [rsp+34h] [rbp-45h] BYREF
  __int64 v6; // [rsp+40h] [rbp-39h] BYREF
  const struct RIMDEV *v7; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v10; // [rsp+70h] [rbp-9h]
  int v11; // [rsp+78h] [rbp-1h]
  int v12; // [rsp+7Ch] [rbp+3h]
  const struct RIMDEV **v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  __int64 *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  _DWORD *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  int *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v3 = *((_QWORD *)a1 + 56);
    v20 = 4LL;
    v18 = 4LL;
    v16 = 8LL;
    v4 = *(unsigned __int16 *)(v3 + 18);
    v5[0] = *(unsigned __int16 *)(v3 + 16);
    v6 = *((_QWORD *)a2 + 4);
    v19 = &v4;
    v17 = v5;
    v15 = &v6;
    v13 = &v7;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v7 = a1;
    v14 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 256LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v10 = &unk_140286497;
    UserData.Reserved = 2;
    v11 = 63;
    v12 = 1;
    v5[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
}
