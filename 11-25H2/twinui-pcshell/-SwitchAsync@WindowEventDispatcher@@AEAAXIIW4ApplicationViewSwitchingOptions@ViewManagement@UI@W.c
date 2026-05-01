/*
 * XREFs of ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18041391C
 * Callers:
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040B910 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18002A594 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BF074 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1802C9658 (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x180405A14 (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180408750 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18040E018 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18040EF48 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void WindowEventDispatcher::SwitchAsync(RTL_SRWLOCK *a1, int a2, int a3, int a4, ...)
{
  __int64 *CachedView; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *SharedListener; // rax
  int v13; // eax
  std::_Ref_count_base *v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+28h] [rbp-41h]
  int v18; // [rsp+28h] [rbp-41h]
  __int64 v19; // [rsp+38h] [rbp-31h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-29h] BYREF
  void *v21; // [rsp+48h] [rbp-21h] BYREF
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  RTL_SRWLOCK *v23; // [rsp+58h] [rbp-11h] BYREF
  RTL_SRWLOCK *v24; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v27; // [rsp+88h] [rbp+1Fh] BYREF
  std::_Ref_count_base *v28; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  __int64 (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // [rsp+C8h] [rbp+5Fh] BYREF
  int v31; // [rsp+D0h] [rbp+67h] BYREF
  int v32; // [rsp+D8h] [rbp+6Fh] BYREF
  int v33; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v33 = a4;
  v32 = a3;
  v31 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    &v31,
    &v32);
  v20 = 0LL;
  v30 = 0LL;
  *(_OWORD *)v26 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v24, a1 + 59);
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, &v19, a2);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v20, CachedView);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  if ( !v20 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x99B,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v17);
  v8 = WindowEventDispatcher::GetCachedView((__int64)a1, &v19, a3);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v30, v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  if ( !v30 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x99D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v17);
  v9 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
         &v19,
         (__int64 *)&v30);
  v10 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
          &v22,
          (__int64 *)&v20);
  SharedListener = WindowEventDispatcher::GetSharedListener(v11, &v27, v10, v9);
  std::shared_ptr<KBViewInfo>::operator=(v26, SharedListener);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v24);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v20,
    &v25);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v30,
    &v23);
  v24 = v23;
  v22 = v25;
  v19 = 0LL;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSwitch,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions &,IAsyncCallback * &>(
          &v19,
          &v22,
          (__int64 *)&v24,
          &v33,
          (__int64 *)va);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9AB,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      v18);
  v21 = 0LL;
  v14 = v26[0];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  v15 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v14 + 24),
          &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
          &v21);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9AE,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      v18);
  v16 = (*(__int64 (__fastcall **)(void *, RTL_SRWLOCK *, __int64))(*(_QWORD *)v21 + 24LL))(v21, v23, v19);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9AF,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
  if ( v26[1] )
    std::_Ref_count_base::_Decref(v26[1]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
}
