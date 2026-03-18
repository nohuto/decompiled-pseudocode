/*
 * XREFs of ?GetProperty@?$CArithmeticCompositeEffectGeneratedT@VCArithmeticCompositeEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247A80
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CArithmeticCompositeEffectGeneratedT<CArithmeticCompositeEffect,CFilterEffect>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 result; // rax
  int v8; // xmm6_4

  v4 = a2 - 10;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 2147942487LL;
        v8 = a1[91];
      }
      else
      {
        v8 = a1[90];
      }
    }
    else
    {
      v8 = a1[89];
    }
  }
  else
  {
    v8 = a1[88];
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v8;
  return result;
}
