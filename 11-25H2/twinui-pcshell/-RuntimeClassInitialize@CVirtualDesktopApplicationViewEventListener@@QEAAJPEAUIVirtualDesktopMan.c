/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1800A2804
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1802A025C (--$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopMana.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x1800A2880 (--4-$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitc.c)
 */

__int64 __fastcall CVirtualDesktopApplicationViewEventListener::RuntimeClassInitialize(
        CVirtualDesktopApplicationViewEventListener *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IVirtualDesktopForegroundPolicy *a4,
        struct IVirtualDesktopWindowMoveManager *a5,
        struct IVirtualDesktopPinnedAppsPrivate *a6,
        struct IVirtualDesktopLock *a7)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=((char *)this + 56, a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, (__int64)a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a6);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a7);
  return 0LL;
}
