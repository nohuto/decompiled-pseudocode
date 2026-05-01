/*
 * XREFs of ??1?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1803FB5C0
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::Create_::_1_::dtor$0 @ 0x1806E9548 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListenerFactory--Create_--_1_--dtor$0.c)
 *     _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$2 @ 0x1806E9B0A (_HolographicPositioner--_RaiseViewRemoved_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::~ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(a1);
}
