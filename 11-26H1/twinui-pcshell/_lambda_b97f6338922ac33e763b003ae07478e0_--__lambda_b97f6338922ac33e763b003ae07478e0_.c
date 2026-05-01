/*
 * XREFs of _lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_ @ 0x18051456C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::_CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___ @ 0x180514594 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___--_CTask.c)
 *     ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180514848 (-NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
