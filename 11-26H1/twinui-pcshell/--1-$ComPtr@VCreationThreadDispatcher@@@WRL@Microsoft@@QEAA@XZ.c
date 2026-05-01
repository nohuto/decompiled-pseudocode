/*
 * XREFs of ??1?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x180024568
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CreationThreadDispatcher__::_1_::dtor$0 @ 0x1806CFE9F (_wil--MakeAndInitializeOrThrow_CreationThreadDispatcher__--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$38 @ 0x1806E3D66 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$38.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<CreationThreadDispatcher>::~ComPtr<CreationThreadDispatcher>()
{
  return Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease();
}
