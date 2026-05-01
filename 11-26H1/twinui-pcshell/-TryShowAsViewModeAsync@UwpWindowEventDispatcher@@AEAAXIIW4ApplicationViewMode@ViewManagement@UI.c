/*
 * XREFs of ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@_KPEAUIAsyncCallback@@@Z @ 0x1800EC680
 * Callers:
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800ECAE0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18005227C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F1C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSharedListener@UwpWindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1800EC3AC (-GetSharedListener@UwpWindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1800EC464 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exc.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventArgsForShowAsViewModeDesktop@6789@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventArgsForShowAsViewModeDesktop@6789@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180107278 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VVie_ea_180107278.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventArgsForShowAsViewModeDesktop@6789@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F83A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1801F83A0.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1802C0DB0 (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewEventArgsForShowAsViewMode@@QEAA@XZ @ 0x1804125D0 (--0ViewEventArgsForShowAsViewMode@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForShowAsViewMode@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowAsViewMode@@@Z @ 0x180417DEC (-Attach@-$ComPtr@VViewEventArgsForShowAsViewMode@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowA.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@W4ViewSizePreference@896@3USize@Foundation@6@_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x18041D958 (-RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetPendingActivationData@UwpWindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180423570 (-GetPendingActivationData@UwpWindowEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Found.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall UwpWindowEventDispatcher::TryShowAsViewModeAsync(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 a9)
{
  _QWORD *CachedView; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // r15
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // r12
  __int64 v17; // rcx
  RTL_SRWLOCK **SharedListener; // rax
  RTL_SRWLOCK *v19; // rcx
  std::_Ref_count_base *v20; // r13
  __int64 (__fastcall **v21)(_QWORD, GUID *, _QWORD *); // rax
  struct Windows::Foundation::Collections::IPropertySet *v22; // rdi
  ViewEventArgsForShowAsViewMode *v23; // rax
  int v24; // r14d
  ViewEventArgsForShowAsViewMode *v25; // rax
  __int64 v26; // rsi
  int v27; // eax
  int v28; // eax
  void *v29; // rcx
  int v31; // [rsp+28h] [rbp-C1h]
  struct Windows::Foundation::Collections::IPropertySet *v32; // [rsp+68h] [rbp-81h] BYREF
  __int64 v33; // [rsp+70h] [rbp-79h] BYREF
  __int64 v34; // [rsp+78h] [rbp-71h] BYREF
  __int64 v35; // [rsp+80h] [rbp-69h] BYREF
  __int64 v36; // [rsp+88h] [rbp-61h] BYREF
  __int64 v37; // [rsp+90h] [rbp-59h]
  __int64 (__fastcall ***v38)(_QWORD, GUID *, _QWORD *); // [rsp+98h] [rbp-51h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, _QWORD *); // [rsp+A0h] [rbp-49h] BYREF
  void *v40; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-39h] BYREF
  RTL_SRWLOCK *v42; // [rsp+B8h] [rbp-31h]
  __int64 v43; // [rsp+C0h] [rbp-29h] BYREF
  std::_Ref_count_base *v44; // [rsp+C8h] [rbp-21h]
  __int128 v45; // [rsp+D0h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+47h]
  void *v47; // [rsp+138h] [rbp+4Fh] BYREF
  int v48; // [rsp+140h] [rbp+57h] BYREF
  int v49; // [rsp+148h] [rbp+5Fh] BYREF
  unsigned int v50; // [rsp+150h] [rbp+67h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    &v48,
    &v49);
  v38 = 0LL;
  v39 = 0LL;
  v45 = 0LL;
  AcquireSRWLockShared(a1 + 61);
  v42 = a1 + 61;
  CachedView = UwpWindowEventDispatcher::GetCachedView((__int64)a1, &v33, a2);
  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*CachedView;
  v14 = 0LL;
  *CachedView = 0LL;
  v38 = v13;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( !v13 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAE6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v31);
  v15 = UwpWindowEventDispatcher::GetCachedView((__int64)a1, &v33, a3);
  v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v15;
  *v15 = 0LL;
  v39 = v16;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( !v16 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAE8,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v31);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    &v32,
    (__int64)v13);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    &v34,
    (__int64)v16);
  SharedListener = (RTL_SRWLOCK **)UwpWindowEventDispatcher::GetSharedListener(v17, &v43, &v34, (__int64 *)&v32);
  v42 = *SharedListener;
  v19 = v42;
  v20 = (std::_Ref_count_base *)SharedListener[1];
  *SharedListener = 0LL;
  SharedListener[1] = 0LL;
  *(_QWORD *)&v45 = v19;
  *((_QWORD *)&v45 + 1) = v20;
  if ( v44 )
    std::_Ref_count_base::_Decref(v44);
  if ( a1 != (RTL_SRWLOCK *)-488LL )
    ReleaseSRWLockShared(a1 + 61);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v38,
    &v36);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v39,
    &v41);
  v35 = 0LL;
  v21 = *v13;
  v35 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))v21[50])(v13, &v35);
  v22 = 0LL;
  v32 = 0LL;
  if ( a9 )
  {
    v32 = 0LL;
    UwpWindowEventDispatcher::GetPendingActivationData((UwpWindowEventDispatcher *)&a1[3], a9, &v32);
    v22 = v32;
  }
  v43 = v41;
  v37 = v36;
  v33 = 0LL;
  v23 = (ViewEventArgsForShowAsViewMode *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v23 )
  {
    v25 = ViewEventArgsForShowAsViewMode::ViewEventArgsForShowAsViewMode(v23);
    v34 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForShowAsViewMode>::Attach(&v34, v25);
    v40 = 0LL;
    v31 = a5;
    v26 = v34;
    v24 = ViewEventArgsForShowAsViewMode::RuntimeClassInitialize(v34, v37, v43, v50);
    if ( v24 >= 0 )
    {
      v24 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewModeDesktop,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>>(
              v26,
              &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
              &v33);
      if ( v26 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewModeDesktop,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::Release(v26);
      Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v40);
      v14 = v33;
    }
    else
    {
      if ( v26 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewModeDesktop,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::Release(v26);
      Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v40);
    }
  }
  else
  {
    v24 = -2147024882;
  }
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB09,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v24,
      v31);
  v47 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
  v27 = AgileGitPtr::CopyLocal((AgileGitPtr *)&v42[3], &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, &v47);
  if ( v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB0C,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v27,
      v31);
  v28 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v47 + 24LL))(v47, v36, v14);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB0D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v28,
      v31);
  v29 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v22 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
}
