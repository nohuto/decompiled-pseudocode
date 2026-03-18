/*
 * XREFs of ?GetProperty@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027A250
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::GetProperty(
        __int64 a1,
        unsigned int a2,
        CExpressionValue *a3)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  char v9; // bl
  int v10; // xmm6_4
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx

  if ( a2 > 0x10 )
  {
    v11 = a2 - 17;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v9 = *(_BYTE *)(a1 + 384);
        goto LABEL_13;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            v9 = *(_BYTE *)(a1 + 396);
            goto LABEL_13;
          }
          if ( v15 == 1 )
          {
            v9 = *(_BYTE *)(a1 + 397);
            goto LABEL_13;
          }
          return 2147942487LL;
        }
        v10 = *(_DWORD *)(a1 + 392);
      }
      else
      {
        v10 = *(_DWORD *)(a1 + 388);
      }
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 380);
    }
LABEL_30:
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v10;
    *((_DWORD *)a3 + 16) = 18;
    return 0LL;
  }
  if ( a2 == 16 )
  {
    v10 = *(_DWORD *)(a1 + 376);
    goto LABEL_30;
  }
  v4 = a2 - 10;
  if ( !v4 )
  {
    v10 = *(_DWORD *)(a1 + 352);
    goto LABEL_30;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v10 = *(_DWORD *)(a1 + 356);
    goto LABEL_30;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *(_BYTE *)(a1 + 360);
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *(_DWORD *)(a1 + 364);
    goto LABEL_30;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *(_DWORD *)(a1 + 368);
    goto LABEL_30;
  }
  if ( v8 != 1 )
    return 2147942487LL;
  v9 = *(_BYTE *)(a1 + 372);
LABEL_13:
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 17;
  *(_BYTE *)a3 = v9;
  return 0LL;
}
