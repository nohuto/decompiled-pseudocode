/*
 * XREFs of ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180227A80
 * Callers:
 *     ?QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180383190 (-QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803831A0 (-QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803831B0 (-QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803831C0 (-QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803831D0 (-QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803831E0 (-QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803831F0 (-QueryInterface@CStartExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStartExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>>(
           this,
           a2,
           a3);
}
