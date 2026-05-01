/*
 * XREFs of ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1801BB28C
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x18024C4B0 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ @ 0x1801BB2F4 (--0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?TextScaleFactor@?$consume_Windows_UI_ViewManagement_IUISettings2@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803C5B94 (-TextScaleFactor@-$consume_Windows_UI_ViewManagement_IUISettings2@UUISettings@ViewManagement@UI@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SearchAppSizeHelpers::IsWideAtStartupEnabled(SearchAppSizeHelpers *this)
{
  int v1; // ebx
  bool v3; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int)this;
  winrt::Windows::UI::ViewManagement::UISettings::UISettings((winrt::Windows::UI::ViewManagement::UISettings *)&v4);
  if ( winrt::impl::consume_Windows_UI_ViewManagement_IUISettings2<winrt::Windows::UI::ViewManagement::UISettings>::TextScaleFactor(&v4) <= 1.25 )
  {
    v3 = v1 >= 1024;
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    return v3;
  }
  else
  {
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    return 1;
  }
}
