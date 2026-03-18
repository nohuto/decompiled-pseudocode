/*
 * XREFs of ?GetProperty@?$CAffineTransform2DEffectGeneratedT@VCAffineTransform2DEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180247950
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CAffineTransform2DEffectGeneratedT<CAffineTransform2DEffect,CFilterEffect>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 result; // rax
  int v11; // xmm6_4

  v4 = a2 - 12;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return 2147942487LL;
              v11 = a1[96];
            }
            else
            {
              v11 = a1[95];
            }
          }
          else
          {
            v11 = a1[94];
          }
        }
        else
        {
          v11 = a1[93];
        }
      }
      else
      {
        v11 = a1[92];
      }
    }
    else
    {
      v11 = a1[91];
    }
  }
  else
  {
    v11 = a1[90];
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v11;
  return result;
}
