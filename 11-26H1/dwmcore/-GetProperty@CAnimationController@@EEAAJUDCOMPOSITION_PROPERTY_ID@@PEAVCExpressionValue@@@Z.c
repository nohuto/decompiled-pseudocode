/*
 * XREFs of ?GetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802699D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18026997C (-GetProperty@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 */

__int64 __fastcall CAnimationController::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  __int64 result; // rax
  int v5; // xmm6_4

  if ( a2 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 80);
  }
  else
  {
    if ( a2 != 2 )
      return CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::GetProperty(a1, a2, a3);
    v5 = *(_DWORD *)(a1 + 84);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v5;
  return result;
}
