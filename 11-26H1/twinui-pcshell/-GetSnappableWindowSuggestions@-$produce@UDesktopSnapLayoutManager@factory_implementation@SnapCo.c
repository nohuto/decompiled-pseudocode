/*
 * XREFs of ?GetSnappableWindowSuggestions@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAIPEAPEAUstruct_Windows_Internal_Shell_PlatformExtensions_SnappableWindowSuggestion@23@@Z @ 0x1802A8030
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@YA?A_P$$QEAU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180216538 (--$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x18026B230 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 *     ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802911D4 (--$_Destroy_range@V-$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::GetSnappableWindowSuggestions(
        __int64 a1,
        HWND a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  void *v7; // rbx
  __int64 result; // rax
  LPVOID pv; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  *a4 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowSuggestions(
      (__int64)&pv,
      a2);
    v6 = winrt::detach_abi<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>();
    *a3 = *(_DWORD *)v6;
    *a4 = *(_QWORD *)(v6 + 8);
    v7 = pv;
    if ( pv )
    {
      std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
        (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)pv,
        (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)((char *)pv + 16 * v10));
      CoTaskMemFree_0(v7);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v11);
  }
  return result;
}
