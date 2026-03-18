/*
 * XREFs of ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18013B30C
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@MPEAM@Z @ 0x180139DE0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 * Callees:
 *     ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x18013B624 (-AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ.c)
 */

float __fastcall CPositionMotion::CalculateInContactValue(
        CPositionMotion *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  __int64 v7; // rcx
  float v8; // xmm0_4
  float result; // xmm0_4

  *((float *)this + 13) = a5;
  *((float *)this + 22) = a2;
  *((float *)this + 30) = a7;
  *((float *)this + 15) = a3;
  *((float *)this + 28) = a6;
  CPositionMotion::AdvanceDeltaDueToScale(this);
  v8 = *(float *)(v7 + 132) + *(float *)(v7 + 136);
  *(_DWORD *)(v7 + 140) = *(_DWORD *)(v7 + 112);
  result = v8 + a4;
  *(float *)(v7 + 136) = result;
  return result;
}
