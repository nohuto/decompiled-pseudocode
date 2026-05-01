/*
 * XREFs of ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180043DB4
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180043CE0 (-Provider@ApplicationViewManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v15; // r8
  const GUID *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  void (*v20)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-91h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-89h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-81h] BYREF
  int v25; // [rsp+50h] [rbp-79h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-71h] BYREF
  __int64 v27; // [rsp+60h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-49h] BYREF
  void *v30; // [rsp+90h] [rbp-39h]
  int v31; // [rsp+98h] [rbp-31h]
  int v32; // [rsp+9Ch] [rbp-2Dh]
  __int64 *v33; // [rsp+A0h] [rbp-29h]
  __int64 v34; // [rsp+A8h] [rbp-21h]
  PSRWLOCK *p_SRWLock; // [rsp+B0h] [rbp-19h]
  __int64 v36; // [rsp+B8h] [rbp-11h]
  const WCHAR *v37; // [rsp+C0h] [rbp-9h]
  int v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CCh] [rbp+3h]
  int *v40; // [rsp+D0h] [rbp+7h]
  __int64 v41; // [rsp+D8h] [rbp+Fh]
  WINBOOL *p_fPending; // [rsp+E0h] [rbp+17h]
  __int64 v43; // [rsp+E8h] [rbp+1Fh]

  v23 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  v8(a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v23);
  pv = 0LL;
  v9 = *v23;
  pv = 0LL;
  (*(void (__fastcall **)(__int64 *, LPVOID *))(v9 + 32))(v23, &pv);
  v10 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v10 )
  {
    v11 = v10 + 33;
    AcquireSRWLockExclusive(v11);
    Context = 0LL;
  }
  else
  {
    v11 = 0LL;
    SRWLock = 0LL;
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
    Context = &qword_1808DB070;
    qword_1808DB078 = 0LL;
    byte_1808DB080 = 0;
    dword_1808DB084 = 0;
    qword_1808DB070 = &ShellScreenClippingLogging::`vftable';
    qword_1808DB088 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DB070, qword_1808DB088, v20);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &qword_1808DB070);
  }
  v13 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 5u )
  {
    fPending = a4 != 0;
    v25 = a3;
    v14 = (const WCHAR *)pv;
    LODWORD(SRWLock) = GetCurrentThreadId();
    v27 = 0LL;
    v15 = *(_QWORD *)(a1 + 272);
    if ( !*(_BYTE *)(v15 + 4) || _tlgGuidIsZero((const struct _GUID *)(v15 + 24)) )
      v16 = 0LL;
    p_fPending = &fPending;
    v43 = 4LL;
    v40 = &v25;
    v41 = 4LL;
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
      v14 = &pvData;
      v18 = 2;
    }
    v37 = v14;
    v38 = v18;
    v39 = 0;
    p_SRWLock = &SRWLock;
    v36 = 4LL;
    v33 = &v27;
    v34 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v13 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v30 = &unk_1807E782F;
    v31 = 108;
    v32 = 1;
    LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v13 + 32), &EventDescriptor, (LPCGUID)(v15 + 8), v16, 7u, &UserData);
  }
  if ( !*(_DWORD *)(a1 + 312) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  if ( pv )
    CoTaskMemFree(pv);
  v19 = (__int64)v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
}
