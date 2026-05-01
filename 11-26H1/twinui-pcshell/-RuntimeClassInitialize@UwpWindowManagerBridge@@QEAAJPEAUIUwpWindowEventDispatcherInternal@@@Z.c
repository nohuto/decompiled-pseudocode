/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800FA334
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1800FA0D4 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D2B4 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800CA1E4 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800F978C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?create@?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1801C7BF8 (-create@-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_pol.c)
 *     ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801DFF70 (-StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18028D81C (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___ @ 0x1802A3B1C (std--thread--_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802AB224 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802B7C28 (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802BC53C (--$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@-$co.c)
 *     ??$?0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z @ 0x1802BF888 (--$-0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::_lambda_2a8f8fa06f2e0b1768a49123f6915af2_ @ 0x180431478 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--_lambda_2a8f8fa06f2e0b1768a49123f6915af2_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall UwpWindowManagerBridge::RuntimeClassInitialize(
        UwpWindowManagerBridge *this,
        struct IUwpWindowEventDispatcherInternal *a2)
{
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  int v4; // eax
  __int64 v5; // rdx
  wil *v6; // rcx
  Windows::Internal::ApplicationModel::WindowManagement *v7; // rcx
  __int64 v8; // rcx
  int ActivationFactory; // eax
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, char *); // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, char *); // rdi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, char *); // rdi
  int v24; // eax
  int started; // eax
  wil *v26; // rcx
  int v28; // eax
  UwpWindowManagerBridge *v29; // rbx
  void *v30; // rdx
  CCriticalFailureHandler *v31; // rcx
  const char *v32; // r9
  unsigned __int64 *v33; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v34; // [rsp+28h] [rbp-C0h]
  int v35; // [rsp+20h] [rbp-C8h]
  unsigned int v36[4]; // [rsp+30h] [rbp-B8h] BYREF
  _Thrd_t v37; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+50h] [rbp-98h] BYREF
  std::_Ref_count_base *v39[2]; // [rsp+60h] [rbp-88h] BYREF
  UwpWindowManagerBridge *v40; // [rsp+70h] [rbp-78h]
  _BYTE v41[24]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v42; // [rsp+90h] [rbp-58h] BYREF
  _Thrd_t v43; // [rsp+A0h] [rbp-48h] BYREF
  Windows::Internal::ApplicationModel::WindowManagement *retaddr; // [rsp+E8h] [rbp+0h]

  v40 = this;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 37,
    (__int64)a2);
  try
  {
    *(_OWORD *)v39 = 0LL;
    _create___event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      v39,
      1LL);
    event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((__int64)this + 280, 1, 0LL);
    if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z,
        v35);
    v4 = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
           (__int64)this + 288,
           1,
           0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v35);
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(retaddr) )
    {
      v38 = 0LL;
      __ExceptionPtrCreate(&v38);
      *(_QWORD *)v36 = this;
      if ( this )
        (*(void (__fastcall **)(UwpWindowManagerBridge *))(*(_QWORD *)this + 8LL))(this);
      v5 = lambda_2a8f8fa06f2e0b1768a49123f6915af2_::_lambda_2a8f8fa06f2e0b1768a49123f6915af2_(
             (unsigned int)v41,
             (unsigned int)v39,
             (_DWORD)this,
             (unsigned int)v36,
             (__int64)&v38);
      std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___(&v37, v5);
      if ( !v37._Id )
        std::_Throw_Cpp_error(1);
      v43 = v37;
      if ( _Thrd_detach(&v43) )
        std::_Throw_Cpp_error(1);
      v37 = 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
      std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(v41);
      if ( *(_QWORD *)v36 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v36 + 16LL))(*(_QWORD *)v36);
      if ( v39[0] )
        v6 = *(wil **)v39[0];
      else
        v6 = 0LL;
      wil::handle_wait(v6, (void *)0xFFFFFFFFLL);
      if ( __ExceptionPtrToBool(&v38) )
      {
        v37 = 0LL;
        __ExceptionPtrCopy(&v37, &v38);
        std::rethrow_exception(&v37);
      }
      __ExceptionPtrDestroy(&v38);
    }
    else
    {
      v8 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( WindowsCreateStringReference(
             L"Windows.Internal.ApplicationModel.WindowManagement.Window",
             0x39u,
             (HSTRING_HEADER *)&v43._Id,
             (HSTRING *)&v43) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      ActivationFactory = RoGetActivationFactory(
                            v43._Hnd,
                            &GUID_5e75aba7_c424_4076_9d47_409a1eda087f,
                            (char *)this + 168);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)ActivationFactory,
          v35);
      v11 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                        (HSTRING *)&v43,
                        (const unsigned __int16 (*)[69])v10);
      v13 = RoGetActivationFactory(*v12, &GUID_b880ce78_2e50_5a73_bfaa_a3f9a8b2f042, (char *)this + 48);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7C,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v13,
          v35);
      v14 = *((_QWORD *)this + 21);
      v15 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
      v16 = v15(v14, (char *)this + 176);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7E,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v16,
          v35);
      v17 = *((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>(
        (char *)this + 176,
        (char *)this + 184);
      wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(v36);
      v18 = *(_QWORD *)v36;
      v19 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)v36 + 48LL);
      v20 = *((_QWORD *)this + 29);
      *((_QWORD *)this + 29) = 0LL;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v21 = v19(v18, (char *)this + 232);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x82,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v21,
          v35);
      v22 = *((_QWORD *)this + 29);
      v23 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 120LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 30);
      v24 = v23(v22, (char *)this + 240);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x84,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v24,
          v35);
      v7 = *(Windows::Internal::ApplicationModel::WindowManagement **)v36;
      if ( *(_QWORD *)v36 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v36 + 16LL))(*(_QWORD *)v36);
    }
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v7) )
    {
      started = UwpWindowManagerBridge::StartWindowWatcher(this);
      if ( started < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x8B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)started,
          v35);
    }
    v26 = v39[1];
    if ( v39[1] )
      std::_Ref_count_base::_Decref(v39[1]);
  }
  catch ( ... )
  {
    v28 = wil::ResultFromCaughtException(v26);
    v29 = v40;
    *((_DWORD *)v40 + 76) = v28;
    wil::details::SetEvent(*((wil::details **)v29 + 35), v30);
    v32 = (const char *)*((unsigned int *)v29 + 76);
    v36[0] = *((_DWORD *)v29 + 76);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v31, (int *)v36);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v32 = (const char *)v36[0];
    }
    if ( (int)v32 < 0 )
    {
      if ( (_DWORD)v32 != -2147024882 && (_DWORD)v32 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v31,
          (int *)v36,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          0x96u,
          v33,
          v34);
        v32 = (const char *)v36[0];
      }
      if ( (int)v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x96,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          v32);
        return v36[0];
      }
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
