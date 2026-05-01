/*
 * XREFs of ?Release@CStartExperienceManager@@UEAAKXZ @ 0x1801AA4A0
 * Callers:
 *     ?Release@CStartExperienceManager@@W7EAAKXZ @ 0x18038A930 (-Release@CStartExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCA@EAAKXZ @ 0x18038A940 (-Release@CStartExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCI@EAAKXZ @ 0x18038A950 (-Release@CStartExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDA@EAAKXZ @ 0x18038A960 (-Release@CStartExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDI@EAAKXZ @ 0x18038A970 (-Release@CStartExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEA@EAAKXZ @ 0x18038A980 (-Release@CStartExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEI@EAAKXZ @ 0x18038A990 (-Release@CStartExperienceManager@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStartExperienceManager::Release(CStartExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(this);
}
