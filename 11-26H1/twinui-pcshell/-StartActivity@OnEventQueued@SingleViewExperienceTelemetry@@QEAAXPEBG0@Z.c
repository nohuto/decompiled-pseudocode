/*
 * XREFs of ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180068138
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180067D04 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180068318 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x180068ACC (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnEventQueued::StartActivity(
        SingleViewExperienceTelemetry::OnEventQueued *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // eax
  _DWORD v15[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  void *v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+74h] [rbp-Dh]
  __int64 *v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  _DWORD *v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  const unsigned __int16 *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]
  const unsigned __int16 *v29; // [rsp+A8h] [rbp+27h]
  int v30; // [rsp+B0h] [rbp+2Fh]
  int v31; // [rsp+B4h] [rbp+33h]

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     v6,
                     _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v9 = *((_QWORD *)this + 34);
    v15[0] = CurrentThreadId;
    v16 = 0LL;
    if ( !*(_BYTE *)(v9 + 4) || _tlgGuidIsZero((const struct _GUID *)(v9 + 24)) )
      v10 = 0LL;
    v11 = -1LL;
    if ( a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      a3 = &pvData;
      v13 = 2;
    }
    v29 = a3;
    v30 = v13;
    v31 = 0;
    if ( a2 )
    {
      do
        ++v11;
      while ( a2[v11] );
      v14 = 2 * v11 + 2;
    }
    else
    {
      a2 = &pvData;
      v14 = 2;
    }
    v27 = v14;
    v26 = a2;
    v24 = v15;
    v28 = 0;
    v22 = &v16;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    v25 = 4LL;
    v23 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_1808304C4;
    UserData.Reserved = 2;
    v20 = 76;
    v21 = 1;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, (LPCGUID)(v9 + 8), v10, 6u, &UserData);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::OnEventQueued *)((char *)this + 288));
}
