/*
 * XREFs of ?Release@CControlCenterExperienceManager@@UEAAKXZ @ 0x180217CE0
 * Callers:
 *     ?Release@CControlCenterExperienceManager@@W7EAAKXZ @ 0x180366F10 (-Release@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x180366F20 (-Release@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x180366F30 (-Release@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x180366F40 (-Release@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x180366F50 (-Release@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDA@EAAKXZ @ 0x180366F60 (-Release@CControlCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x180366F70 (-Release@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x180366F80 (-Release@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WEI@EAAKXZ @ 0x180366F90 (-Release@CControlCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WFA@EAAKXZ @ 0x180366FA0 (-Release@CControlCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::Release(CControlCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::Release(this);
}
