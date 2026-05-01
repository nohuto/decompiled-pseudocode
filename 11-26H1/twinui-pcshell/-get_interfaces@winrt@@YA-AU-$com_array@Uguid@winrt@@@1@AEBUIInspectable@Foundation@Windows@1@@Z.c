/*
 * XREFs of ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18044C208
 * Callers:
 *     ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B738 (-NonDelegatingGetIids@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@I.c)
 *     ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BAD28 (-NonDelegatingGetIids@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C142C (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::get_interfaces(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, int *, __int64); // rbx
  int v5; // eax
  int v7; // [rsp+30h] [rbp-20h] BYREF
  int v8; // [rsp+38h] [rbp-18h] BYREF
  __int128 v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+78h] [rbp+28h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  v8 = 0;
  v9 = 0LL;
  v3 = *a2;
  v4 = *(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)*a2 + 24LL);
  winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(a1);
  v7 = 0;
  v5 = v4(v3, &v7, a1);
  winrt::check_hresult(&v10, v5, (__int64)&v8);
  *(_DWORD *)(a1 + 8) = v7;
  return a1;
}
