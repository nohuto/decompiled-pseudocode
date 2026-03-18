/*
 * XREFs of ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1801D7520
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18013DCFC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CInteractionTracker::CalculatePositionAnimationDuration(
        CInteractionTracker *this,
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

  v4 = *((_QWORD *)this + 23) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 48) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v4 )
    return FLOAT_0_001;
  v6 = *(float *)a2;
  v7 = *(float *)a2 >= *((float *)this + 49) && *((float *)this + 52) >= v6;
  v8 = *((float *)a2 + 1);
  v9 = v8 >= *((float *)this + 50) && *((float *)this + 53) >= v8;
  if ( v7 && v9 )
    return *((float *)this + 58);
  v10 = sqrtf_0(
          (float)((float)((float)(v8 - *((float *)this + 47)) * (float)(v8 - *((float *)this + 47)))
                + (float)((float)(v6 - *((float *)this + 46)) * (float)(v6 - *((float *)this + 46))))
        + (float)((float)(*((float *)a2 + 2) - *((float *)this + 48))
                * (float)(*((float *)a2 + 2) - *((float *)this + 48))))
      / *((float *)this + 58);
  v11 = *((float *)a2 + 2);
  v12 = (*(double (__fastcall **)(CInteractionTracker *, _QWORD))(*(_QWORD *)this + 584LL))(this, 0LL);
  v13 = *(float *)&v12;
  *(float *)&v12 = (*(float (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 584LL))(this, 1LL);
  return fmaxf(
           sqrtf_0(
             (float)((float)((float)(*(float *)&v12 - *((float *)this + 47))
                           * (float)(*(float *)&v12 - *((float *)this + 47)))
                   + (float)((float)(v13 - *((float *)this + 46)) * (float)(v13 - *((float *)this + 46))))
           + (float)((float)(v11 - *((float *)this + 48)) * (float)(v11 - *((float *)this + 48))))
         / v10,
           0.001);
}
