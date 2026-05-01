/*
 * XREFs of ?Release@CControlCenterExperienceManager@@UEAAKXZ @ 0x180206B90
 * Callers:
 *     ?Release@CControlCenterExperienceManager@@W7EAAKXZ @ 0x18036E100 (-Release@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x18036E110 (-Release@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x18036E120 (-Release@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x18036E130 (-Release@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x18036E140 (-Release@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDA@EAAKXZ @ 0x18036E150 (-Release@CControlCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x18036E160 (-Release@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x18036E170 (-Release@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WEI@EAAKXZ @ 0x18036E180 (-Release@CControlCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WFA@EAAKXZ @ 0x18036E190 (-Release@CControlCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::Release(CControlCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::Release(this);
}
