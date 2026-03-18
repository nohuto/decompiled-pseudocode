/*
 * XREFs of ??DPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x140196424
 * Callers:
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x14019502C (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140195BE8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1401963B4 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Prediction::operator*(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // r11d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  __int64 v14; // rax

  v5 = *a3;
  v3 = *a2;
  v6 = (*a3 ^ *a2) >> 63;
  v7 = -*a2;
  if ( v7 < 0 )
    v7 = v3;
  v8 = -v5;
  if ( v5 > 0 )
    v8 = *a3;
  v9 = v7 * v8;
  v10 = HIDWORD(v7) * (unsigned int)v8 + (((unsigned int)v7 * (unsigned __int64)(unsigned int)v8) >> 32);
  v11 = HIDWORD(v8) * (unsigned int)v7 + (unsigned int)v10;
  v12 = HIDWORD(v10) << 32;
  v13 = (HIDWORD(v7) * HIDWORD(v8)) << 32;
  v14 = (v6 ^ ((unsigned int)v11 | (v13 + v12 + (HIDWORD(v11) << 32)))) - v6;
  if ( v9 )
    v14 = v6 ^ ((unsigned int)v11 | (v13 + v12 + (HIDWORD(v11) << 32)));
  *a1 = v14;
  return a1;
}
