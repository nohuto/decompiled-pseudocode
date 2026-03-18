/*
 * XREFs of ?GetMPORects@CSwapChainRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1802AD860
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CalcSourceRect@CSwapChainRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802ACB70 (-CalcSourceRect@CSwapChainRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Re.c)
 */

char __fastcall CSwapChainRealization::GetMPORects(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int *v7; // rax
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  struct D2D_RECT_F v12; // [rsp+20h] [rbp-18h] BYREF

  v7 = CSwapChainRealization::CalcSourceRect(a1);
  *(_QWORD *)&v12.left = 0LL;
  v8 = (float)*v7;
  *a3 = v8;
  v9 = (float)v7[1];
  a3[1] = v9;
  v10 = (float)v7[2];
  a3[2] = v10;
  LODWORD(v7) = v7[3];
  v12.right = v10 - v8;
  a3[3] = (float)(int)v7;
  v12.bottom = (float)(int)v7 - v9;
  return CMILMatrix::Transform2DBoundsHelper<0>(a2, &v12, a4);
}
