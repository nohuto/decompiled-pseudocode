/*
 * XREFs of ?AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12@@Z @ 0x1401BCA5C
 * Callers:
 *     AllocateHidData @ 0x140090364 (AllocateHidData.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RawInput::AllocateHidData(__int64 *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  const char *v6; // rcx
  __int64 v7; // rax
  _DWORD v8[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v9; // [rsp+38h] [rbp-59h] BYREF
  __int64 v10; // [rsp+40h] [rbp-51h] BYREF
  __int64 v11; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-31h] BYREF
  void *v14; // [rsp+70h] [rbp-21h]
  int v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+7Ch] [rbp-15h]
  __int64 *v17; // [rsp+80h] [rbp-11h]
  __int64 v18; // [rsp+88h] [rbp-9h]
  _DWORD *v19; // [rsp+90h] [rbp-1h]
  __int64 v20; // [rsp+98h] [rbp+7h]
  __int64 *v21; // [rsp+A0h] [rbp+Fh]
  __int64 v22; // [rsp+A8h] [rbp+17h]
  __int64 *v23; // [rsp+B0h] [rbp+1Fh]
  __int64 v24; // [rsp+B8h] [rbp+27h]
  const char *v25; // [rsp+C0h] [rbp+2Fh]
  int v26; // [rsp+C8h] [rbp+37h]
  int v27; // [rsp+CCh] [rbp+3Bh]

  if ( (unsigned int)dword_1403AA9C0 > 5
    && (qword_1403AA9D0 & 0x40000) != 0
    && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
        v6 = "Default";
      else
        v6 = "UNKNOWN";
    }
    else
    {
      v6 = "Explicit";
    }
    v11 = *a1;
    v7 = -1LL;
    v9 = a4;
    v10 = a3;
    v8[0] = a2;
    do
      ++v7;
    while ( v6[v7] );
    v25 = v6;
    v26 = v7 + 1;
    v27 = 0;
    v23 = &v9;
    v24 = 8LL;
    v21 = &v10;
    v22 = 8LL;
    v19 = v8;
    v17 = &v11;
    UserData.Ptr = (ULONGLONG)off_1403AA9C8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v20 = 4LL;
    v18 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x40000LL;
    UserData.Size = *(unsigned __int16 *)off_1403AA9C8;
    v14 = &unk_1403735A1;
    UserData.Reserved = 2;
    v15 = 76;
    v16 = 1;
    v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
