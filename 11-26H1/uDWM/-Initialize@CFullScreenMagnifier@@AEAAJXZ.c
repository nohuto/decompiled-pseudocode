/*
 * XREFs of ?Initialize@CFullScreenMagnifier@@AEAAJXZ @ 0x1800774C8
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18006B4E0 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800774F0 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::Initialize(CFullScreenMagnifier *this)
{
  CFullScreenMagnifier::UpdateSettings(this, 1.0, 0.0, 0.0);
  return 0LL;
}
