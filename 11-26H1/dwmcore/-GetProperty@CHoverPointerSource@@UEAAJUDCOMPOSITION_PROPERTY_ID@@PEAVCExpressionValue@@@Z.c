/*
 * XREFs of ?GetProperty@CHoverPointerSource@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18025FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CHoverPointerSource::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v6; // xmm6_4
  int v7; // xmm7_4

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  if ( a2 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 80);
    v7 = *(_DWORD *)(a1 + 84);
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v6;
    *((_DWORD *)a3 + 1) = v7;
    *((_DWORD *)a3 + 16) = 35;
  }
  return v3;
}
