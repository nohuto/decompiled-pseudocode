/*
 * XREFs of ?GetIids@CControlCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180365530
 * Callers:
 *     ?GetIids@CControlCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180365540 (-GetIids@CControlCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CControlCenterExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180365550 (-GetIids@CControlCenterExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CControlCenterExperienceManager@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180365560 (-GetIids@CControlCenterExperienceManager@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>>(
           this,
           a2,
           a3);
}
