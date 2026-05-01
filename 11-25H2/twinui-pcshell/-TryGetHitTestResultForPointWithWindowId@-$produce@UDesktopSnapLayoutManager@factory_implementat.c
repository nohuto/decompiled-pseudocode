/*
 * XREFs of ?TryGetHitTestResultForPointWithWindowId@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics2@34567@@impl@winrt@@UEAAHUPoint@Foundation@Windows@3@Ustruct_Windows_UI_WindowId@23@PEAPEAX@Z @ 0x1805974E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@UWindowId@UI@67@@Z @ 0x18029ACA8 (-TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2>::TryGetHitTestResultForPointWithWindowId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  float v6[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  *(_QWORD *)v6 = a2;
  *a4 = 0LL;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPointWithWindowId(
    &v7,
    v6);
  *a4 = v7;
  return 0LL;
}
