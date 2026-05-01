/*
 * XREFs of ??$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z @ 0x1800E34F0
 * Callers:
 *     _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x1800E3494 (_lambda_bb8c74dc12fedcc2a4c0331452efef3b_--operator().c)
 * Callees:
 *     ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800704FC (-Instance@WindowManagementLogging@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall WindowTabHostTelemetry::WindowTabHostThumbnailRequested<unsigned int const &,unsigned int const &,__int64>(
        _DWORD *a1,
        int *a2,
        int *a3)
{
  struct WindowManagementLogging *v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+38h] [rbp-49h] BYREF
  int v10; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  _DWORD *v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  int *v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  int *v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]
  __int64 *v24; // [rsp+B8h] [rbp+37h]
  __int64 v25; // [rsp+C0h] [rbp+3Fh]

  v6 = WindowManagementLogging::Instance();
  v7 = *((_QWORD *)v6 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v9 = *a3;
    v10 = *a2;
    v11[0] = *a1;
    v24 = &v12;
    v22 = &v9;
    v20 = &v10;
    v18 = v11;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v12 = 0x1000000LL;
    v25 = 8LL;
    v23 = 4LL;
    v21 = 4LL;
    v19 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v15 = &unk_1808206D0;
    UserData.Reserved = 2;
    v16 = 79;
    v17 = 1;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v6;
}
