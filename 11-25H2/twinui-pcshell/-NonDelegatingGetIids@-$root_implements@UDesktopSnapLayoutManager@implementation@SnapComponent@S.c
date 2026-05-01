/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x180596ADC
 * Callers:
 *     ?GetIids@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180595DF0 (-GetIids@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180595E10 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wi.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180595E40 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_180595E40.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180595E70 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_180595E70.c)
 * Callees:
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C9C5C (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802D363D (__Platform_CoTaskMemAlloc.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18043FC48 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingGetIids(
        __int64 *a1,
        _DWORD *a2,
        char **a3)
{
  unsigned int v6; // edx
  char *v7; // rax
  char *v8; // rdi
  size_t v10; // rbx
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  (*(void (__fastcall **)(__int64 *, unsigned int *))(*a1 + 32))(a1, &v13);
  if ( !v13 )
    return (*(__int64 (__fastcall **)(__int64, _DWORD *, char **))(*(_QWORD *)a1[1] + 24LL))(a1[1], a2, a3);
  winrt::get_interfaces((__int64)&v11, a1 + 1);
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
