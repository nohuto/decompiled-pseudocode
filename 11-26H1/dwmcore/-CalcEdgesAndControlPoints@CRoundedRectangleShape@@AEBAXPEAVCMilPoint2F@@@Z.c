/*
 * XREFs of ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x180052750
 * Callers:
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800511A0 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180051CD0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(CRoundedRectangleShape *this, struct CMilPoint2F *a2)
{
  __int64 v2; // rax
  float v4; // xmm4_4
  float v5; // xmm8_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  __int64 v8; // rax
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  __int64 v12; // rax
  char v13; // r8
  float *v14; // rax
  float *v15; // rcx
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  char v22; // r10
  __int64 v23; // rax
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  __int64 v27; // rax
  char v28; // r8
  float *v29; // rax
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm1_4

  v2 = *((_QWORD *)this + 2);
  v4 = *(float *)(v2 + 20);
  v5 = *(float *)(v2 + 16);
  if ( *(_BYTE *)(v2 + 68) )
  {
    v6 = v5 + *(float *)(v2 + 24);
    v7 = v4 + *(float *)(v2 + 28);
  }
  else
  {
    v6 = *(float *)(v2 + 24);
    v7 = *(float *)(v2 + 28);
  }
  *(float *)a2 = v5;
  *((float *)a2 + 1) = v4;
  *((float *)a2 + 6) = v6;
  *((float *)a2 + 7) = v4;
  *((float *)a2 + 16) = v5;
  *((float *)a2 + 17) = v7;
  *((float *)a2 + 22) = v6;
  *((float *)a2 + 23) = v7;
  v8 = *((_QWORD *)this + 2);
  if ( *(float *)(v8 + 32) > 0.0 && *(float *)(v8 + 36) > 0.0 )
  {
    *((float *)a2 + 8) = v5;
    v9 = v4 + *(float *)(v8 + 36);
    *((float *)a2 + 9) = v9;
    v10 = v5 + *(float *)(v8 + 32);
    *((float *)a2 + 3) = v4;
    *((float *)a2 + 24) = v5;
    *((float *)a2 + 2) = v10;
    *((float *)a2 + 25) = v9 - (float)(*(float *)(v8 + 36) * 0.55228478);
    v11 = *(float *)(v8 + 32) * 0.55228478;
    *((float *)a2 + 27) = v4;
    *((float *)a2 + 26) = v10 - v11;
  }
  v12 = *((_QWORD *)this + 2);
  v13 = *(_BYTE *)(v12 + 68);
  v14 = (float *)(v12 + 32);
  v15 = v14;
  if ( !v13 )
    v15 = v14 + 2;
  if ( *v15 > 0.0 && v15[1] > 0.0 )
  {
    if ( !v13 )
      v14 += 2;
    v16 = v6 - *v14;
    *((float *)a2 + 5) = v4;
    *((float *)a2 + 10) = v6;
    *((float *)a2 + 4) = v16;
    v17 = v4 + v14[1];
    *((float *)a2 + 11) = v17;
    v18 = *v14 * 0.55228478;
    *((float *)a2 + 29) = v4;
    *((float *)a2 + 30) = v6;
    *((float *)a2 + 28) = v18 + v16;
    *((float *)a2 + 31) = v17 - (float)(v14[1] * 0.55228478);
  }
  v19 = *((_QWORD *)this + 2);
  v20 = 32LL;
  v21 = 32LL;
  v22 = *(_BYTE *)(v19 + 68);
  if ( !v22 )
    v21 = 56LL;
  if ( *(float *)(v21 + v19) > 0.0 && *(float *)(v21 + v19 + 4) > 0.0 )
  {
    v23 = 32LL;
    if ( !v22 )
      v23 = 56LL;
    v24 = v5 + *(float *)(v23 + v19);
    *((float *)a2 + 19) = v7;
    *((float *)a2 + 12) = v5;
    *((float *)a2 + 18) = v24;
    v25 = v7 - *(float *)(v23 + v19 + 4);
    *((float *)a2 + 13) = v25;
    v26 = *(float *)(v23 + v19) * 0.55228478;
    *((float *)a2 + 37) = v7;
    *((float *)a2 + 32) = v5;
    *((float *)a2 + 36) = v24 - v26;
    *((float *)a2 + 33) = (float)(*(float *)(v23 + v19 + 4) * 0.55228478) + v25;
  }
  v27 = *((_QWORD *)this + 2);
  v28 = *(_BYTE *)(v27 + 68);
  if ( !v28 )
    v20 = 48LL;
  if ( *(float *)(v20 + v27) > 0.0 && *(float *)(v20 + v27 + 4) > 0.0 )
  {
    if ( v28 )
      v29 = (float *)(v27 + 32);
    else
      v29 = (float *)(v27 + 48);
    *((float *)a2 + 14) = v6;
    v30 = v7 - v29[1];
    *((float *)a2 + 15) = v30;
    v31 = v6 - *v29;
    *((float *)a2 + 21) = v7;
    *((float *)a2 + 34) = v6;
    *((float *)a2 + 20) = v31;
    *((float *)a2 + 35) = (float)(v29[1] * 0.55228478) + v30;
    v32 = *v29;
    *((float *)a2 + 39) = v7;
    *((float *)a2 + 38) = (float)(v32 * 0.55228478) + v31;
  }
}
