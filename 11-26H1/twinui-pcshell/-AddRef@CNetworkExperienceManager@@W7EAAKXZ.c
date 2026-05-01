/*
 * XREFs of ?AddRef@CNetworkExperienceManager@@W7EAAKXZ @ 0x180372070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNetworkExperienceManager::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDWMStoryboardListener>::AddRef(
           a1 - 8,
           a2);
}
