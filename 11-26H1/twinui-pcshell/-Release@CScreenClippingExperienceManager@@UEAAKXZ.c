/*
 * XREFs of ?Release@CScreenClippingExperienceManager@@UEAAKXZ @ 0x1801F7270
 * Callers:
 *     ?Release@CScreenClippingExperienceManager@@W7EAAKXZ @ 0x18039C460 (-Release@CScreenClippingExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WBA@EAAKXZ @ 0x18039C470 (-Release@CScreenClippingExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WBI@EAAKXZ @ 0x18039C480 (-Release@CScreenClippingExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CScreenClippingExperienceManager::Release(CScreenClippingExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::Release(this);
}
