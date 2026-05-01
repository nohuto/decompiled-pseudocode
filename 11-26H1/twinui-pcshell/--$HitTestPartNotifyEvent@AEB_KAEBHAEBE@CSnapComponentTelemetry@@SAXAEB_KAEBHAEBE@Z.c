/*
 * XREFs of ??$HitTestPartNotifyEvent@AEB_KAEBHAEBE@CSnapComponentTelemetry@@SAXAEB_KAEBHAEBE@Z @ 0x18006FB68
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x18006FA20 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800704FC (-Instance@WindowManagementLogging@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall CSnapComponentTelemetry::HitTestPartNotifyEvent<unsigned __int64 const &,int const &,unsigned char const &>(
        __int64 *a1,
        _DWORD *a2,
        _BYTE *a3)
{
  struct WindowManagementLogging *v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  bool v11; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v12[3]; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v13; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  __int64 *v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  _DWORD *v21; // [rsp+98h] [rbp+27h]
  __int64 v22; // [rsp+A0h] [rbp+2Fh]
  bool *v23; // [rsp+A8h] [rbp+37h]
  __int64 v24; // [rsp+B0h] [rbp+3Fh]

  v6 = WindowManagementLogging::Instance();
  v7 = *((_QWORD *)v6 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3 == 0;
    v12[0] = *a2;
    v9 = *a1;
    v11 = !v8;
    v13 = v9;
    v24 = 1LL;
    v23 = &v11;
    v22 = 4LL;
    v21 = v12;
    v19 = &v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v20 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_180821B39;
    v18 = 1;
    UserData.Reserved = 2;
    v17 = 48;
    v12[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v6;
}
