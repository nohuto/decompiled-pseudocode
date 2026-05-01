/*
 * XREFs of ?ClearFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1804419E4
 * Callers:
 *     ?ClearFocus@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHXZ @ 0x1804419A0 (-ClearFocus@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?HasFocus@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180066094 (-HasFocus@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@H.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::ClearFocus(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this)
{
  HWND Ancestor; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 7, &v5) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA6,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v3);
  if ( winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::HasFocus((__int64 *)this + 7) )
  {
    Ancestor = GetAncestor(*((HWND *)this + 10), 2u);
    SetFocus(Ancestor);
  }
}
