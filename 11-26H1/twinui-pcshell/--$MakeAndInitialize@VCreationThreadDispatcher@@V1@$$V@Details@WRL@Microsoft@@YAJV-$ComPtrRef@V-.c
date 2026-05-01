/*
 * XREFs of ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800D85E0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x1800581D0 (--$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA-AV-$ComPtr@VCreationThreadDis.c)
 *     ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x1800D33A0 (-RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800D6AD4 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x1800D7CC0 (-RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ.c)
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1800D8284 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1802275CC (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(a1);
}
