/*
 * XREFs of ?Release@CCortanaShownEventArgs@@UEAAKXZ @ 0x1802D06B0
 * Callers:
 *     sub_18036D590 @ 0x18036D590 (sub_18036D590.c)
 *     ?Release@CCortanaShownEventArgs@@W7EAAKXZ @ 0x1803AE870 (-Release@CCortanaShownEventArgs@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCortanaShownEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(this);
}
