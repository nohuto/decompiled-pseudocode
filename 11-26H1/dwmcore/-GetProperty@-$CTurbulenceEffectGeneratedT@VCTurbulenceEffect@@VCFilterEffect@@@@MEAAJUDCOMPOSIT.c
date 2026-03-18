/*
 * XREFs of ?GetProperty@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180285BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CTurbulenceEffectGeneratedT<CTurbulenceEffect,CFilterEffect>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  int v5; // edx
  int v6; // edx
  __int64 result; // rax
  int v8; // xmm0_4
  int v9; // xmm1_4

  v5 = a2 - 10;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 2147942487LL;
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 35;
      v8 = a1[92];
      v9 = a1[93];
    }
    else
    {
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 35;
      v8 = a1[90];
      v9 = a1[91];
    }
  }
  else
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v8 = a1[88];
    v9 = a1[89];
  }
  *(_DWORD *)a3 = v8;
  result = 0LL;
  *((_DWORD *)a3 + 1) = v9;
  return result;
}
