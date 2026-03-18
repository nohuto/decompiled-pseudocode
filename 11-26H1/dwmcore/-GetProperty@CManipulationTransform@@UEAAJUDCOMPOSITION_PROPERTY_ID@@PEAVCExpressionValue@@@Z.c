/*
 * XREFs of ?GetProperty@CManipulationTransform@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801C2140
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18010A3A4 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::GetProperty(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  _OWORD *v10; // rbp
  int v12; // eax

  v3 = 0;
  if ( a3 )
  {
    v6 = a2 - 1;
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
            if ( v9 == 1 )
            {
              v10 = (_OWORD *)(a1 + 208);
              if ( *(_BYTE *)(a1 + 272) )
              {
                CManipulationTransform::CalculateMatrixFromDelta(
                  (const struct D2DVector3 *)(a1 + 160),
                  (const struct D2DVector3 *)(a1 + 184),
                  (const struct D2DVector3 *)(a1 + 196),
                  (struct D2DMatrix *)(a1 + 208));
                *(_BYTE *)(a1 + 272) = 0;
              }
              CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
              *(_DWORD *)(a3 + 64) = 265;
              *(_OWORD *)a3 = *v10;
              *(_OWORD *)(a3 + 16) = v10[1];
              *(_OWORD *)(a3 + 32) = v10[2];
              *(_OWORD *)(a3 + 48) = v10[3];
            }
            else
            {
              return (unsigned int)-2147024809;
            }
            return v3;
          }
          CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
          *(_DWORD *)(a3 + 64) = 52;
          *(_QWORD *)a3 = *(_QWORD *)(a1 + 196);
          v12 = *(_DWORD *)(a1 + 204);
        }
        else
        {
          CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
          *(_DWORD *)(a3 + 64) = 52;
          *(_QWORD *)a3 = *(_QWORD *)(a1 + 184);
          v12 = *(_DWORD *)(a1 + 192);
        }
      }
      else
      {
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *(_DWORD *)(a3 + 64) = 52;
        *(_QWORD *)a3 = *(_QWORD *)(a1 + 172);
        v12 = *(_DWORD *)(a1 + 180);
      }
      *(_DWORD *)(a3 + 8) = v12;
    }
    else
    {
      CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
      *(_DWORD *)(a3 + 64) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 160);
      *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 168);
    }
    return v3;
  }
  return 2147942487LL;
}
