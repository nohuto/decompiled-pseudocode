/*
 * XREFs of ?Close@?$consume_Windows_Foundation_IClosable@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AEE64
 * Callers:
 *     ?Close@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801AECC4 (-Close@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@.c)
 *     ?Close@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801AEDAC (-Close@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?Close@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x180207990 (-Close@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Intern.c)
 *     ?Close@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@@impl@winrt@@UEAAHXZ @ 0x180444C40 (-Close@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_Foundation_IClosable<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource>::Close(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64 *, __int64 *); // rcx
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // eax
  _BYTE v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  int v7; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (**v1)(
           v1,
           &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IClosable>>::value,
           &v9);
    v3 = v9;
    v6 = v9;
  }
  else
  {
    v2 = 0;
    v6 = 0LL;
    v3 = 0LL;
  }
  v7 = 0;
  v8 = 0LL;
  winrt::check_hresult(v5, v2, &v7);
  v7 = 0;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  winrt::check_hresult(v5, v4, &v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
}
