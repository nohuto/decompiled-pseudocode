/*
 * XREFs of ?Release@CInsightsExperienceManager@@UEAAKXZ @ 0x18022A8C0
 * Callers:
 *     ?Release@CInsightsExperienceManager@@W7EAAKXZ @ 0x180397700 (-Release@CInsightsExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CInsightsExperienceManager@@WBA@EAAKXZ @ 0x180397710 (-Release@CInsightsExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CInsightsExperienceManager@@WBI@EAAKXZ @ 0x180397720 (-Release@CInsightsExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CInsightsExperienceManager@@WCA@EAAKXZ @ 0x180397730 (-Release@CInsightsExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CInsightsExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(this);
}
