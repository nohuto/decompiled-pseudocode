/*
 * XREFs of ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@MMMMMM@Z @ 0x18013D614
 * Callers:
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x18013D430 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 * Callees:
 *     ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x18013B624 (-AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@MMM@Z @ 0x18013C9E0 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@MMM@Z.c)
 */

float __fastcall CPositionMotion::AdvanceInertiaToTime(
        CPositionMotion *this,
        struct CExpressionValueStack *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  struct CExpressionValueStack *v9; // rdx
  CMotion *v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm5_4
  float result; // xmm0_4

  *((float *)this + 28) = a6;
  *((float *)this + 29) = a7;
  *((float *)this + 30) = a8;
  CPositionMotion::AdvanceDeltaDueToScale(this);
  result = CMotion::AdvanceInertiaToTime(v10, v9, v12, a5, v11);
  *((_DWORD *)this + 35) = *((_DWORD *)this + 28);
  *((float *)this + 34) = result;
  return result;
}
