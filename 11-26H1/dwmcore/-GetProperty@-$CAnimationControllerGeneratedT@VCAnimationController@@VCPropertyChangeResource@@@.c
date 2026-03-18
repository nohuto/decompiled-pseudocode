/*
 * XREFs of ?GetProperty@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18026997C
 * Callers:
 *     ?GetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802699D0 (-GetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v4; // edx
  __int64 result; // rax
  int v6; // xmm6_4

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return 2147942487LL;
    v6 = *(_DWORD *)(a1 + 84);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 80);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v6;
  return result;
}
