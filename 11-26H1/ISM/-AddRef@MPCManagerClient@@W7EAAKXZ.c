/*
 * XREFs of ?AddRef@MPCManagerClient@@W7EAAKXZ @ 0x180165380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::AddRef(
           a1 - 8,
           a2);
}
