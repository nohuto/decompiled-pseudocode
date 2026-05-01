/*
 * XREFs of ?AddRef@ImeNotificationExperienceManager@@W7EAAKXZ @ 0x1803798E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ImeNotificationExperienceManager::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::AddRef(
           a1 - 8,
           a2);
}
