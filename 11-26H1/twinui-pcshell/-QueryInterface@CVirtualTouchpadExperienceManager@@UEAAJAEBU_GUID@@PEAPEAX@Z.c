/*
 * XREFs of ?QueryInterface@CVirtualTouchpadExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051C60
 * Callers:
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803981F0 (-QueryInterface@CVirtualTouchpadExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180398200 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180398210 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180398220 (-QueryInterface@CVirtualTouchpadExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::QueryInterface(
        CVirtualTouchpadExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
