/*
 * XREFs of ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x18013B624
 * Callers:
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18013B30C (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@MMMMMM@Z @ 0x18013D614 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@MMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPositionMotion::AdvanceDeltaDueToScale(CPositionMotion *this)
{
  float v1; // xmm0_4
  float v2; // xmm2_4

  v1 = *((float *)this + 35);
  v2 = FLOAT_1_0;
  if ( v1 > 0.0 )
    v2 = *((float *)this + 28) / v1;
  *((float *)this + 33) = (float)((float)((float)(*((float *)this + 34) - *((float *)this + 30)) * v2)
                                + *((float *)this + 30))
                        - *((float *)this + 34);
}
