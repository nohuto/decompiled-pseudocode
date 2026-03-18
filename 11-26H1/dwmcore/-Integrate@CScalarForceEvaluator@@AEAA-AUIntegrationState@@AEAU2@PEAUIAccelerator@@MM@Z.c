/*
 * XREFs of ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x1801A7090
 * Callers:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x1801A6DE8 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 * Callees:
 *     ?Evaluate@CScalarForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@PEAUIAccelerator@@M@Z @ 0x1801BD614 (-Evaluate@CScalarForceEvaluator@@AEAA-AUDerivative@@AEAUIntegrationState@@PEAUIAccelerator@@M@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScalarForceEvaluator::Integrate(__int64 a1, __int64 a2, float *a3, __int64 a4, int a5, float a6)
{
  __int64 v10; // rcx
  float v11; // xmm10_4
  double v12; // xmm0_8
  float v13; // xmm12_4
  double (__fastcall *v14)(__int64, float *); // rax
  float v15; // xmm9_4
  double v16; // xmm0_8
  float v17; // xmm8_4
  double (__fastcall *v18)(__int64, float *); // rax
  float v19; // xmm1_4
  float v20; // xmm11_4
  double v21; // xmm0_8
  float (__fastcall *v22)(__int64, float *); // rax
  float v23; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  __int64 result; // rax
  float v28; // xmm1_4
  int v29; // [rsp+38h] [rbp-99h] BYREF
  float v30; // [rsp+3Ch] [rbp-95h]
  float v31; // [rsp+40h] [rbp-91h] BYREF
  float v32; // [rsp+44h] [rbp-8Dh]
  float v33; // [rsp+48h] [rbp-89h]
  int v34; // [rsp+4Ch] [rbp-85h]
  int v35; // [rsp+50h] [rbp-81h]

  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a4 + 48LL))(a4) && (*(_BYTE *)(a1 + 64) & 4) != 0 )
  {
    CScalarForceEvaluator::Evaluate(v10, &v29, a3, a4, a5);
    v28 = (float)(a6 * v30) + a3[2];
    *(float *)a2 = v30;
    *(float *)(a2 + 8) = v28;
    *(float *)(a2 + 4) = (float)(v28 * a6) + a3[1];
  }
  else
  {
    v11 = a3[2];
    v12 = (*(double (__fastcall **)(__int64, float *))(*(_QWORD *)a4 + 16LL))(a4, a3);
    v13 = *(float *)&v12;
    v14 = *(double (__fastcall **)(__int64, float *))(*(_QWORD *)a4 + 16LL);
    v31 = *a3;
    v34 = *(_DWORD *)(a1 + 60);
    v15 = (float)((float)(a6 * 0.5) * *(float *)&v12) + a3[2];
    v32 = (float)((float)(a6 * 0.5) * v11) + a3[1];
    v35 = *(_DWORD *)(a1 + 56);
    v33 = v15;
    v16 = v14(a4, &v31);
    v17 = *(float *)&v16;
    v18 = *(double (__fastcall **)(__int64, float *))(*(_QWORD *)a4 + 16LL);
    v19 = (float)(v15 * (float)(a6 * 0.5)) + a3[1];
    v35 = *(_DWORD *)(a1 + 56);
    v20 = (float)((float)(a6 * 0.5) * *(float *)&v16) + a3[2];
    v32 = v19;
    v31 = *a3;
    v34 = *(_DWORD *)(a1 + 60);
    v33 = v20;
    v21 = v18(a4, &v31);
    v22 = *(float (__fastcall **)(__int64, float *))(*(_QWORD *)a4 + 16LL);
    v23 = *(float *)&v21;
    v24 = (float)(v20 * a6) + a3[1];
    v25 = (float)(*(float *)&v21 * a6) + a3[2];
    v35 = *(_DWORD *)(a1 + 56);
    v32 = v24;
    v31 = *a3;
    v34 = *(_DWORD *)(a1 + 60);
    v33 = v25;
    *(float *)&v21 = v22(a4, &v31);
    *(float *)(a2 + 4) = (float)((float)((float)((float)((float)((float)(v20 + v15) + (float)(v20 + v15)) + v11) + v25)
                                       * 0.16666667)
                               * a6)
                       + a3[1];
    v26 = (float)((float)((float)((float)((float)((float)(v23 + v17) + (float)(v23 + v17)) + v13) + *(float *)&v21)
                        * 0.16666667)
                * a6)
        + a3[2];
    *(_DWORD *)a2 = LODWORD(v21);
    *(float *)(a2 + 8) = v26;
  }
  result = a2;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 60);
  return result;
}
