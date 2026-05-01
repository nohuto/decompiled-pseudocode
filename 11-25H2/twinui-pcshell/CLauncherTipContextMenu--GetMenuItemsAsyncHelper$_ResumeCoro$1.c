/*
 * XREFs of CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1805DD240
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x1805DD108 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800FAB4C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1800FF1A0 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___ @ 0x180190C2C (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt--WindowsUdk-.c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_::_lambda_d6b4118795ae303e935bbd5b6ca0014f_ @ 0x180190D50 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_--_lambda_d6b4118795ae303e935bbd5b6ca0014f_.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D7BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@4@@Z @ 0x1801E5044 (-CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU-$.c)
 *     ??$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@winrt@@YA?AU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1801E51E4 (--$single_threaded_vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E97E4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ?attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18021C4D0 (-attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??0?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180225A48 (--0-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??1?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF3F4 (--1-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x1803296AC (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180331794 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803318B8 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180341BD0 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1805DB434 (winrt--impl--make_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--.c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_ @ 0x1805DBB34 (_lambda_190ccd1a8be9aac816201cee4203407b_--__lambda_190ccd1a8be9aac816201cee4203407b_.c)
 *     ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x1805DCD7C (-CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU.c)
 *     ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1805DCE04 (-CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DF0C8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DF300 (-_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1805DFC9C (-push_back@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=24 #try_helpers=1
void __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1(__int64 a1, volatile int *a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  struct tagPOINT *v5; // rdx
  __int64 v6; // rax
  const struct winrt::impl::slim_source_location *v7; // rax
  volatile int *v8; // rdx
  const struct winrt::impl::slim_source_location *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rsi
  struct _RTL_CRITICAL_SECTION **v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // r12
  HRESULT v16; // r12d
  __int64 i; // rsi
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  const struct winrt::param::hstring *Separator; // rax
  __int64 v22; // rdx
  __int64 Command; // rax
  unsigned __int64 j; // r12
  __int64 v25; // rdi
  const unsigned __int16 *const *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  const unsigned __int16 **v29; // rbx
  struct IUnknown **v30; // rax
  void *v31; // r8
  void (__fastcall ***Container)(_QWORD, __int64 *, __int64 *); // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v33; // rbx
  __int64 v34; // rcx
  const char *v35; // r9
  __int64 *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v39; // rbx
  volatile int *v40; // rdx
  __int64 v41; // rdx
  _BYTE pExceptionObject[24]; // [rsp+B0h] [rbp-148h] BYREF
  _BYTE v43[32]; // [rsp+C8h] [rbp-130h] BYREF
  const unsigned __int16 *v45; // [rsp+F0h] [rbp-108h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]
  bool v48; // [rsp+208h] [rbp+10h]

  v2 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_54;
    case 2:
      v3 = *(_QWORD **)(a1 + 801);
      *(_QWORD *)(a1 + 16) = v3;
      if ( v3 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v3 + 116), a2);
      v4 = v2 + 24;
      winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(v2 + 24));
      if ( (unsigned int)CLauncherTipContextMenu::_EnsureMenu((CLauncherTipContextMenu *)v3, v5) != -2147483638 )
        goto LABEL_11;
      v6 = v3[44];
      *(_QWORD *)(v2 + 40) = 0LL;
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_QWORD *)(v2 + 56) = 0LL;
      *(_QWORD *)(v2 + 64) = v6;
      *(_DWORD *)(v2 + 72) = 0;
      *(_QWORD *)(v2 + 80) = 0LL;
      *(_DWORD *)(v2 + 88) = 0;
      if ( *(_DWORD *)(v2 - 16) == 2 )
      {
        v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v2 + 696);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v7);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(v2 + 40)) )
      {
LABEL_10:
        winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(v2 + 40));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(v2 + 40));
        v4 = v2 + 24;
LABEL_11:
        *(_QWORD *)(v2 + 336) = v2 - 112;
        *(_QWORD *)(v2 + 784) = v2 - 112;
        if ( *(_DWORD *)(v2 - 112 + 96) == 2 )
        {
          v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v2 + 720);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v43, v9);
          throw (winrt::hresult_canceled *)v43;
        }
        *(_QWORD *)(v2 + 96) = v4;
        *(_QWORD *)(v2 + 104) = 0LL;
        *(_WORD *)(v2 + 8) = 6;
        if ( !winrt::impl::apartment_awaiter::await_suspend((__int64 **)(v2 + 96), (void (*)(void *, void *))v2) )
        {
LABEL_16:
          winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(v2 + 96));
          *(_QWORD *)(v2 + 112) = 0LL;
          *(_QWORD *)(v2 + 120) = 0LL;
          *(_QWORD *)(v2 + 128) = 0LL;
          v11 = *(_QWORD *)(v2 + 801);
          v12 = (struct _RTL_CRITICAL_SECTION **)(v2 + 136);
          wil::EnterCriticalSection(
            (struct _RTL_CRITICAL_SECTION **)(v2 + 136),
            (struct _RTL_CRITICAL_SECTION *)(v11 + 240));
          try
          {
            CLauncherTipContextMenu::_EnumerateAndBuildShutdownMenu((CLauncherTipContextMenu *)v11);
            if ( *(_BYTE *)(v11 + 320) )
            {
              v15 = 0;
              v48 = 0;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
                1u,
                v13,
                v14);
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
                v16 = SHCreateItemFromRelativeName(
                        *(IShellItem **)(v2 + 144),
                        L"Microsoft\\WindowsApps\\wt.exe",
                        0LL,
                        &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                        (void **)(v2 + 152));
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v2 + 152));
                v15 = v16 >= 0;
                v48 = v15;
              }
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(v2 + 144));
              for ( i = *(_QWORD *)(v11 + 184); i; --i )
              {
                v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 801) + 176LL) + 8 * i - 8);
                *(_QWORD *)(v2 + 160) = v18;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v2 + 160));
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
                  `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
                  1u,
                  v19,
                  v20);
                if ( (*(_DWORD *)(v18 + 112) & 0x800) != 0 && !v15 || (*(_DWORD *)(v18 + 112) & 0x100) != 0 && v15 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                }
                else
                {
                  if ( *(_BYTE *)(v18 + 8) )
                  {
                    winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 168), &LocaleName);
                    Separator = winrt::WindowsUdk::UI::MenuItem::CreateSeparator(
                                  (const struct winrt::param::hstring *)(v2 + 200),
                                  v2 + 168);
                    std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v2 + 112, Separator);
                    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 200));
                  }
                  else
                  {
                    v22 = lambda_d6b4118795ae303e935bbd5b6ca0014f_::_lambda_d6b4118795ae303e935bbd5b6ca0014f_(
                            v2 + 216,
                            *(volatile int **)(v2 + 801),
                            (__int64 *)(v2 + 16),
                            (_QWORD *)(v2 + 160),
                            (__int64 *)(v2 + 24));
                    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___(
                      (_QWORD *)(v2 + 208),
                      v22);
                    *(_QWORD *)(v2 + 256) = 0LL;
                    winrt::param::hstring::hstring(
                      (winrt::param::hstring *)(v2 + 264),
                      *(const unsigned __int16 *const *)(v18 + 16));
                    winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 296), &LocaleName);
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
                  if ( i == 2 )
                  {
                    *(_QWORD *)(v2 + 360) = 0LL;
                    *(_QWORD *)(v2 + 368) = 0LL;
                    *(_QWORD *)(v2 + 376) = 0LL;
                    for ( j = 0LL; ; ++j )
                    {
                      v25 = *(_QWORD *)(v2 + 801);
                      if ( j >= *(_QWORD *)(v25 + 216) )
                        break;
                      v26 = *(const unsigned __int16 *const **)(*(_QWORD *)(v25 + 208) + 8 * j);
                      *(_QWORD *)(v2 + 384) = v26;
                      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v2 + 384));
                      *(_QWORD *)(v2 + 400) = v25;
                      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
                        (_QWORD *)(v2 + 408),
                        (volatile int *)(v2 + 16));
                      *(_QWORD *)(v2 + 416) = v26;
                      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v2 + 416));
                      *(_OWORD *)(v2 + 424) = *(_OWORD *)(v2 + 809);
                      v27 = *(_QWORD *)(v2 + 24);
                      *(_QWORD *)(v2 + 440) = v27;
                      if ( v27 )
                        (*(void (**)(void))(*(_QWORD *)v27 + 8LL))();
                      *(_DWORD *)(v2 + 448) = *(_DWORD *)(v2 + 32);
                      *(_QWORD *)(v2 + 688) = v2 + 400;
                      winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___(
                        (_QWORD *)(v2 + 392),
                        v2 + 400);
                      lambda_190ccd1a8be9aac816201cee4203407b_::__lambda_190ccd1a8be9aac816201cee4203407b_((__int64 *)(v2 + 400));
                      *(_QWORD *)(v2 + 456) = 0LL;
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 464), v26[2]);
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 496), &LocaleName);
                      v28 = winrt::WindowsUdk::UI::MenuItem::CreateCommand(
                              v2 + 528,
                              v2 + 496,
                              v2 + 464,
                              v2 + 456,
                              v2 + 392);
                      std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(v2 + 360, v28);
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 528));
                      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 456));
                      if ( *(_QWORD *)(v2 + 392) )
                        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(v2 + 392));
                      (*((void (__fastcall **)(const unsigned __int16 *const *))*v26 + 2))(v26);
                    }
                    v29 = (const unsigned __int16 **)(v2 + 536);
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
                                                  v2 + 360);
                      *(_QWORD *)(v2 + 560) = 0LL;
                      *(_BYTE *)(v2 + 568) = 0;
                      winrt::attach_abi((winrt *)(v2 + 560), *v30, v31);
                      *(_QWORD *)(v2 + 584) = 0LL;
                      v45 = *v29;
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 592), v45);
                      winrt::param::hstring::hstring((winrt::param::hstring *)(v2 + 624), &LocaleName);
                      Container = winrt::WindowsUdk::UI::MenuItem::CreateContainer(
                                    (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))(v2 + 656),
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
                      v29 = (const unsigned __int16 **)(v2 + 536);
                    }
                    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
                    v33 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 360);
                    if ( v33 )
                    {
                      std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                        v33,
                        *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 368));
                      std::_Deallocate<16,0>(
                        v33,
                        (const struct std::nothrow_t *)((*(_QWORD *)(v2 + 376) - (_QWORD)v33) & 0xFFFFFFFFFFFFFFF8uLL));
                    }
                  }
                  v34 = *(_QWORD *)(v2 + 160);
                  if ( v34 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                  v15 = v48;
                }
              }
              v12 = (struct _RTL_CRITICAL_SECTION **)(v2 + 136);
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v12);
          }
          catch ( ... )
          {
            wil::details::in1diag3::Log_CaughtException(
              retaddr,
              (void *)0x71B,
              (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
              v35);
            v2 = a1;
          }
          v36 = winrt::single_threaded_vector<winrt::WindowsUdk::UI::MenuItem,std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
                  (_QWORD *)(v2 + 664),
                  v2 + 112);
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
          v39 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 112);
          if ( v39 )
          {
            std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
              v39,
              *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 120));
            std::_Deallocate<16,0>(
              v39,
              (const struct std::nothrow_t *)((*(_QWORD *)(v2 + 128) - (_QWORD)v39) & 0xFFFFFFFFFFFFFFF8uLL));
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 24));
          wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
            (__int64 *)(v2 + 16),
            v40);
          *(_QWORD *)(v2 + 680) = *(_QWORD *)(v2 + 784);
          *(_WORD *)(v2 + 8) = 0;
          if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                  (__int64 *)(v2 + 680),
                  v41) )
          {
LABEL_54:
            std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(v2 - 112));
            if ( *(_WORD *)(v2 + 10) )
              operator delete((void *)(v2 - 112), (const struct std::nothrow_t *)0x3B0);
          }
        }
      }
      else
      {
        *(_WORD *)(v2 + 8) = 4;
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
        v8);
      goto LABEL_54;
    case 6:
      goto LABEL_16;
    case 7:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(
        (__int64 *)(v2 + 16),
        v10);
      goto LABEL_54;
    default:
      __debugbreak();
      return;
  }
}
