/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18043F178
 * Callers:
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18043ED70 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18043ED90 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18043ED90.c)
 *     ?GetIids@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDK@345678@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18043EDB0 (-GetIids@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18043EDD0 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18043EDD0.c)
 * Callees:
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C9C5C (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802D363D (__Platform_CoTaskMemAlloc.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18043FC48 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::NonDelegatingGetIids(
        _QWORD **a1,
        _DWORD *a2,
        char **a3)
{
  unsigned int v6; // edx
  char *v7; // rax
  char *v8; // rdi
  size_t v10; // rbx
  void *v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-40h]
  unsigned int v13; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+38h] [rbp-30h]

  ((void (__fastcall *)(_QWORD **, unsigned int *))(*a1)[4])(a1, &v13);
  if ( !v13 )
    return (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, char **))(*a1[1] + 24LL))(a1[1], a2, a3);
  winrt::get_interfaces(&v11, a1 + 1);
  v6 = v13 + v12;
  *a2 = v13 + v12;
  v7 = (char *)_Platform_CoTaskMemAlloc(16LL * v6);
  v8 = v7;
  *a3 = v7;
  if ( v7 )
  {
    v10 = 16LL * v13;
    memmove_0(v7, Src, v10);
    memmove_0(&v8[v10], v11, 16LL * v12);
    winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>((__int64)&v11);
    return 0LL;
  }
  else
  {
    winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>((__int64)&v11);
    return 2147942414LL;
  }
}
