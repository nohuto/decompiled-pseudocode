/*
 * XREFs of ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1802706D4
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18013DCFC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CInteractionTracker::CalculateScaleAnimationDuration(CInteractionTracker *this, float a2)
{
  float v2; // xmm7_4
  float v4; // xmm6_4
  double v5; // xmm0_8

  v2 = *((float *)this + 60);
  if ( v2 == a2 )
    return FLOAT_0_001;
  if ( a2 >= *((float *)this + 61) && *((float *)this + 62) >= a2 )
    return *((float *)this + 58);
  v4 = COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - v2) & _xmm) / *((float *)this + 59);
  v5 = (*(double (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 584LL))(this, 2LL);
  return fmaxf(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v5 - v2) & _xmm) / v4, 0.001);
}
