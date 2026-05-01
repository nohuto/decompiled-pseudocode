/*
 * XREFs of ?QueryInterface@CControlCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053770
 * Callers:
 *     ?QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DCB0 (-QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DCC0 (-QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DCD0 (-QueryInterface@CControlCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DCE0 (-QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DCF0 (-QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DD00 (-QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DD10 (-QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DD20 (-QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DD30 (-QueryInterface@CControlCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DD40 (-QueryInterface@CControlCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::QueryInterface(
        CControlCenterExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>>(
           this,
           a2,
           a3);
}
