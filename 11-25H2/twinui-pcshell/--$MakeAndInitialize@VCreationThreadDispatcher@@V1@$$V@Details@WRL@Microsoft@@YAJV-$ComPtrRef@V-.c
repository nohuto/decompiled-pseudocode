/*
 * XREFs of ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x18007F0BC
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x18007ED74 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x180080124 (-RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x1800E1F58 (-RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ.c)
 *     ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x1800F95D0 (--$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA-AV-$ComPtr@VCreationThreadDis.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1801756C8 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180235708 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(a1);
}
