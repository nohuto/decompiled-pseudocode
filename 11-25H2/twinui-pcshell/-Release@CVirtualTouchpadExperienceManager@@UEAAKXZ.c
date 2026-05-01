/*
 * XREFs of ?Release@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1802285A0
 * Callers:
 *     ?Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ @ 0x180390F30 (-Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x180390F40 (-Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ @ 0x180390F50 (-Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ @ 0x180390F60 (-Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(this);
}
