/*
 * XREFs of ?CalculatePositionAnimationDuration@CInteractionTracker2@@AEAAMAEBUD2DVector3@@@Z @ 0x1802723D8
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0 (-ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CInteractionTracker2::CalculatePositionAnimationDuration(
        CInteractionTracker2 *this,
        const struct D2DVector3 *a2)
{
  unsigned __int64 v4; // rcx
  float v6; // xmm3_4
  bool v7; // cl
  float v8; // xmm2_4
  bool v9; // al
  float v10; // xmm7_4
  float v11; // ebx
  double v12; // xmm0_8
  float v13; // xmm6_4

  v4 = *((_QWORD *)this + 53) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 108) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v4 )
    return FLOAT_0_001;
  v6 = *(float *)a2;
  v7 = *(float *)a2 >= *((float *)this + 109) && *((float *)this + 112) >= v6;
  v8 = *((float *)a2 + 1);
  v9 = v8 >= *((float *)this + 110) && *((float *)this + 113) >= v8;
  if ( v7 && v9 )
    return *((float *)this + 118);
  v10 = sqrtf_0(
          (float)((float)((float)(v8 - *((float *)this + 107)) * (float)(v8 - *((float *)this + 107)))
                + (float)((float)(v6 - *((float *)this + 106)) * (float)(v6 - *((float *)this + 106))))
        + (float)((float)(*((float *)a2 + 2) - *((float *)this + 108))
                * (float)(*((float *)a2 + 2) - *((float *)this + 108))))
      / *((float *)this + 118);
  v11 = *((float *)a2 + 2);
  v12 = (*(double (__fastcall **)(CInteractionTracker2 *, _QWORD))(*(_QWORD *)this + 584LL))(this, 0LL);
  v13 = *(float *)&v12;
  *(float *)&v12 = (*(float (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)this + 584LL))(this, 1LL);
  return fmaxf(
           sqrtf_0(
             (float)((float)((float)(*(float *)&v12 - *((float *)this + 107))
                           * (float)(*(float *)&v12 - *((float *)this + 107)))
                   + (float)((float)(v13 - *((float *)this + 106)) * (float)(v13 - *((float *)this + 106))))
           + (float)((float)(v11 - *((float *)this + 108)) * (float)(v11 - *((float *)this + 108))))
         / v10,
           0.001);
}
