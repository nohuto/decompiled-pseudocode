/*
 * XREFs of ?Release@CRadialGradientEffect@@UEAAKXZ @ 0x1800E1290
 * Callers:
 *     ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x1802B3810 (-Release@CPassthroughEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CRadialGradientEffect::Release(CRadialGradientEffect *this)
{
  return CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(this);
}
