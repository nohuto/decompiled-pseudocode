/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x180420598
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180405BA0 (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800C3F04 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x18021EDB8 (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802C0E84 (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802C0EB0 (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___ @ 0x18041CC58 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  DWORD CurrentThreadId; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  wil *v14; // rcx
  int v16; // eax
  WindowManagerBridge *v17; // rbx
  void *v18; // rdx
  CCriticalFailureHandler *v19; // rcx
  unsigned __int64 v20; // r9
  char v21; // al
  unsigned __int64 *v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+20h] [rbp-58h]
  WindowManagerBridge *v25; // [rsp+30h] [rbp-48h] BYREF
  RTL_SRWLOCK *v26; // [rsp+38h] [rbp-40h] BYREF
  WindowManagerBridge *v27; // [rsp+40h] [rbp-38h]
  HSTRING string; // [rsp+48h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v27 = this;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 35,
    (__int64)a2);
  event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((wil::details **)this + 33, 1, 0LL);
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
           (wil::details **)this + 34,
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
    wil::AcquireSRWLockExclusive(&v26, (RTL_SRWLOCK *)this + 31);
    v25 = this;
    CurrentThreadId = GetCurrentThreadId();
    v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___(
            v11,
            CurrentThreadId,
            &v25);
    v13 = v12;
    if ( v12 >= 0 )
    {
      ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted();
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
    v14 = retaddr;
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v13,
        v24);
  }
  catch ( ... )
  {
    v16 = wil::ResultFromCaughtException(v14);
    v17 = v27;
    *((_DWORD *)v27 + 72) = v16;
    wil::details::SetEvent(*((wil::details **)v17 + 33), v18);
    v20 = *((unsigned int *)v17 + 72);
    LODWORD(v25) = *((_DWORD *)v17 + 72);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v25);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v20 = (unsigned int)v25;
    }
    if ( (v20 & 0x80000000) == 0LL )
      goto LABEL_30;
    if ( (_DWORD)v20 != -2147024882 && (_DWORD)v20 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v19,
        (int *)&v25,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        0x48u,
        v22,
        v23);
      v20 = (unsigned int)v25;
    }
    if ( (v20 & 0x80000000) == 0LL )
LABEL_30:
      v21 = 1;
    else
      v21 = 0;
    if ( !v21 )
    {
      if ( (v20 & 0x80000000) != 0LL )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)v20);
      return (unsigned int)v25;
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
