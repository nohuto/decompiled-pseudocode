/*
 * XREFs of ?HasFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1800258A0
 * Callers:
 *     ?get_HasFocus@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180025860 (-get_HasFocus@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?HasFocus@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026104 (-HasFocus@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@H.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::HasFocus(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this)
{
  char *v1; // rbx
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (char *)this + 56;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 56, &v5) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v3);
  return winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::HasFocus(v1);
}
