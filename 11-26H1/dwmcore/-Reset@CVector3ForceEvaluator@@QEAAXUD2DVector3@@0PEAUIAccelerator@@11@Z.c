/*
 * XREFs of ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x18028EB3C
 * Callers:
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@@Z @ 0x1801A6C68 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x1801D8C14 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVector3ForceEvaluator::Reset(
        _BYTE *a1,
        float *a2,
        float *a3,
        struct IAccelerator *a4,
        struct IAccelerator *a5,
        struct IAccelerator *a6)
{
  float v10; // xmm6_4
  float v11; // xmm1_4
  __int32 v12; // xmm7_4
  float v13; // xmm2_4
  int v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  char result; // al
  int v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+34h] [rbp-2Ch]
  int v24; // [rsp+38h] [rbp-28h]

  v10 = 0.0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 40LL))(a4) )
    v11 = *a2 - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 24LL))(a4);
  else
    v11 = 0.0;
  COERCE_FLOAT(v12 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v13 = *a3;
  v14 = *(_DWORD *)a3 & v12;
  v23 = LODWORD(v11) & v12;
  v15 = *a2;
  v24 = v14;
  v22 = 2;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)a1, v15, v13, a4, (const struct ForceThreshold *)&v22);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 40LL))(a5) )
    v16 = a2[1] - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a5 + 24LL))(a5);
  else
    v16 = 0.0;
  v17 = a3[1];
  v22 = 2;
  v23 = LODWORD(v16) & v12;
  v18 = a2[1];
  v24 = LODWORD(v17) & v12;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 68), v18, v17, a5, (const struct ForceThreshold *)&v22);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 40LL))(a6) )
    v10 = a2[2] - (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a6 + 24LL))(a6);
  v19 = a3[2];
  v20 = a2[2];
  v24 = LODWORD(v19) & v12;
  v23 = LODWORD(v10) & v12;
  v22 = 2;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 136), v20, v19, a6, (const struct ForceThreshold *)&v22);
  result = -3;
  a1[64] &= ~2u;
  a1[132] &= ~2u;
  a1[200] &= ~2u;
  return result;
}
