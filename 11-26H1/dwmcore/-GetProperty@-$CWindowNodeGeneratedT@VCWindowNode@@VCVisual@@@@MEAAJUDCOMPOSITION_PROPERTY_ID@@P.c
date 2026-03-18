/*
 * XREFs of ?GetProperty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248880
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1800D3710 (-GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::GetProperty(_BYTE *a1, int a2, CExpressionValue *a3)
{
  __int64 result; // rax
  char v5; // di

  switch ( a2 )
  {
    case ':':
      v5 = a1[744];
      break;
    case ';':
      v5 = a1[745];
      break;
    case '<':
      v5 = a1[746];
      break;
    case '=':
      v5 = a1[747];
      break;
    default:
      return CVisual::GetProperty((__int64)a1, a2, a3);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 17;
  result = 0LL;
  *(_BYTE *)a3 = v5;
  return result;
}
