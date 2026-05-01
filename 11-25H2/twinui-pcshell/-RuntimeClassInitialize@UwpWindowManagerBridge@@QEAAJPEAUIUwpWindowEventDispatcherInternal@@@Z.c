/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A3F6C
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1800A3D10 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180072370 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1800A2F70 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?create@?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800A450C (-create@-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_pol.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800A53F0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800C3F04 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801ECB20 (-StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180295DBC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___ @ 0x1802AB548 (std--thread--_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802B3890 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802C0EB0 (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ??$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802C5954 (--$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@-$co.c)
 *     ??$?0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z @ 0x1802C8338 (--$-0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall UwpWindowManagerBridge::RuntimeClassInitialize(
        UwpWindowManagerBridge *this,
        struct IUwpWindowEventDispatcherInternal *a2)
{
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  int v4; // eax
  std::_Ref_count_base *v5; // rbx
  wil **v6; // rdi
  unsigned int v7; // r8d
  int v8; // r9d
  wil *v9; // rcx
  Windows::Internal::ApplicationModel::WindowManagement *v10; // rcx
  __int64 v11; // rcx
  int ActivationFactory; // eax
  const unsigned __int16 *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, char *); // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, char *); // rdi
  _QWORD *v23; // rcx
  int v24; // eax
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64, char *); // rdi
  int v27; // eax
  wil *v28; // rcx
  int started; // eax
  int v31; // eax
  UwpWindowManagerBridge *v32; // rbx
  void *v33; // rdx
  CCriticalFailureHandler *v34; // rcx
  const char *v35; // r9
  char v36; // al
  unsigned __int64 *v37; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v38; // [rsp+28h] [rbp-C0h]
  int v39; // [rsp+20h] [rbp-C8h]
  unsigned int v40[4]; // [rsp+30h] [rbp-B8h] BYREF
  _Thrd_t v41; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+50h] [rbp-98h] BYREF
  std::_Ref_count_base *v43[2]; // [rsp+60h] [rbp-88h] BYREF
  UwpWindowManagerBridge *v44; // [rsp+70h] [rbp-78h]
  _QWORD v45[3]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v46[2]; // [rsp+90h] [rbp-58h] BYREF
  _Thrd_t v47; // [rsp+A0h] [rbp-48h] BYREF
  Windows::Internal::ApplicationModel::WindowManagement *retaddr; // [rsp+E8h] [rbp+0h]

  v44 = this;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 37,
    (__int64)a2);
  try
  {
    *(_OWORD *)v43 = 0LL;
    _create___event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      v43,
      1LL);
    event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((char *)this + 280, 1LL);
    if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z,
        v39);
    v4 = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
           (char *)this + 288,
           1LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v39);
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(retaddr) )
    {
      v42 = 0LL;
      __ExceptionPtrCreate(&v42);
      if ( this )
        (*(void (__fastcall **)(UwpWindowManagerBridge *))(*(_QWORD *)this + 8LL))(this);
      v5 = v43[1];
      if ( v43[1] )
      {
        _InterlockedAdd((volatile signed __int32 *)v43[1] + 2, 1u);
        v5 = v43[1];
      }
      v6 = (wil **)v43[0];
      v45[0] = v43[0];
      v45[1] = v5;
      v45[2] = this;
      *(_QWORD *)v40 = 0LL;
      v46[0] = (__int64)this;
      v46[1] = (__int64)&v42;
      std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___(&v41, v45);
      if ( !v41._Id )
        std::_Throw_Cpp_error(1);
      v47 = v41;
      if ( _Thrd_detach(&v47) )
        std::_Throw_Cpp_error(1);
      v41 = 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v46);
      std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>((__int64)v45);
      if ( v6 )
        v9 = *v6;
      else
        v9 = 0LL;
      wil::handle_wait(v9, (void *)0xFFFFFFFFLL, v7, v8);
      if ( __ExceptionPtrToBool(&v42) )
      {
        v41 = 0LL;
        __ExceptionPtrCopy(&v41, &v42);
        std::rethrow_exception(&v41);
      }
      __ExceptionPtrDestroy(&v42);
    }
    else
    {
      v11 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( WindowsCreateStringReference(
             L"Windows.Internal.ApplicationModel.WindowManagement.Window",
             0x39u,
             (HSTRING_HEADER *)&v47._Id,
             (HSTRING *)&v47) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      ActivationFactory = RoGetActivationFactory(
                            v47._Hnd,
                            &GUID_5e75aba7_c424_4076_9d47_409a1eda087f,
                            (char *)this + 168);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)ActivationFactory,
          v39);
      v14 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v15 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                        (HSTRING *)&v47,
                        (const unsigned __int16 (*)[69])v13);
      v16 = RoGetActivationFactory(*v15, &GUID_b880ce78_2e50_5a73_bfaa_a3f9a8b2f042, (char *)this + 48);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7C,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v16,
          v39);
      v17 = *((_QWORD *)this + 21);
      v18 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
      v19 = v18(v17, (char *)this + 176);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x7E,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v19,
          v39);
      v20 = *((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = 0LL;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>(
        (char *)this + 176,
        (char *)this + 184);
      wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(v40);
      v21 = *(_QWORD *)v40;
      v22 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)v40 + 48LL);
      v23 = (_QWORD *)*((_QWORD *)this + 29);
      *((_QWORD *)this + 29) = 0LL;
      if ( v23 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v23 + 16LL))(v23, *v23);
      v24 = v22(v21, (char *)this + 232);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x82,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v24,
          v39);
      v25 = *((_QWORD *)this + 29);
      v26 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 120LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 30);
      v27 = v26(v25, (char *)this + 240);
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x84,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v27,
          v39);
      v10 = *(Windows::Internal::ApplicationModel::WindowManagement **)v40;
      if ( *(_QWORD *)v40 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v40 + 16LL))(*(_QWORD *)v40);
      v5 = v43[1];
    }
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v10) )
    {
      started = UwpWindowManagerBridge::StartWindowWatcher(this);
      v28 = retaddr;
      if ( started < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x8B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)started,
          v39);
    }
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  catch ( ... )
  {
    v31 = wil::ResultFromCaughtException(v28);
    v32 = v44;
    *((_DWORD *)v44 + 76) = v31;
    wil::details::SetEvent(*((wil::details **)v32 + 35), v33);
    v35 = (const char *)*((unsigned int *)v32 + 76);
    v40[0] = *((_DWORD *)v32 + 76);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v34, (int *)v40);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v35 = (const char *)v40[0];
    }
    if ( (int)v35 >= 0 )
      goto LABEL_59;
    if ( (_DWORD)v35 != -2147024882 && (_DWORD)v35 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v34,
        (int *)v40,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        0x96u,
        v37,
        v38);
      v35 = (const char *)v40[0];
    }
    if ( (int)v35 >= 0 )
LABEL_59:
      v36 = 1;
    else
      v36 = 0;
    if ( !v36 )
    {
      if ( (int)v35 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x96,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          v35);
      return v40[0];
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
