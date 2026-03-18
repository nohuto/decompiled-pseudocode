/*
 * XREFs of ?GetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248330
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::GetProperty(
        _DWORD *a1,
        int a2,
        CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 result; // rax
  int v10; // xmm6_4

  v4 = a2 - 1;
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
            if ( v8 != 1 )
              return 2147942487LL;
            v10 = a1[45];
          }
          else
          {
            v10 = a1[44];
          }
        }
        else
        {
          v10 = a1[43];
        }
      }
      else
      {
        v10 = a1[42];
      }
    }
    else
    {
      v10 = a1[41];
    }
  }
  else
  {
    v10 = a1[40];
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 18;
  result = 0LL;
  *(_DWORD *)a3 = v10;
  return result;
}
