/*
 * XREFs of ?SetActiveControl@WindowDragInputProvider@@QEAAXUIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1802C561C
 * Callers:
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18026A968 (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x1805B44D0 (-OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

void __fastcall WindowDragInputProvider::SetActiveControl(__int64 a1, __int64 *a2)
{
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 40), a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
}
