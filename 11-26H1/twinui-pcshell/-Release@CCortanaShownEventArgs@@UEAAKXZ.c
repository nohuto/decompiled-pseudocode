/*
 * XREFs of ?Release@CCortanaShownEventArgs@@UEAAKXZ @ 0x1802C7810
 * Callers:
 *     sub_180374AB0 @ 0x180374AB0 (sub_180374AB0.c)
 *     ?Release@CCortanaShownEventArgs@@W7EAAKXZ @ 0x1803B7300 (-Release@CCortanaShownEventArgs@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCortanaShownEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(this);
}
