/*
 * XREFs of ?GetProperty@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247B00
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  char v8; // bl
  int v9; // xmm6_4

  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = *(_BYTE *)(a1 + 72);
    goto LABEL_10;
  }
  v5 = v4 - 3;
  if ( !v5 )
  {
    v8 = *(_BYTE *)(a1 + 84);
LABEL_10:
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 17;
    *(_BYTE *)a3 = v8;
    return 0LL;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 4 )
      return 2147942487LL;
    v8 = *(_BYTE *)(a1 + 100);
    goto LABEL_10;
  }
  v9 = *(_DWORD *)(a1 + 88);
  CExpressionValue::DestroyCurrent(a3);
  *(_DWORD *)a3 = v9;
  *((_DWORD *)a3 + 16) = 18;
  return 0LL;
}
