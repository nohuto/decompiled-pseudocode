/*
 * XREFs of ?_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z @ 0x18008896C
 * Callers:
 *     ?Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x180088870 (-Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z.c)
 * Callees:
 *     _o_fmodf_0 @ 0x18009B6D0 (_o_fmodf_0.c)
 */

float __fastcall CAnimatedTransitionVisual::_NormalizeAngleToShowFront(CAnimatedTransitionVisual *this, float a2)
{
  float v2; // xmm2_4
  double v3; // xmm0_8

  v2 = a2;
  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) > 90.0 )
  {
    v3 = o_fmodf_0(this);
    v2 = *(float *)&v3;
    if ( *(float *)&v3 <= 90.0 )
    {
      if ( *(float *)&v3 < -90.0 )
        return *(float *)&v3 + 180.0;
    }
    else
    {
      return *(float *)&v3 + -180.0;
    }
  }
  return v2;
}
