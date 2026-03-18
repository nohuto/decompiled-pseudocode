/*
 * XREFs of ?GetProperty@?$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18026CD90
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CDelegatedInkCanvasGeneratedT<CDelegatedInkCanvas,CSuperWetSource>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  __int64 result; // rax

  if ( a2 )
    return 2147942487LL;
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 70;
  result = 0LL;
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 144);
  return result;
}
