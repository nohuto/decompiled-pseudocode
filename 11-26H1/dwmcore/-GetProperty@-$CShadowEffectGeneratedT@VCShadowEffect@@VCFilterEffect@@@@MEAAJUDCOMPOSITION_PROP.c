/*
 * XREFs of ?GetProperty@?$CShadowEffectGeneratedT@VCShadowEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248590
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CShadowEffectGeneratedT<CShadowEffect,CFilterEffect>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 result; // rax
  int v9; // xmm6_4

  v4 = a2 - 10;
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
          if ( v7 != 1 )
            return 2147942487LL;
          v9 = a1[92];
        }
        else
        {
          v9 = a1[91];
        }
      }
      else
      {
        v9 = a1[90];
      }
    }
    else
    {
      v9 = a1[89];
    }
  }
  else
  {
    v9 = a1[88];
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v9;
  return result;
}
