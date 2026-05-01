/*
 * XREFs of CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0
 * Callers:
 *     ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x180602718 (-GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA-AU-$IAsyncOperation@U-$IVectorView@UMenuI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ABCDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180136284 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___ @ 0x18018A8A8 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt--WindowsUdk-.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@winrt@@YA?AU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1801D6084 (--$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801DEDF4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ?CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@4@@Z @ 0x1801E49AC (-CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU-$.c)
 *     ?attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18020E460 (-attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1802168B0 (--0-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802C67B4 (--1-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x180326020 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x1803307EC (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x180330924 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@UEAA@XZ @ 0x180537A44 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B190 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18053B190.c)
 *     winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1805FFEE8 (winrt--impl--make_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--.c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_ @ 0x1806007A4 (_lambda_190ccd1a8be9aac816201cee4203407b_--__lambda_190ccd1a8be9aac816201cee4203407b_.c)
 *     ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x180601930 (-CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU.c)
 *     ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1806019B8 (-CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x180603BC8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180603E00 (-_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1806047AC (-push_back@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=24 #try_helpers=1
void __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1(__int64 a1, volatile int *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  struct tagPOINT *v7; // rdx
  __int64 v8; // rax
  const struct winrt::impl::slim_source_location *v9; // rax
  volatile int *v10; // rdx
  const struct winrt::impl::slim_source_location *v11; // rax
  volatile int *v12; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **v13; // r13
  __int64 v14; // rsi
  struct _RTL_CRITICAL_SECTION **v15; // rbx
  __int64 v16; // r8
  __int64 i; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r8
  const struct winrt::param::hstring *Separator; // rdx
  __int64 v22; // rcx
  __int64 Command; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  const unsigned __int16 *const *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct IUnknown **v30; // rax
  void *v31; // r8
  void (__fastcall ***Container)(_QWORD, __int64 *, __int64 **); // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v33; // rcx
  __int64 v34; // rcx
  const char *v35; // r9
  __int64 *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  volatile int *v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 v41; // [rsp+38h] [rbp-1E0h]
  __int64 v42; // [rsp+58h] [rbp-1C0h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **v43; // [rsp+60h] [rbp-1B8h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **v44; // [rsp+68h] [rbp-1B0h]
  _QWORD *v45; // [rsp+70h] [rbp-1A8h]
  _BYTE pExceptionObject[24]; // [rsp+C8h] [rbp-150h] BYREF
  _BYTE v47[32]; // [rsp+E0h] [rbp-138h] BYREF
  const unsigned __int16 *v49; // [rsp+108h] [rbp-110h]
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]
  bool v52; // [rsp+228h] [rbp+10h]
  HRESULT v53; // [rsp+228h] [rbp+10h]
  __int64 v54; // [rsp+230h] [rbp+18h]

  v2 = a1;
  v3 = a1;
  v4 = a1 + 8;
  v42 = a1 + 8;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_55;
    case 2:
      v5 = *(_QWORD **)(a1 + 808);
      *(_QWORD *)(a1 + 16) = v5;
      if ( v5 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v5 + 116), a2);
      v6 = v2 + 24;
      winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(v2 + 24));
      if ( (unsigned int)CLauncherTipContextMenu::_EnsureMenu((CLauncherTipContextMenu *)v5, v7) != -2147483638 )
        goto LABEL_11;
      v8 = v5[44];
      *(_QWORD *)(v2 + 40) = 0LL;
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_QWORD *)(v2 + 56) = 0LL;
      *(_QWORD *)(v2 + 64) = v8;
      *(_DWORD *)(v2 + 72) = 0;
      *(_QWORD *)(v2 + 80) = 0LL;
      *(_DWORD *)(v2 + 88) = 0;
      if ( *(_DWORD *)(v2 - 16) == 2 )
      {
        v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v2 + 696);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v9);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(v2 + 40)) )
      {
LABEL_10:
        winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(v2 + 40));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(v2 + 40));
        v6 = v2 + 24;
LABEL_11:
        *(_QWORD *)(v2 + 336) = v2 - 112;
        *(_QWORD *)(v2 + 784) = v2 - 112;
        if ( *(_DWORD *)(v2 - 112 + 96) == 2 )
        {
          v11 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v2 + 720);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v47, v11);
          throw (winrt::hresult_canceled *)v47;
        }
        *(_QWORD *)(v2 + 96) = v6;
        *(_QWORD *)(v2 + 104) = 0LL;
        *(_WORD *)v4 = 6;
        if ( !winrt::impl::apartment_awaiter::await_suspend((__int64 **)(v2 + 96), (void (*)(void *, void *))v2) )
        {
LABEL_16:
          winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(v2 + 96));
          v13 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 112);
          v43 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 112);
          *(_QWORD *)(v2 + 112) = 0LL;
          v44 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 120);
          *(_QWORD *)(v2 + 120) = 0LL;
          v45 = (_QWORD *)(v2 + 128);
          *(_QWORD *)(v2 + 128) = 0LL;
          v14 = *(_QWORD *)(v4 + 800);
          v15 = (struct _RTL_CRITICAL_SECTION **)(v2 + 136);
          wil::EnterCriticalSection(
            (struct _RTL_CRITICAL_SECTION **)(v2 + 136),
            (struct _RTL_CRITICAL_SECTION *)(v14 + 240));
          try
          {
            CLauncherTipContextMenu::_EnumerateAndBuildShutdownMenu((CLauncherTipContextMenu *)v14);
            if ( *(_BYTE *)(v14 + 320) )
            {
              v52 = 0;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
                1u,
                v16);
              *(_QWORD *)(v2 + 144) = 0LL;
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v2 + 144));
              if ( SHGetKnownFolderItem(
                     &FOLDERID_LocalAppData,
                     KF_FLAG_DEFAULT,
                     0LL,
                     &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                     (void **)(v2 + 144)) >= 0 )
              {
                *(_QWORD *)(v2 + 152) = 0LL;
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v2 + 152));
                v53 = SHCreateItemFromRelativeName(
                        *(IShellItem **)(v2 + 144),
                        L"Microsoft\\WindowsApps\\wt.exe",
                        0LL,
                        &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                        (void **)(v2 + 152));
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v2 + 152));
                v52 = v53 >= 0;
              }
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v2 + 144));
              for ( i = *(_QWORD *)(v14 + 184); ; i = v54 - 1 )
              {
                v54 = i;
                if ( !i )
                  break;
                v18 = *(_QWORD *)(v4 + 800);
                v19 = *(_QWORD *)(*(_QWORD *)(v18 + 176) + 8 * i - 8);
                *(_QWORD *)(v2 + 160) = v19;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v2 + 160));
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
                  `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
                  1u,
                  v20);
                if ( (*(_DWORD *)(v19 + 112) & 0x800) != 0 && !v52 || (*(_DWORD *)(v19 + 112) & 0x100) != 0 && v52 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                }
                else
                {
                  if ( *(_BYTE *)(v19 + 8) )
                  {
                    winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 168), &pvData);
                    Separator = winrt::WindowsUdk::UI::MenuItem::CreateSeparator(
                                  (const struct winrt::param::hstring *)(v2 + 200),
                                  v2 + 168);
                    std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v2 + 112, Separator);
                    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 200));
                  }
                  else
                  {
                    *(_QWORD *)(v2 + 216) = v18;
                    wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
                      (_QWORD *)(v2 + 224),
                      (volatile int *)(v2 + 16));
                    *(_QWORD *)(v2 + 232) = v19;
                    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v2 + 232));
                    v22 = *(_QWORD *)(v2 + 24);
                    *(_QWORD *)(v2 + 240) = v22;
                    if ( v22 )
                      (*(void (**)(void))(*(_QWORD *)v22 + 8LL))();
                    *(_DWORD *)(v2 + 248) = *(_DWORD *)(v2 + 32);
                    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___(
                      (_QWORD *)(v2 + 208),
                      v2 + 216);
                    *(_QWORD *)(v2 + 256) = 0LL;
                    winrt::param::hstring::hstring(
                      (winrt::param::hstring *)(v2 + 264),
                      *(const unsigned __int16 *const *)(v19 + 16));
                    winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 296), &pvData);
                    Command = winrt::WindowsUdk::UI::MenuItem::CreateCommand(
                                v2 + 352,
                                v2 + 296,
                                v2 + 264,
                                v2 + 256,
                                v2 + 208);
                    std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v2 + 112, Command);
                    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 352));
                    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 256));
                    if ( *(_QWORD *)(v2 + 208) )
                      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(v2 + 208));
                  }
                  if ( v54 == 2 )
                  {
                    *(_QWORD *)(v2 + 360) = 0LL;
                    *(_QWORD *)(v2 + 368) = 0LL;
                    *(_QWORD *)(v2 + 376) = 0LL;
                    v24 = 0LL;
                    v25 = v2 + 360;
                    while ( 1 )
                    {
                      v41 = v24;
                      v26 = *(_QWORD *)(v4 + 800);
                      if ( v24 >= *(_QWORD *)(v26 + 216) )
                        break;
                      v27 = *(const unsigned __int16 *const **)(*(_QWORD *)(v26 + 208) + 8 * v24);
                      *(_QWORD *)(v2 + 384) = v27;
                      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v2 + 384));
                      *(_QWORD *)(v2 + 400) = *(_QWORD *)(v4 + 800);
                      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
                        (_QWORD *)(v2 + 408),
                        (volatile int *)(a1 + 16));
                      *(_QWORD *)(v2 + 416) = v27;
                      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v2 + 416));
                      *(_OWORD *)(v2 + 424) = *(_OWORD *)(a1 + 816);
                      v28 = *(_QWORD *)(v2 + 24);
                      *(_QWORD *)(v2 + 440) = v28;
                      if ( v28 )
                        (*(void (**)(void))(*(_QWORD *)v28 + 8LL))();
                      *(_DWORD *)(v2 + 448) = *(_DWORD *)(v2 + 32);
                      *(_QWORD *)(v2 + 688) = v2 + 400;
                      winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___(
                        (_QWORD *)(v2 + 392),
                        v2 + 400);
                      lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_((__int64 *)(v2 + 400));
                      *(_QWORD *)(v2 + 456) = 0LL;
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 464), v27[2]);
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 496), &pvData);
                      v29 = winrt::WindowsUdk::UI::MenuItem::CreateCommand(
                              v2 + 528,
                              v2 + 496,
                              v2 + 464,
                              v2 + 456,
                              v2 + 392);
                      v25 = v2 + 360;
                      std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v2 + 360, v29);
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 528));
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 456));
                      if ( *(_QWORD *)(v2 + 392) )
                        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(v2 + 392));
                      (*((void (__fastcall **)(const unsigned __int16 *const *))*v27 + 2))(v27);
                      v24 = v41 + 1;
                    }
                    *(_QWORD *)(v2 + 536) = 0LL;
                    *(_QWORD *)(v2 + 544) = 0LL;
                    *(_QWORD *)(v2 + 552) = 0LL;
                    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                                v2 + 536,
                                &_ImageBase,
                                0x2AB2u) >= 0 )
                    {
                      v30 = (struct IUnknown **)winrt::single_threaded_vector<winrt::WindowsUdk::UI::MenuItem,std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                                                  (_QWORD *)(v2 + 576),
                                                  v25);
                      *(_QWORD *)(v2 + 560) = 0LL;
                      *(_BYTE *)(v2 + 568) = 0;
                      winrt::attach_abi((winrt *)(v2 + 560), *v30, v31);
                      *(_QWORD *)(v2 + 584) = 0LL;
                      v49 = *(const unsigned __int16 **)(v2 + 536);
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 592), v49);
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 624), &pvData);
                      Container = winrt::WindowsUdk::UI::MenuItem::CreateContainer(
                                    (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))(v2 + 656),
                                    v2 + 624,
                                    v2 + 592,
                                    v2 + 584,
                                    v2 + 560);
                      std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v2 + 112, Container);
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 656));
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 584));
                      if ( !*(_BYTE *)(v2 + 568) )
                        *(_QWORD *)(v2 + 560) = 0LL;
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 560));
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 576));
                    }
                    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v2 + 536);
                    v33 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 360);
                    if ( v33 )
                    {
                      std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                        v33,
                        *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 368));
                      std::_Deallocate<16>(
                        *(void **)(v2 + 360),
                        (struct std::nothrow_t *)((*(_QWORD *)(v2 + 376) - *(_QWORD *)(v2 + 360)) & 0xFFFFFFFFFFFFFFF8uLL));
                    }
                  }
                  v34 = *(_QWORD *)(v2 + 160);
                  if ( v34 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                }
              }
              v15 = (struct _RTL_CRITICAL_SECTION **)(v2 + 136);
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v15);
          }
          catch ( ... )
          {
            wil::details::in1diag3::Log_CaughtException(
              retaddr,
              (void *)0x71B,
              (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
              v35);
            v2 = a1;
            v13 = v43;
            v4 = v42;
          }
          v36 = winrt::single_threaded_vector<winrt::WindowsUdk::UI::MenuItem,std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                  (_QWORD *)(v2 + 664),
                  (__int64)v13);
          *(_QWORD *)(v2 + 744) = 0LL;
          v37 = *v36;
          *(_DWORD *)(v2 + 752) = 0;
          *(_QWORD *)(v2 + 760) = 0LL;
          *(_QWORD *)(v2 + 768) = 0LL;
          v38 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 64LL))(v37, v2 + 744);
          winrt::check_hresult((int *)(v2 + 776), v38, v2 + 752);
          *(_QWORD *)(v2 + 672) = *(_QWORD *)(v2 + 744);
          winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
            (__int64 *)(*(_QWORD *)(v2 + 336) + 104LL),
            (__int64 *)(v2 + 672));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 672));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 664));
          if ( *v13 )
          {
            std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(*v13, *v44);
            std::_Deallocate<16>(*v13, (struct std::nothrow_t *)((*v45 - (_QWORD)*v13) & 0xFFFFFFFFFFFFFFF8uLL));
            *v13 = 0LL;
            *v44 = 0LL;
            *v45 = 0LL;
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 24));
          wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
            (__int64 *)(v2 + 16),
            v39);
          v3 = a1;
          *(_QWORD *)(v2 + 680) = *(_QWORD *)(v2 + 784);
          *(_WORD *)v4 = 0;
          if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                  (__int64 *)(v2 + 680),
                  v40) )
          {
LABEL_55:
            std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type::~promise_type((__int64 *)(v2 - 112));
            if ( *(_WORD *)(v3 + 10) )
              operator delete((void *)(v2 - 112), (const struct std::nothrow_t *)0x3B0);
          }
        }
      }
      else
      {
        *(_WORD *)v4 = 4;
        winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
          (__int64 *)(v2 + 40),
          v2);
      }
      return;
    case 4:
      goto LABEL_10;
    case 5:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 40));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 24));
      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
        (__int64 *)(v2 + 16),
        v10);
      goto LABEL_55;
    case 6:
      goto LABEL_16;
    case 7:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
        (__int64 *)(v2 + 16),
        v12);
      goto LABEL_55;
    default:
      __debugbreak();
      return;
  }
}
