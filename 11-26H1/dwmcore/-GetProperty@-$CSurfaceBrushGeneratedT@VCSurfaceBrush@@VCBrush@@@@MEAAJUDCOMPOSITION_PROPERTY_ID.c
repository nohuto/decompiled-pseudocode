/*
 * XREFs of ?GetProperty@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180283A40
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  char v8; // bl
  int v9; // xmm6_4

  if ( !a2 )
  {
    v8 = *(_BYTE *)(a1 + 104);
LABEL_13:
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 17;
    *(_BYTE *)a3 = v8;
    return 0LL;
  }
  v4 = a2 - 4;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 4;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 2147942487LL;
        v8 = *(_BYTE *)(a1 + 141);
      }
      else
      {
        v8 = *(_BYTE *)(a1 + 140);
      }
      goto LABEL_13;
    }
    v9 = *(_DWORD *)(a1 + 128);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 124);
  }
  CExpressionValue::DestroyCurrent(a3);
  *(_DWORD *)a3 = v9;
  *((_DWORD *)a3 + 16) = 18;
  return 0LL;
}
