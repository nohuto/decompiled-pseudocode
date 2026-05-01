/*
 * XREFs of ?Release@UndockedSearchAppExperienceManager@@UEAAKXZ @ 0x1801A5C60
 * Callers:
 *     ?Release@UndockedSearchAppExperienceManager@@W7EAAKXZ @ 0x1803B7310 (-Release@UndockedSearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@UndockedSearchAppExperienceManager@@WBA@EAAKXZ @ 0x1803B7320 (-Release@UndockedSearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ @ 0x1803B7330 (-Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall UndockedSearchAppExperienceManager::Release(UndockedSearchAppExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::Release(this);
}
