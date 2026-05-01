/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x18042B968
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180410958 (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800F978C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x1802108F8 (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802B7BFC (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802B7C28 (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___ @ 0x180427EC0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize(
        WindowManagerBridge *this,
        struct IWindowEventDispatcherInternal *a2)
{
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  int v4; // eax
  __int64 v5; // rcx
  HSTRING *v6; // rax
  int ActivationFactory; // eax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebx
  wil *v15; // rcx
  int v17; // eax
  WindowManagerBridge *v18; // rbx
  void *v19; // rdx
  CCriticalFailureHandler *v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 *v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+20h] [rbp-58h]
  RTL_SRWLOCK *v25; // [rsp+30h] [rbp-48h] BYREF
  WindowManagerBridge *v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v26 = this;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 35,
    (__int64)a2);
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)this + 264, 1, 0LL);
  try
  {
    if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z,
        v24);
    v4 = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
           (__int64)this + 272,
           1,
           0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v24);
    v5 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = Windows::Internal::StringReference::StringReference(
           &string,
           L"Windows.Internal.ApplicationModel.WindowManagement.Window");
    ActivationFactory = RoGetActivationFactory(*v6, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 184);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v24);
    v8 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( WindowsCreateStringReference(
           L"Windows.Internal.ApplicationModel.WindowManagement.AppView",
           0x3Au,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v9 = RoGetActivationFactory(string, &GUID_882d9981_e3b3_4275_a857_00c3910fb5c3, (char *)this + 48);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9,
        v24);
    wil::AcquireSRWLockExclusive(&v25, (RTL_SRWLOCK *)this + 31);
    v10 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
            &v27,
            (__int64)this);
    CurrentThreadId = GetCurrentThreadId();
    v13 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___(
            v12,
            CurrentThreadId,
            v10);
    v14 = v13;
    if ( v13 >= 0 )
    {
      ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted();
      v14 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    v15 = retaddr;
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v14,
        v24);
  }
  catch ( ... )
  {
    v17 = wil::ResultFromCaughtException(v15);
    v18 = v26;
    *((_DWORD *)v26 + 72) = v17;
    wil::details::SetEvent(*((wil::details **)v18 + 33), v19);
    v21 = *((unsigned int *)v18 + 72);
    LODWORD(v25) = *((_DWORD *)v18 + 72);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v20, (int *)&v25);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v21 = (unsigned int)v25;
    }
    if ( (v21 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v21 != -2147024882 && (_DWORD)v21 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v20,
          (int *)&v25,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          0x48u,
          v22,
          v23);
        v21 = (unsigned int)v25;
      }
      if ( (v21 & 0x80000000) != 0LL )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)v21);
        return (unsigned int)v25;
      }
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
