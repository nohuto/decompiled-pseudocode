/*
 * XREFs of ?GetTransform@CSwapChainRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802ADA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalcImageTransform@CSwapChainRealization@@IEBA_NPEAVCMILMatrix@@@Z @ 0x1802ACA5C (-CalcImageTransform@CSwapChainRealization@@IEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcRotationTransform@CSwapChainRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x1802ACAEC (-CalcRotationTransform@CSwapChainRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcSourceRect@CSwapChainRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802ACB70 (-CalcSourceRect@CSwapChainRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Re.c)
 */

char __fastcall CSwapChainRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  CSwapChainRealization *v3; // rbp
  char result; // al
  int *v7; // rsi
  float v8; // xmm2_4
  float v9; // xmm1_4
  _BYTE v10[64]; // [rsp+20h] [rbp-68h] BYREF
  int v11; // [rsp+60h] [rbp-28h]
  struct D2D_SIZE_U v12; // [rsp+90h] [rbp+8h] BYREF

  v3 = (CSwapChainRealization *)(a1 - 8);
  if ( *(_QWORD *)(a1 - 8 + 264) )
  {
    v7 = CSwapChainRealization::CalcSourceRect(a1 - 8);
    v8 = (float)*v7;
    v9 = (float)v7[1];
    *(_QWORD *)a2 = 1065353216LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 20) = 1065353216LL;
    *(_QWORD *)(a2 + 28) = 0LL;
    *(_DWORD *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 40) = 1065353216LL;
    *(_DWORD *)(a2 + 48) = LODWORD(v8) ^ _xmm;
    *(_QWORD *)(a2 + 52) = LODWORD(v9) ^ (unsigned int)_xmm;
    *(_DWORD *)(a2 + 60) = 1065353216;
    *(_BYTE *)(a2 + 65) &= 0xE9u;
    *(_BYTE *)(a2 + 65) |= 0x29u;
    *(_BYTE *)(a2 + 64) = -88;
    v12.width = v7[2] - *v7;
    v12.height = v7[3] - v7[1];
    v11 = 0;
    if ( CSwapChainRealization::CalcRotationTransform(v3, &v12, (struct CMILMatrix *)v10) )
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v10);
    if ( CSwapChainRealization::CalcImageTransform(v3, (struct CMILMatrix *)v10) )
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v10);
    if ( a3 )
    {
      *a3 = (float)*v7;
      a3[1] = (float)v7[1];
      a3[2] = (float)v7[2];
      a3[3] = (float)v7[3];
    }
    return CMILMatrix::IsIdentity<0>(a2) ^ 1;
  }
  else
  {
    if ( a3 )
    {
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
    result = 0;
    *(_QWORD *)a2 = 1065353216LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 20) = 1065353216LL;
    *(_QWORD *)(a2 + 28) = 0LL;
    *(_DWORD *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 40) = 1065353216LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 60) = 1065353216;
    *(_BYTE *)(a2 + 65) &= 0xE9u;
    *(_BYTE *)(a2 + 65) |= 0x29u;
    *(_BYTE *)(a2 + 64) = -86;
  }
  return result;
}
