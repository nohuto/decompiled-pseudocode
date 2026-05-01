/*
 * XREFs of ?QueryInterface@CPeopleBarJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CE360
 * Callers:
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180384330 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180384340 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180384350 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarJumpViewExperienceManager::QueryInterface(
        CPeopleBarJumpViewExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
