/*
 * XREFs of ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@@Z @ 0x18028E900
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x1801A6DE8 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x1801D8C14 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 */

float __fastcall CExpressionForce::Update(CExpressionForce *this, float a2, struct CExpressionValueStack *a3)
{
  int v3; // eax
  float v6; // xmm2_4
  float v7; // xmm1_4
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  *((_QWORD *)this + 12) = a3;
  if ( !*((_BYTE *)this + 104) )
  {
    v6 = *((float *)this + 28);
    LOBYTE(v3) = *((_DWORD *)this + 22) == 2;
    v7 = *((float *)this + 27);
    v9[0] = v3;
    v9[1] = 0;
    v9[2] = 0;
    CScalarForceEvaluator::Reset(
      (CExpressionForce *)((char *)this + 8),
      v7,
      v6,
      (CExpressionForce *)((char *)this - 16),
      (const struct ForceThreshold *)v9);
    *((_BYTE *)this + 104) = 1;
  }
  CScalarForceEvaluator::AdvanceToTime(
    (CExpressionForce *)((char *)this + 8),
    a2,
    (CExpressionForce *)((char *)this - 16));
  return *((float *)this + 6);
}
