/*
 * XREFs of ?Release@CVisibilityChangedEventArgs@@UEAAKXZ @ 0x1802B3480
 * Callers:
 *     ?Release@CVisibilityChangedEventArgs@@W7EAAKXZ @ 0x180367600 (-Release@CVisibilityChangedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CVisibilityChangedEventArgs@@WBA@EAAKXZ @ 0x180367610 (-Release@CVisibilityChangedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVisibilityChangedEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
