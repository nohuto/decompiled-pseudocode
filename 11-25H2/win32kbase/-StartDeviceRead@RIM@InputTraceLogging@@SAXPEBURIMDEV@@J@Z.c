/*
 * XREFs of ?StartDeviceRead@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z @ 0x1400CFED0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 * Callees:
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400D0030 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::StartDeviceRead(const struct RIMDEV *a1, int a2)
{
  unsigned int v2; // ecx
  const char *v3; // rax
  ULONGLONG v4; // r10
  __int64 v5; // r9
  const char *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  _DWORD v9[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  void *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  __int64 *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  const char *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  _DWORD *v21; // [rsp+90h] [rbp+37h]
  __int64 v22; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_14029EE20 > 5
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v2 = *((_DWORD *)a1 + 12);
    v9[0] = a2;
    v3 = InputTraceLogging::RimDevTypeToString(v2);
    v10 = v5;
    v6 = v3;
    v22 = 4LL;
    v21 = v9;
    if ( v3 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      v8 = v7 + 1;
    }
    else
    {
      v6 = (const char *)&unk_14025EF20;
      v8 = 1;
    }
    v19 = v8;
    v20 = 0;
    v16 = &v10;
    UserData.Ptr = (ULONGLONG)off_14029EE28;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v18 = v6;
    v17 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = v4;
    UserData.Size = *(unsigned __int16 *)off_14029EE28;
    v13 = &unk_14027C427;
    v15 = 1;
    UserData.Reserved = 2;
    v14 = 46;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_14029EE40, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
