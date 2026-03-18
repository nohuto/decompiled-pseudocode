/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x1801CE830
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x1801CE8F8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 */

float __fastcall CPositionMotion::AdvanceInertiaToTimeDefault(CPositionMotion *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4

  v2 = CPositionMotion::UnboundedInertiaPanningAtTime(this, fminf(*((float *)this + 12), *((float *)this + 23)));
  v3 = v2 - *((float *)this + 27);
  *((float *)this + 27) = v2;
  v4 = *((float *)this + 34) + *((float *)this + 33);
  *((float *)this + 26) = v3;
  *((float *)this + 11) = v4 + v3;
  return CMotion::AdvanceInertiaToTimeDefault(this);
}
