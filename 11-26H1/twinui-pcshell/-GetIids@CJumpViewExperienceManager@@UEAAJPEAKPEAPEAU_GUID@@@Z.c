/*
 * XREFs of ?GetIids@CJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18038D0D0
 * Callers:
 *     ?GetIids@CJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18038D0E0 (-GetIids@CJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceManager::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>>(
           this,
           a2,
           a3);
}
