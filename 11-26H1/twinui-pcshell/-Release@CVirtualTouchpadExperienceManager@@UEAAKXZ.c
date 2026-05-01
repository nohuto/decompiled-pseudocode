/*
 * XREFs of ?Release@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1800F0370
 * Callers:
 *     ?Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ @ 0x180398270 (-Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x180398280 (-Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ @ 0x180398290 (-Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ @ 0x1803982A0 (-Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::Release(CVirtualTouchpadExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(this);
}
