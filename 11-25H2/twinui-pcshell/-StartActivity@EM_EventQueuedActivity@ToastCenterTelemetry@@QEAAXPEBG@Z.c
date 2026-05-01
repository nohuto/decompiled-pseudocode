/*
 * XREFs of ?StartActivity@EM_EventQueuedActivity@ToastCenterTelemetry@@QEAAXPEBG@Z @ 0x180032B78
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180031270 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017780 (-zInternalStart@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001783C (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall ToastCenterTelemetry::EM_EventQueuedActivity::StartActivity(
        ToastCenterTelemetry::EM_EventQueuedActivity *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rsi
  const GUID *v6; // rax
  ULONGLONG v7; // rdx
  const GUID *v8; // r8
  __int64 v9; // rcx
  int v10; // ecx
  _DWORD v11[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  __int64 *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  _DWORD *v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  const unsigned __int16 *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = ToastCenterLogging::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    v11[0] = GetCurrentThreadId();
    v12 = 0LL;
    v6 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v8 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] != (_WORD)v7 );
      v10 = 2 * v9 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v10 = v7 + 2;
    }
    v23 = v10;
    v20 = v11;
    v24 = v7;
    v18 = &v12;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v5 + 1);
    EventDescriptor.Keyword = v7;
    v22 = a2;
    v21 = 4LL;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v15 = &unk_1807BE023;
    UserData.Reserved = v7 + 2;
    v16 = 77;
    v17 = 1;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, v8, v6, 5u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
