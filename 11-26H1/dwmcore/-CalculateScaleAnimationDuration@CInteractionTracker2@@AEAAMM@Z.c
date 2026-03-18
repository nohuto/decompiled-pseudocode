/*
 * XREFs of ?CalculateScaleAnimationDuration@CInteractionTracker2@@AEAAMM@Z @ 0x18027255C
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CInteractionTracker2::CalculateScaleAnimationDuration(CInteractionTracker2 *this, float a2)
{
  float v2; // xmm7_4
  float v4; // xmm6_4
  double v5; // xmm0_8

  v2 = *((float *)this + 120);
  if ( v2 == a2 )
    return FLOAT_0_001;
  if ( a2 >= *((float *)this + 121) && *((float *)this + 122) >= a2 )
    return *((float *)this + 118);
  v4 = COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - v2) & _xmm) / *((float *)this + 119);
  v5 = (*(double (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)this + 584LL))(this, 2LL);
  return fmaxf(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v5 - v2) & _xmm) / v4, 0.001);
}
