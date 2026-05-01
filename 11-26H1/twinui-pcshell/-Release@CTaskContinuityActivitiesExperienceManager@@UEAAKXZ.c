/*
 * XREFs of ?Release@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x1801F7300
 * Callers:
 *     ?Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ @ 0x18037ADD0 (-Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x18037ADE0 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x18037ADF0 (-Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CTaskContinuityActivitiesExperienceManager::Release(
        CTaskContinuityActivitiesExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(this);
}
