/*
 * XREFs of ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x18024F228
 * Callers:
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18024F3E0 (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18024F4B4 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _hypot_0 @ 0x1802B9684 (_hypot_0.c)
 */

void __fastcall ClipPlaneIterator::CalculateClipPlanesFromLineSegments(
        ClipPlaneIterator *this,
        struct ClipPlaneIterator::LineSegment *a2,
        unsigned int a3,
        struct D2D_VECTOR_4F *a4)
{
  __int64 v7; // rbx
  float *v8; // rdi
  signed __int64 v9; // r14
  __int64 v10; // r12
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm1_4
  float v24[12]; // [rsp+20h] [rbp-78h]

  v7 = a3;
  if ( !a3 )
    goto LABEL_10;
  v8 = (float *)((char *)a2 + 12);
  v9 = (char *)a4 - (char *)a2;
  v10 = a3;
  do
  {
    v11 = *(v8 - 1);
    v12 = *v8;
    v13 = v11 - *(v8 - 3);
    v14 = *v8 - *(v8 - 2);
    if ( *(_QWORD *)(v8 - 1) >= *(_QWORD *)(v8 - 3) )
    {
      v11 = *(v8 - 3);
      v12 = *(v8 - 2);
    }
    v15 = hypot_0(v13, v14);
    v16 = v13 / v15;
    v17 = v14 / v15;
    v18 = v16 * *((float *)this + 4);
    v19 = (float)(v17 * v12) + (float)(v16 * v11);
    v20 = v11 - (float)(v19 * v16);
    v21 = v12 - (float)(v19 * v17);
    if ( (float)((float)(v21 * v18) + (float)(v20 * (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * *((float *)this + 4)))) <= 0.0 )
      v22 = FLOAT_1_0;
    else
      v22 = FLOAT_N1_0;
    v24[0] = COERCE_FLOAT(LODWORD(v17) ^ _xmm) * *((float *)this + 4);
    *(_QWORD *)&v24[1] = LODWORD(v18);
    v23 = hypot_0(v20, v21);
    v24[3] = v23 * v22;
    *(_OWORD *)((char *)v8 + v9 - 12) = *(_OWORD *)v24;
    v8 += 4;
    --v10;
  }
  while ( v10 );
  if ( a3 < 4 )
LABEL_10:
    memset_0(&a4[v7], 0, 16LL * (4 - a3));
}
