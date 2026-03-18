/*
 * XREFs of ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18009DECC
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall D2DMatrixHelper::TransformRectConservative(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float bottom; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  int v11; // xmm0_4
  float *v12; // rcx
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  int v21; // [rsp+0h] [rbp-48h]
  _DWORD v22[2]; // [rsp+4h] [rbp-44h] BYREF
  int v23; // [rsp+Ch] [rbp-3Ch]
  float v24; // [rsp+10h] [rbp-38h]
  int v25; // [rsp+14h] [rbp-34h]
  __int64 v26; // [rsp+18h] [rbp-30h] BYREF

  v4 = *((float *)this + 1);
  v5 = *(float *)this;
  bottom = a2->bottom;
  v7 = (float)(a2->right * v4) + (float)(a2->left * *(float *)this);
  *(float *)v22 = v4;
  v8 = a2->top * v5;
  v9 = v7 + a2[1].left;
  v23 = *((_DWORD *)this + 3);
  v10 = (float)(bottom * v4) + v8;
  v24 = v5;
  v11 = *((_DWORD *)this + 2);
  v12 = (float *)v22;
  v21 = v11;
  v22[1] = v11;
  v13 = v9;
  v25 = v23;
  v14 = v10 + a2[1].top;
  v15 = v14;
  do
  {
    v16 = *(v12 - 1);
    v17 = *v12;
    v18 = *v12;
    v12 += 2;
    v19 = (float)((float)(v16 * a2->left) + (float)(v18 * a2->right)) + a2[1].left;
    v20 = (float)((float)(v17 * a2->bottom) + (float)(v16 * a2->top)) + a2[1].top;
    v9 = fminf(v9, v19);
    v13 = fmaxf(v13, v19);
    v14 = fminf(v14, v20);
    v15 = fmaxf(v15, v20);
  }
  while ( v12 - 1 != (float *)&v26 );
  a3->m11 = v9;
  a3->m12 = v14;
  a3->m21 = v13;
  a3->m22 = v15;
}
