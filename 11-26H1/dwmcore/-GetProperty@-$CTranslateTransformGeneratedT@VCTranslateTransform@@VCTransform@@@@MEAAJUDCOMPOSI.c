/*
 * XREFs of ?GetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248820
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::GetProperty(
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
    v6 = *(_DWORD *)(a1 + 164);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 160);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v6;
  return result;
}
