/*
 * XREFs of ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x1800683D8
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180074290 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180068318 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x180068ACC (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Reactivate::StartActivity(
        SingleViewExperienceTelemetry::Reactivate *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r15
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  _DWORD v19[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v20; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  void *v23; // [rsp+60h] [rbp-39h]
  int v24; // [rsp+68h] [rbp-31h]
  int v25; // [rsp+6Ch] [rbp-2Dh]
  __int64 *v26; // [rsp+70h] [rbp-29h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  _DWORD *v28; // [rsp+80h] [rbp-19h]
  __int64 v29; // [rsp+88h] [rbp-11h]
  const unsigned __int16 *v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+98h] [rbp-1h]
  int v32; // [rsp+9Ch] [rbp+3h]
  const unsigned __int16 *v33; // [rsp+A0h] [rbp+7h]
  int v34; // [rsp+A8h] [rbp+Fh]
  int v35; // [rsp+ACh] [rbp+13h]
  const unsigned __int16 *v36; // [rsp+B0h] [rbp+17h]
  int v37; // [rsp+B8h] [rbp+1Fh]
  int v38; // [rsp+BCh] [rbp+23h]

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     v8,
                     _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v11 = *((_QWORD *)this + 34);
    v19[0] = CurrentThreadId;
    v20 = 0x1000000LL;
    if ( !*(_BYTE *)(v11 + 4) || _tlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v12 = 0LL;
    v13 = -1LL;
    if ( a4 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a4[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      a4 = &pvData;
      v15 = 2;
    }
    v36 = a4;
    v37 = v15;
    v38 = 0;
    if ( a3 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      a3 = &pvData;
      v17 = 2;
    }
    v33 = a3;
    v34 = v17;
    v35 = 0;
    if ( a2 )
    {
      do
        ++v13;
      while ( a2[v13] );
      v18 = 2 * v13 + 2;
    }
    else
    {
      a2 = &pvData;
      v18 = 2;
    }
    v31 = v18;
    v30 = a2;
    v28 = v19;
    v32 = 0;
    v26 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    v29 = 4LL;
    v27 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_180831E54;
    UserData.Reserved = 2;
    v24 = 84;
    v25 = 1;
    v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v9 + 32), &EventDescriptor, (LPCGUID)(v11 + 8), v12, 7u, &UserData);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::Reactivate *)((char *)this + 288));
}
