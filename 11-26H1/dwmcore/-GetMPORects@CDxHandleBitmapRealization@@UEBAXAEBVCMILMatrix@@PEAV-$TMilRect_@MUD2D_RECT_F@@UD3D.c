/*
 * XREFs of ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005F680 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetMPORects(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  int *v7; // rax
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  float v13; // [rsp+28h] [rbp-10h]
  float v14; // [rsp+2Ch] [rbp-Ch]

  v7 = (int *)CBitmapRealization::CalcSourceRect(a1 - 328);
  v12 = 0LL;
  v8 = (float)*v7;
  *a3 = v8;
  v9 = (float)v7[1];
  a3[1] = v9;
  v10 = (float)v7[2];
  a3[2] = v10;
  LODWORD(v7) = v7[3];
  v13 = v10 - v8;
  a3[3] = (float)(int)v7;
  v14 = (float)(int)v7 - v9;
  return CMILMatrix::Transform2DBoundsHelper<0>(a2, &v12, a4);
}
