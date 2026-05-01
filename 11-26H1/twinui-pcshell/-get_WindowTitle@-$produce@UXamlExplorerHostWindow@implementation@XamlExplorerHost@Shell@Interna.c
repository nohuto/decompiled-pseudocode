/*
 * XREFs of ?get_WindowTitle@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804507C0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_WindowTitle(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v7[2]; // [rsp+20h] [rbp-228h] BYREF
  WCHAR pString[256]; // [rsp+30h] [rbp-218h] BYREF

  *a2 = 0LL;
  v4 = a1 + 32;
  if ( !a1 )
    v4 = 40LL;
  if ( InternalGetWindowText(*(HWND *)v4, pString, 255) )
  {
    winrt::hstring::hstring((winrt::hstring *)v7, pString);
    v5 = v7[0];
  }
  else
  {
    v5 = 0LL;
  }
  v7[0] = 0LL;
  *a2 = v5;
  winrt::handle_type<winrt::impl::hstring_traits>::close(v7);
  return 0LL;
}
