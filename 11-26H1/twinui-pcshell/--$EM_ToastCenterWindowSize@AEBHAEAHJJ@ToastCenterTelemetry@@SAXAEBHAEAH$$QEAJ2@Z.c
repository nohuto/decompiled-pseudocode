/*
 * XREFs of ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@ToastCenterTelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x18001C838
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001D6FC (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall ToastCenterTelemetry::EM_ToastCenterWindowSize<int const &,int &,long,long>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  int v12; // ecx
  int v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  int v16; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v17[3]; // [rsp+44h] [rbp-3Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+84h] [rbp+3h]
  _DWORD *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  int *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  int *v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]
  int *v29; // [rsp+B8h] [rbp+37h]
  __int64 v30; // [rsp+C0h] [rbp+3Fh]

  v8 = ToastCenterLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a2;
    v10 = *a4;
    v11 = *a3;
    v12 = *a1;
    v29 = &v14;
    v27 = &v15;
    v25 = &v16;
    v23 = v17;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v8 + 1);
    v16 = v9;
    v17[0] = v12;
    v14 = v10;
    v15 = v11;
    EventDescriptor.Keyword = 0LL;
    v30 = 4LL;
    v28 = 4LL;
    v26 = 4LL;
    v24 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_1807F24B1;
    UserData.Reserved = 2;
    v21 = 108;
    v22 = 1;
    v17[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v8;
}
