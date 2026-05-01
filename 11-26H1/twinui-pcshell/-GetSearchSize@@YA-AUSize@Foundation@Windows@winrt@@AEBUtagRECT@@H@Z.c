/*
 * XREFs of ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803CF59C
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x180240400 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x180240E0C (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     ?GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUMonitorInfo@@@Z @ 0x1803CF4A0 (-GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUMonitorInfo@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801C44C0 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetStartWindowInfo@?$consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3@UIStartControllerExtensionStatics3@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSize@Foundation@Windows@3@@Z @ 0x18021E5D0 (-GetStartWindowInfo@-$consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtension.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802B4E7C (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802B4E7C.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?CalculateFallbackSearchSize@@YA?AUSize@Foundation@Windows@winrt@@U1234@@Z @ 0x1803CF214 (-CalculateFallbackSearchSize@@YA-AUSize@Foundation@Windows@winrt@@U1234@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
float *__fastcall GetSearchSize(float *a1, _DWORD *a2, int a3)
{
  float v6; // xmm6_4
  void (__fastcall ***v7)(_QWORD, void *, __int64 **); // rcx
  __int64 *v8; // rbx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-39h] BYREF
  __int64 v12; // [rsp+30h] [rbp-31h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-19h] BYREF
  int v15; // [rsp+50h] [rbp-11h] BYREF
  __int128 v16; // [rsp+58h] [rbp-9h]
  _BYTE v17[56]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 *v18; // [rsp+D0h] [rbp+6Fh] BYREF
  __int64 *v19; // [rsp+E0h] [rbp+7Fh] BYREF

  v6 = (float)MulDiv(a2[3] - a2[1], 96, a3);
  *(float *)&v12 = (float)MulDiv(a2[2] - *a2, 96, a3);
  *((float *)&v12 + 1) = v6;
  v13[0] = (__int64)L"WindowsUdk.UI.StartScreen.Implementation.StartControllerExtension";
  v13[1] = 65LL;
  winrt::param::hstring::hstring((__int64)&v15, v13);
  winrt::param::hstring::hstring((winrt::param::hstring *)v17, L"com.microsoft.windows.app.startmenu");
  v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 **))winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                                                              (const struct winrt::param::hstring *)&v14,
                                                              (const struct winrt::param::hstring *)v17,
                                                              (__int64)&v15);
  if ( v7 )
  {
    v18 = 0LL;
    (**v7)(
      v7,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IStartControllerExtensionStatics3>,
      &v18);
    v8 = v18;
    v19 = v18;
  }
  else
  {
    v19 = 0LL;
    v8 = 0LL;
  }
  if ( v14 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  if ( v8 )
  {
    winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3<winrt::WindowsUdk::UI::StartScreen::Implementation::IStartControllerExtensionStatics3>::GetStartWindowInfo(
      &v19,
      v13,
      (unsigned int *)&v12);
    v11 = 0LL;
    v15 = 0;
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13[0] + 56LL))(v13[0], &v11);
    winrt::check_hresult((int *)&v18, v9, (__int64)&v15);
    if ( !winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided(v13) )
      LODWORD(v11) = 1145176064;
    *(_QWORD *)a1 = v11;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  }
  else
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    CalculateFallbackSearchSize(a1, v12);
  }
  return a1;
}
