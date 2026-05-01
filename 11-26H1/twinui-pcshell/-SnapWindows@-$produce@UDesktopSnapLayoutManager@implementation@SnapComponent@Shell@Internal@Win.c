/*
 * XREFs of ?SnapWindows@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@IPEAURect@Foundation@Windows@3@@Z @ 0x1805BB4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB51C (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::SnapWindows(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v1 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((a1 - 48) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindows(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
