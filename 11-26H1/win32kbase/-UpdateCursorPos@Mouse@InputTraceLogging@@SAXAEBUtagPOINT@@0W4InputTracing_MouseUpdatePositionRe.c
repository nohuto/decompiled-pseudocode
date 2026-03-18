/*
 * XREFs of ?UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionReason@@KJ@Z @ 0x14012C96C
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::UpdateCursorPos(_DWORD *a1, int *a2, int a3, int a4, int a5)
{
  const char *v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // [rsp+30h] [rbp-81h] BYREF
  int v10; // [rsp+34h] [rbp-7Dh] BYREF
  int v11; // [rsp+38h] [rbp-79h] BYREF
  int v12; // [rsp+3Ch] [rbp-75h] BYREF
  int v13; // [rsp+40h] [rbp-71h] BYREF
  _DWORD v14[3]; // [rsp+44h] [rbp-6Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-51h] BYREF
  void *v17; // [rsp+70h] [rbp-41h]
  int v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+7Ch] [rbp-35h]
  _DWORD *v20; // [rsp+80h] [rbp-31h]
  __int64 v21; // [rsp+88h] [rbp-29h]
  int *v22; // [rsp+90h] [rbp-21h]
  __int64 v23; // [rsp+98h] [rbp-19h]
  int *v24; // [rsp+A0h] [rbp-11h]
  __int64 v25; // [rsp+A8h] [rbp-9h]
  int *v26; // [rsp+B0h] [rbp-1h]
  __int64 v27; // [rsp+B8h] [rbp+7h]
  const char *v28; // [rsp+C0h] [rbp+Fh]
  int v29; // [rsp+C8h] [rbp+17h]
  int v30; // [rsp+CCh] [rbp+1Bh]
  int *v31; // [rsp+D0h] [rbp+1Fh]
  __int64 v32; // [rsp+D8h] [rbp+27h]
  int *v33; // [rsp+E0h] [rbp+2Fh]
  __int64 v34; // [rsp+E8h] [rbp+37h]

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    v10 = a4;
    v9 = a5;
    if ( a3 )
    {
      v8 = a3 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          v6 = "ActiveCursorTracking";
        else
          v6 = "UNKNOWN";
      }
      else
      {
        v6 = "SetCursorPos";
      }
    }
    else
    {
      v6 = "MouseInput";
    }
    v11 = a2[1];
    v12 = *a2;
    v13 = a1[1];
    v14[0] = *a1;
    v33 = &v9;
    v31 = &v10;
    v7 = -1LL;
    v34 = 4LL;
    v32 = 4LL;
    do
      ++v7;
    while ( v6[v7] );
    v28 = v6;
    v29 = v7 + 1;
    v30 = 0;
    v26 = &v11;
    v27 = 4LL;
    v24 = &v12;
    v22 = &v13;
    v20 = v14;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v25 = 4LL;
    v23 = 4LL;
    v21 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v17 = &unk_14028AAAF;
    UserData.Reserved = 2;
    v18 = 91;
    v19 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
}
