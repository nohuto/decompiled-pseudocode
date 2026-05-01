/*
 * XREFs of ?Release@UndockedSearchAppExperienceManager@@UEAAKXZ @ 0x180205160
 * Callers:
 *     ?Release@UndockedSearchAppExperienceManager@@W7EAAKXZ @ 0x1803AE880 (-Release@UndockedSearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@UndockedSearchAppExperienceManager@@WBA@EAAKXZ @ 0x1803AE890 (-Release@UndockedSearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ @ 0x1803AE8A0 (-Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UndockedSearchAppExperienceManager::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::Release(this);
}
