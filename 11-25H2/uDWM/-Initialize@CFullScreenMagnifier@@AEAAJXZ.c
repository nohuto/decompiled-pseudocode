/*
 * XREFs of ?Initialize@CFullScreenMagnifier@@AEAAJXZ @ 0x18007CAC8
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800882F8 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18007CAF0 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::Initialize(CFullScreenMagnifier *this)
{
  CFullScreenMagnifier::UpdateSettings(this, 1.0, 0.0, 0.0);
  return 0LL;
}
