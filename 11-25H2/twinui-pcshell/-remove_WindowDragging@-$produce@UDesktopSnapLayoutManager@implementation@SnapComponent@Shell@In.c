/*
 * XREFs of ?remove_WindowDragging@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180598070
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowDragging@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@7@@Z @ 0x1805975E4 (-WindowDragging@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna_ea_1805975E4.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::remove_WindowDragging(
        __int64 a1,
        void *a2)
{
  PVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::WindowDragging(
    (RTL_SRWLOCK *)((a1 - 48) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
