/*
 * XREFs of ?GetProperty@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::GetProperty(
        _DWORD *a1,
        unsigned int a2,
        CExpressionValue *a3)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // xmm6_4
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  __int64 result; // rax

  if ( a2 > 0x14 )
  {
    v12 = a2 - 21;
    if ( !v12 )
    {
      v8 = a1[99];
      goto LABEL_44;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v8 = a1[100];
      goto LABEL_44;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v8 = a1[101];
      goto LABEL_44;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v8 = a1[102];
      goto LABEL_44;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v8 = a1[103];
      goto LABEL_44;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v8 = a1[104];
      goto LABEL_44;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v8 = a1[105];
      goto LABEL_44;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v8 = a1[106];
      goto LABEL_44;
    }
    if ( v19 == 1 )
    {
      v8 = a1[107];
      goto LABEL_44;
    }
    return 2147942487LL;
  }
  if ( a2 == 20 )
  {
    v8 = a1[98];
    goto LABEL_44;
  }
  if ( a2 > 0xF )
  {
    v9 = a2 - 16;
    if ( !v9 )
    {
      v8 = a1[94];
      goto LABEL_44;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v8 = a1[95];
      goto LABEL_44;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v8 = a1[96];
      goto LABEL_44;
    }
    if ( v11 == 1 )
    {
      v8 = a1[97];
      goto LABEL_44;
    }
    return 2147942487LL;
  }
  if ( a2 == 15 )
  {
    v8 = a1[93];
    goto LABEL_44;
  }
  v4 = a2 - 10;
  if ( !v4 )
  {
    v8 = a1[88];
    goto LABEL_44;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = a1[89];
    goto LABEL_44;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = a1[90];
    goto LABEL_44;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = a1[91];
    goto LABEL_44;
  }
  if ( v7 != 1 )
    return 2147942487LL;
  v8 = a1[92];
LABEL_44:
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v8;
  return result;
}
