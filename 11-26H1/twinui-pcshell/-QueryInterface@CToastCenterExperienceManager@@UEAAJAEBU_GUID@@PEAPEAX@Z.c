/*
 * XREFs of ?QueryInterface@CToastCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180172F20
 * Callers:
 *     ?QueryInterface@CToastCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D540 (-QueryInterface@CToastCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D550 (-QueryInterface@CToastCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D560 (-QueryInterface@CToastCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D570 (-QueryInterface@CToastCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D580 (-QueryInterface@CToastCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D590 (-QueryInterface@CToastCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D5A0 (-QueryInterface@CToastCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CToastCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037D5B0 (-QueryInterface@CToastCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CToastCenterExperienceManager::QueryInterface(
        CToastCenterExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>>(
           this,
           a2,
           a3);
}
