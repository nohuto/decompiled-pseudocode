/*
 * XREFs of ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003CD50
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003AFF0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800384BC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18003D0FC (-Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D530 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 **),
        int a3,
        __int64 a4)
{
  void (__fastcall *v8)(_QWORD, GUID *, __int64 **); // rbx
  __int64 v9; // rax
  RTL_SRWLOCK *v10; // rbx
  RTL_SRWLOCK *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  const WCHAR *v14; // rbx
  const GUID *v15; // r9
  const GUID *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  void (*v20)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-91h] BYREF
  __int64 v23; // [rsp+40h] [rbp-89h]
  LPVOID pv; // [rsp+48h] [rbp-81h] BYREF
  BOOL v25; // [rsp+50h] [rbp-79h] BYREF
  int v26; // [rsp+54h] [rbp-75h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR SRWLock; // [rsp+68h] [rbp-61h] BYREF
  __int64 v30; // [rsp+78h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-49h] BYREF
  void *v32; // [rsp+90h] [rbp-39h]
  int v33; // [rsp+98h] [rbp-31h]
  int v34; // [rsp+9Ch] [rbp-2Dh]
  __int64 *v35; // [rsp+A0h] [rbp-29h]
  __int64 v36; // [rsp+A8h] [rbp-21h]
  DWORD *p_CurrentThreadId; // [rsp+B0h] [rbp-19h]
  __int64 v38; // [rsp+B8h] [rbp-11h]
  const WCHAR *v39; // [rsp+C0h] [rbp-9h]
  int v40; // [rsp+C8h] [rbp-1h]
  int v41; // [rsp+CCh] [rbp+3h]
  int *v42; // [rsp+D0h] [rbp+7h]
  __int64 v43; // [rsp+D8h] [rbp+Fh]
  BOOL *v44; // [rsp+E0h] [rbp+17h]
  __int64 v45; // [rsp+E8h] [rbp+1Fh]

  v22 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  v8(a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v22);
  pv = 0LL;
  v9 = *v22;
  pv = 0LL;
  (*(void (__fastcall **)(__int64 *, LPVOID *))(v9 + 32))(v22, &pv);
  v10 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v10 )
  {
    v11 = v10 + 33;
    AcquireSRWLockExclusive(v11);
    v23 = 0LL;
  }
  else
  {
    v11 = 0LL;
    *(_QWORD *)&SRWLock.Id = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)ApplicationViewManagementLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v12 + 8));
  else
    *(_OWORD *)(v12 + 8) = 0LL;
  *(_DWORD *)v12 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(
         &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = &qword_18089A9A0;
    qword_18089A9A8 = 0LL;
    byte_18089A9B0 = 0;
    dword_18089A9B4 = 0;
    qword_18089A9A0 = &ShellScreenClippingLogging::`vftable';
    qword_18089A9B8 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18089A9A0, qword_18089A9B8, v20);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_18089A9A0);
  }
  v13 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 5u )
  {
    v25 = a4 != 0;
    v26 = a3;
    v14 = (const WCHAR *)pv;
    CurrentThreadId = GetCurrentThreadId();
    v30 = 0LL;
    v15 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v16 = (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL);
    v44 = &v25;
    v45 = 4LL;
    v42 = &v26;
    v43 = 4LL;
    if ( v14 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v14[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v14 = &LocaleName;
      v18 = 2;
    }
    v39 = v14;
    v40 = v18;
    v41 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v38 = 4LL;
    v35 = &v30;
    v36 = 8LL;
    *(_QWORD *)&SRWLock.Id = 0x1050B000000LL;
    SRWLock.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v13 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v32 = &unk_1807BA65E;
    v33 = 108;
    v34 = 1;
    LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v13 + 32), &SRWLock, v16, v15, 7u, &UserData);
  }
  if ( !*(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  if ( pv )
    CoTaskMemFree(pv);
  v19 = (__int64)v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
}
