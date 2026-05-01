/*
 * XREFs of ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A3304
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A6BD0 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EF938 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA?AUCompositor@Composition@UI@Windows@1@PEAUICompositor@345@@Z @ 0x18049913C (--$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA-AUComposito.c)
 *     ??$as@UVisual@Composition@UI@Windows@winrt@@@?$com_ptr@UIDCompositionVisual2@@@winrt@@QEBA?A_PXZ @ 0x1804A28B4 (--$as@UVisual@Composition@UI@Windows@winrt@@@-$com_ptr@UIDCompositionVisual2@@@winrt@@QEBA-A_PXZ.c)
 *     _lambda_cab7c03a2b5ac7190be81e45414ea272_::_lambda_cab7c03a2b5ac7190be81e45414ea272_ @ 0x1804A2C60 (_lambda_cab7c03a2b5ac7190be81e45414ea272_--_lambda_cab7c03a2b5ac7190be81e45414ea272_.c)
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A41D8 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreatePropertySet@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A473C (-CreatePropertySet@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A52A8 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A9760 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall CAppThumbnailWindow::CreateAppThumbnail(CAppThumbnailWindow *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, GUID *, _QWORD *); // rbx
  _QWORD *v4; // r15
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, LPARAM *, char *); // rbx
  _QWORD *v10; // r14
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  HMONITOR v16; // rdx
  unsigned int v17; // ebx
  _QWORD *v18; // rax
  BOOL v19; // eax
  signed int Error; // ebx
  __int64 (__fastcall ***v21)(_QWORD, void *, __int64 *); // rbx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // edi
  __int64 *v25; // rax
  __int64 v26; // r8
  int ThumbnailsForTopTwoAppsAndAddToExcludeList; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rax
  int v31; // eax
  __int64 *v32; // rax
  int v33; // eax
  __int64 *v34; // rax
  __int64 *PropertySet; // rax
  int v36; // eax
  int TrayThumbnail; // eax
  int v38; // eax
  char *v39; // [rsp+40h] [rbp-168h] BYREF
  __int128 v40; // [rsp+48h] [rbp-160h] BYREF
  __int64 v41; // [rsp+58h] [rbp-150h]
  __int64 v42; // [rsp+60h] [rbp-148h] BYREF
  __int128 v43; // [rsp+68h] [rbp-140h] BYREF
  __int64 v44; // [rsp+78h] [rbp-130h]
  int v45[4]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v46; // [rsp+90h] [rbp-118h]
  __int64 v47; // [rsp+98h] [rbp-110h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v50[2]; // [rsp+B0h] [rbp-F8h] BYREF
  LPARAM lParam[2]; // [rsp+C0h] [rbp-E8h] BYREF
  int v52; // [rsp+D0h] [rbp-D8h] BYREF
  HWND TrayWindowForMonitor; // [rsp+D8h] [rbp-D0h] BYREF
  _QWORD v54[4]; // [rsp+E0h] [rbp-C8h] BYREF
  _OWORD v55[3]; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+130h] [rbp-78h]
  _QWORD v57[7]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v58; // [rsp+178h] [rbp-30h] BYREF
  int v59; // [rsp+180h] [rbp-28h]
  int v60; // [rsp+184h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v58 = 0LL;
  v59 = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v60 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, _QWORD *))(*(_QWORD *)v2 + 112LL);
  v4 = (_QWORD *)((char *)this + 40);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 5);
  LODWORD(v42) = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  HIDWORD(v42) = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v5 = v3(v2, 0LL, v42, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x247,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, LPARAM *, char *))(*(_QWORD *)v8 + 88LL);
  v10 = (_QWORD *)((char *)this + 64);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 8);
  *(_OWORD *)lParam = *(_OWORD *)((char *)this + 136);
  v11 = v9(v8, *v4, 0LL, lParam, (char *)this + 64);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(*v10, &v58, 0LL, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  v47 = 0LL;
  v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10)(
          *v10,
          &GUID_7814dccf_97c7_4f4f_8fc2_a3c6c8107597,
          &v47);
  v17 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
    return v17;
  }
  v40 = 0LL;
  v41 = 0LL;
  *(_OWORD *)v45 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 19), v16);
  v52 = 0;
  v54[0] = 18LL;
  v54[1] = &v52;
  v54[2] = 4LL;
  v18 = lambda_cab7c03a2b5ac7190be81e45414ea272_::_lambda_cab7c03a2b5ac7190be81e45414ea272_(
          v57,
          (__int64)this,
          (__int64)&TrayWindowForMonitor,
          (__int64)&v40,
          (__int64)v45,
          (__int64)v54,
          (__int64)&v52,
          (__int64)&v43);
  v55[0] = *(_OWORD *)v18;
  v55[1] = *((_OWORD *)v18 + 1);
  v55[2] = *((_OWORD *)v18 + 2);
  v56 = v18[6];
  LODWORD(v39) = 0;
  lParam[0] = (LPARAM)&v39;
  lParam[1] = (LPARAM)v55;
  v19 = EnumWindows(
          (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___,
          (LPARAM)lParam);
  Error = (int)v39;
  if ( (int)v39 < 0 || (!v19 ? (Error = ResultFromKnownLastError()) : (Error = 0), Error < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)Error);
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( *(_QWORD *)v45 )
    {
      std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v40 )
    {
      std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
      v40 = 0LL;
      v41 = 0LL;
    }
LABEL_131:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
    return (unsigned int)Error;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u);
  v21 = 0LL;
  v50[0] = 0LL;
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 96LL))(*((_QWORD *)this + 3));
  if ( v22 )
  {
    v21 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v22;
    v50[0] = v22;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  }
  winrt::impl::as<winrt::Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,0>(&v42, v21);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 48, &v42);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v42);
  v39 = 0LL;
  v23 = (*(__int64 (__fastcall **)(_QWORD, char **))(*(_QWORD *)*v10 + 104LL))(*v10, &v39);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x287,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v23);
    if ( v39 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
    if ( v21 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v50);
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( *(_QWORD *)v45 )
    {
      std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v40 )
    {
      std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
      v40 = 0LL;
      v41 = 0LL;
    }
LABEL_97:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
    return v24;
  }
  v25 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                     &v39,
                     (__int64)&v42);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 51, v25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v42);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
    1u,
    v26);
  ThumbnailsForTopTwoAppsAndAddToExcludeList = CAppThumbnailWindow::TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList(this);
  v24 = ThumbnailsForTopTwoAppsAndAddToExcludeList;
  if ( ThumbnailsForTopTwoAppsAndAddToExcludeList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x290,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)ThumbnailsForTopTwoAppsAndAddToExcludeList);
    if ( v39 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
    if ( v21 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v50);
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( *(_QWORD *)v45 )
    {
      std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v40 )
    {
      std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
      v40 = 0LL;
      v41 = 0LL;
    }
    goto LABEL_97;
  }
  v28 = *((_QWORD *)this + 52);
  if ( v28 && *((_QWORD *)this + 54) && *((_QWORD *)this + 56) )
  {
    v48 = 0LL;
    v29 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 104LL))(v28, &v48);
    v24 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x297,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v29);
      if ( v48 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v48);
      if ( v39 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
      if ( v21 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v50);
      if ( (_QWORD)v43 )
      {
        std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
        v43 = 0LL;
        v44 = 0LL;
      }
      if ( *(_QWORD *)v45 )
      {
        std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
        *(_OWORD *)v45 = 0LL;
        v46 = 0LL;
      }
      if ( (_QWORD)v40 )
      {
        std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
        v40 = 0LL;
        v41 = 0LL;
      }
      goto LABEL_97;
    }
    v30 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                       &v48,
                       (__int64)lParam);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 53, v30);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
    v49 = 0LL;
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 54) + 104LL))(
            *((_QWORD *)this + 54),
            &v49);
    v24 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v31);
      if ( v49 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v49);
      if ( v48 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v48);
      if ( v39 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
      if ( v21 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v50);
      if ( (_QWORD)v43 )
      {
        std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
        v43 = 0LL;
        v44 = 0LL;
      }
      if ( *(_QWORD *)v45 )
      {
        std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
        *(_OWORD *)v45 = 0LL;
        v46 = 0LL;
      }
      if ( (_QWORD)v40 )
      {
        std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
        v40 = 0LL;
        v41 = 0LL;
      }
      goto LABEL_97;
    }
    v32 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                       &v49,
                       (__int64)lParam);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 55, v32);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
    v42 = 0LL;
    v33 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 56) + 104LL))(
            *((_QWORD *)this + 56),
            &v42);
    v24 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29F,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v33);
      if ( v42 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v42);
      if ( v49 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v49);
      if ( v48 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v48);
      if ( v39 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
      if ( v21 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v50);
      if ( (_QWORD)v43 )
      {
        std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
        v43 = 0LL;
        v44 = 0LL;
      }
      if ( *(_QWORD *)v45 )
      {
        std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
        *(_OWORD *)v45 = 0LL;
        v46 = 0LL;
      }
      if ( (_QWORD)v40 )
      {
        std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
        v40 = 0LL;
        v41 = 0LL;
      }
      goto LABEL_97;
    }
    v34 = (__int64 *)winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
                       &v42,
                       (__int64)lParam);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 57, v34);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
    if ( v42 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v42);
    if ( v49 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v49);
    if ( v48 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v48);
  }
  PropertySet = (__int64 *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreatePropertySet(
                             (char *)this + 384,
                             lParam);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 49, PropertySet);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)lParam);
  if ( v39 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
  if ( v21 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v50);
  v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v47 + 24LL))(v47, 0LL, 0LL);
  Error = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v36);
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( *(_QWORD *)v45 )
    {
      std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v40 )
    {
      std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
      v40 = 0LL;
      v41 = 0LL;
    }
    goto LABEL_131;
  }
  TrayThumbnail = CAppThumbnailWindow::CreateTrayThumbnail(this, v45);
  Error = TrayThumbnail;
  if ( TrayThumbnail < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AD,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)TrayThumbnail);
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( *(_QWORD *)v45 )
    {
      std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v40 )
    {
      std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
      v40 = 0LL;
      v41 = 0LL;
    }
    goto LABEL_131;
  }
  v38 = CAppThumbnailWindow::CreateBackgroundThumbnail(this, &v43);
  Error = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v38);
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( *(_QWORD *)v45 )
    {
      std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v45 = 0LL;
      v46 = 0LL;
    }
    if ( (_QWORD)v40 )
    {
      std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
      v40 = 0LL;
      v41 = 0LL;
    }
    goto LABEL_131;
  }
  if ( (_QWORD)v43 )
  {
    std::_Deallocate<16>((void *)v43, (struct std::nothrow_t *)((v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL));
    v43 = 0LL;
    v44 = 0LL;
  }
  if ( *(_QWORD *)v45 )
  {
    std::_Deallocate<16>(*(void **)v45, (struct std::nothrow_t *)((v46 - *(_QWORD *)v45) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_OWORD *)v45 = 0LL;
    v46 = 0LL;
  }
  if ( (_QWORD)v40 )
  {
    std::_Deallocate<16>((void *)v40, (struct std::nothrow_t *)((v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL));
    v40 = 0LL;
    v41 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
  return 0LL;
}
