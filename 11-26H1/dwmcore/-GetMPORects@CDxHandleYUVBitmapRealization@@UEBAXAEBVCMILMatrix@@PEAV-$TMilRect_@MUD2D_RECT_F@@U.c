/*
 * XREFs of ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801AF450
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005EFCC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetMPORects(__int64 a1, __int64 a2, float *a3, struct D2D_RECT_F *a4)
{
  float v7; // xmm1_4
  float v9; // xmm1_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  int v14; // eax
  FLOAT v15; // xmm0_4
  int v16; // eax
  FLOAT v17; // xmm1_4
  int v18; // eax
  FLOAT v19; // xmm0_4
  int v20; // eax
  __m128i v21; // [rsp+28h] [rbp-19h] BYREF
  __int64 v22; // [rsp+38h] [rbp-9h] BYREF
  __int64 v23; // [rsp+40h] [rbp-1h]
  _BYTE v24[64]; // [rsp+48h] [rbp+7h] BYREF
  int v25; // [rsp+88h] [rbp+47h]

  if ( (*(_DWORD *)(a1 - 88) & 0x4000) != 0 )
  {
    v25 = 0;
    v22 = 0LL;
    v23 = 0LL;
    v21 = 0uLL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CBitmapRealization *)(a1 - 328),
      (struct CMILMatrix *)v24,
      (__int64)&v22,
      &v21);
    v9 = (float)v21.m128i_i32[1];
    v10 = v21.m128i_i32[2];
    *a3 = (float)v21.m128i_i32[0];
    v11 = (float)v10;
    v12 = v21.m128i_i32[3];
    a3[1] = v9;
    v13 = (float)v12;
    v14 = v22;
    a3[2] = v11;
    v15 = (float)v14;
    v16 = HIDWORD(v22);
    a3[3] = v13;
    v17 = (float)v16;
    v18 = v23;
    a4->left = v15;
    v19 = (float)v18;
    v20 = HIDWORD(v23);
    a4->top = v17;
    v7 = (float)v20;
    a4->right = v19;
  }
  else
  {
    *a3 = (float)*(int *)(a1 - 328 + 156);
    a3[1] = (float)*(int *)(a1 - 168);
    a3[2] = (float)*(int *)(a1 - 164);
    a3[3] = (float)*(int *)(a1 - 160);
    a4->left = (float)*(int *)(a1 - 104);
    a4->top = (float)*(int *)(a1 - 100);
    a4->right = (float)*(int *)(a1 - 96);
    v7 = (float)*(int *)(a1 - 92);
  }
  a4->bottom = v7;
  return CMILMatrix::Transform2DBoundsHelper<0>(a2, a4, &a4->left);
}
