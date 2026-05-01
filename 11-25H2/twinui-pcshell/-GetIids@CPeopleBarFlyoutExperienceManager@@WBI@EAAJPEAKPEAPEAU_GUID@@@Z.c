/*
 * XREFs of ?GetIids@CPeopleBarFlyoutExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180379230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetIids(__int64 a1, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::GetIids(
           a1 - 24,
           a2,
           a3);
}
