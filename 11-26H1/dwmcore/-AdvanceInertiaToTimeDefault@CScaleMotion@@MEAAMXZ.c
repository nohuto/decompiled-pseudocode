/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x180209BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180209C20 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 */

float __fastcall CScaleMotion::AdvanceInertiaToTimeDefault(CScaleMotion *this)
{
  *((float *)this + 11) = CScaleMotion::UnboundedValueAtTime(this, fminf(*((float *)this + 12), *((float *)this + 23)));
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
