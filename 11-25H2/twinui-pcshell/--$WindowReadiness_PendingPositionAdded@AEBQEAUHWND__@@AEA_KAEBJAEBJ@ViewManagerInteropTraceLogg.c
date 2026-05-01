/*
 * XREFs of ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x180071244
 * Callers:
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18024E0B0 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180434CD8 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180070E64 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // r8d
  int v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v17; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+84h] [rbp+3h]
  __int64 *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  _DWORD *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  int *v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]
  int *v29; // [rsp+B8h] [rbp+37h]
  __int64 v30; // [rsp+C0h] [rbp+3Fh]

  v8 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a2;
    v10 = *a1;
    v11 = *a4;
    v12 = *a3;
    v29 = &v14;
    v27 = &v15;
    v25 = v16;
    v23 = &v17;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v8 + 1);
    v16[0] = v9;
    v17 = v10;
    v14 = v11;
    v15 = v12;
    EventDescriptor.Keyword = 0LL;
    v30 = 4LL;
    v28 = 4LL;
    v26 = 4LL;
    v24 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_1807CE543;
    UserData.Reserved = 2;
    v21 = 85;
    v22 = 1;
    v16[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v8;
}
