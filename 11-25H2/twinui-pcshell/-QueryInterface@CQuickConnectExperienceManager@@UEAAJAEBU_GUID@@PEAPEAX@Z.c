/*
 * XREFs of ?QueryInterface@CQuickConnectExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BD40
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BD50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18038BD50.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BD60 (-QueryInterface@CQuickConnectExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BD70 (-QueryInterface@CQuickConnectExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::QueryInterface(__int64 this, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>>(
           this,
           a2,
           a3);
}
