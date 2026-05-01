/*
 * XREFs of ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1801462B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180266C1C (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     ?SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXW4SwitchTabOptions@@@Z @ 0x1802BE37C (-SwitchToTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXW4SwitchTabOptions.c)
 *     ?TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1802C60E8 (-TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?OnFileOpenPickerActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileOpenPickerActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x18044BAD8 (-OnFileOpenPickerActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverride.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180581EE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_N.c)
 *     ?SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180582D28 (-SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ @ 0x1805832D8 (-WindowTabHostLivePreviewOnTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

LRESULT __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc(
        HWND *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v8; // rdi
  UINT v9; // edx
  UINT v10; // edx
  HWND *v12; // rcx
  __int64 v13; // rdx
  LPARAM v14; // r9
  WPARAM v15; // r8
  HWND v16; // rcx
  int v17; // ebx
  const char *v18; // r9
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+20h] [rbp-18h]
  const winrt::hresult_error *v21; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v23; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v20 = 0LL;
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabSwitchMessageId )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      a3);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3, (unsigned int)a4);
    return v8;
  }
  if ( a3 == winrt::Windows::Internal::Shell::implementation::TabProxyWindow::s_tabTearOutMessageId )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab(
      (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)(this - 3),
      lParam);
    return v8;
  }
  v9 = 16;
  switch ( a3 )
  {
    case 0x10u:
      if ( this[3] )
      {
        if ( lParam != 1 )
          SetForegroundWindow(this[4]);
        try
        {
          winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileOpenPickerActivated(
            this + 2,
            this + 3);
        }
        catch ( winrt::hresult_invalid_argument )
        {
          return v20;
        }
        catch ( const winrt::hresult_error *v21 )
        {
          v17 = *((_DWORD *)v21 + 3);
          if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v17, (int)&v19) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x426,
              (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              v18);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x42A,
              (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              (const char *)(unsigned int)v17);
          return v20;
        }
      }
      return v8;
    case 0x112u:
      if ( !this[3] || a4 != 61536 )
      {
        v10 = 274;
        return DefWindowProcW(a2, v10, a4, lParam);
      }
      v14 = 1LL;
      v15 = 0LL;
      v16 = this[1];
LABEL_19:
      PostMessageW(v16, v9, v15, v14);
      return v8;
    case 0x313u:
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab(this - 3, 0LL);
      v14 = lParam;
      v15 = a4;
      v9 = 787;
      v16 = this[4];
      goto LABEL_19;
    case 0x323u:
      v12 = this - 3;
      if ( v12[6] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(v12, &v23);
      break;
    case 0x326u:
      WindowTabHostTelemetry::WindowTabHostLivePreviewOnTab();
      LOBYTE(v13) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_LivePreviewForTabs>::GetImpl'::`2'::impl,
        v13);
      if ( this[3] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync(this - 3, &v23);
      break;
    default:
      v10 = a3;
      return DefWindowProcW(a2, v10, a4, lParam);
  }
  return v8;
}
