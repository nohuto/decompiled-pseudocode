/*
 * XREFs of ?GetProperty@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802653E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1800D3710 (-GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  __int64 result; // rax
  char v5; // di

  if ( a2 == 53 )
  {
    v5 = *(_BYTE *)(a1 + 688);
  }
  else
  {
    if ( a2 != 54 )
      return CVisual::GetProperty(a1, a2, a3);
    v5 = *(_BYTE *)(a1 + 689);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 17;
  result = 0LL;
  *(_BYTE *)a3 = v5;
  return result;
}
