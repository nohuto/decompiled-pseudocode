/*
 * XREFs of ?GetProperty@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180284CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  __int64 result; // rax
  char v5; // bl

  if ( a2 != 9 )
    return 2147942487LL;
  v5 = *(_BYTE *)(a1 + 168);
  CExpressionValue::DestroyCurrent(a3);
  result = 0LL;
  *((_DWORD *)a3 + 16) = 17;
  *(_BYTE *)a3 = v5;
  return result;
}
