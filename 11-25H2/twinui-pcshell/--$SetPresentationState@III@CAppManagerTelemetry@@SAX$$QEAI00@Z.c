/*
 * XREFs of ??$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z @ 0x18001B4D4
 * Callers:
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x18001B350 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18003EEC0 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall CAppManagerTelemetry::SetPresentationState<unsigned int,unsigned int,unsigned int>(
        int *a1,
        int *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v16; // [rsp+68h] [rbp+7h]
  int v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+74h] [rbp+13h]
  _DWORD *v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  int *v21; // [rsp+88h] [rbp+27h]
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  int *v23; // [rsp+98h] [rbp+37h]
  __int64 v24; // [rsp+A0h] [rbp+3Fh]

  v6 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v8 = *a3;
    v9 = *a1;
    v23 = &v11;
    v21 = &v12;
    v19 = v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v6 + 1);
    v12 = v7;
    v13[0] = v9;
    v11 = v8;
    EventDescriptor.Keyword = 0LL;
    v24 = 4LL;
    v22 = 4LL;
    v20 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_1807B99A7;
    UserData.Reserved = 2;
    v17 = 56;
    v18 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v6;
}
