/*
 * XREFs of ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18041E69C
 * Callers:
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180416830 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18005227C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F1C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1802C0DB0 (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1804107C0 (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180413574 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180418FA8 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x180419C28 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+28h] [rbp-41h]
  int v17; // [rsp+28h] [rbp-41h]
  __int64 v18; // [rsp+38h] [rbp-31h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-29h] BYREF
  void *v20; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  RTL_SRWLOCK *v22; // [rsp+58h] [rbp-11h] BYREF
  RTL_SRWLOCK *v23; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v26; // [rsp+88h] [rbp+1Fh] BYREF
  std::_Ref_count_base *v27; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  __int64 (__fastcall ***v29)(_QWORD, GUID *, _QWORD *); // [rsp+C8h] [rbp+5Fh] BYREF
  int v30; // [rsp+D0h] [rbp+67h] BYREF
  int v31; // [rsp+D8h] [rbp+6Fh] BYREF
  int v32; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v32 = a4;
  v31 = a3;
  v30 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    &v30,
    &v31);
  v19 = 0LL;
  v29 = 0LL;
  *(_OWORD *)v25 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v23, a1 + 59);
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, &v18, a2);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v19, CachedView);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  if ( !v19 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x999,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v16);
  v8 = WindowEventDispatcher::GetCachedView((__int64)a1, &v18, a3);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v29, v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  if ( !v29 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x99B,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v16);
  v9 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
         &v18,
         (__int64 *)&v29);
  v10 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
          &v21,
          (__int64 *)&v19);
  SharedListener = WindowEventDispatcher::GetSharedListener(v11, &v26, v10, v9);
  std::shared_ptr<KBViewInfo>::operator=(v25, SharedListener);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v19,
    &v24);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v29,
    &v22);
  v23 = v22;
  v21 = v24;
  v18 = 0LL;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSwitch,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions &,IAsyncCallback * &>(
          &v18,
          &v21,
          (__int64 *)&v23,
          &v32,
          (__int64 *)va);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9A9,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      v17);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  v14 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v25[0] + 24),
          &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
          &v20);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9AC,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14,
      v17);
  v15 = (*(__int64 (__fastcall **)(void *, RTL_SRWLOCK *, __int64))(*(_QWORD *)v20 + 24LL))(v20, v22, v18);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9AD,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
}
