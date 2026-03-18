/*
 * XREFs of ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18010B9FC
 * Callers:
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18010CEB8 (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 *     ?PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z @ 0x18026F570 (-PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpression::AdjustPropertyTypeWithMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax

  v2 = *(_QWORD *)(a1 + 192);
  v3 = 0;
  if ( !v2 || !*(_BYTE *)(v2 + 4) )
    return a2;
  v5 = *(unsigned __int8 *)(v2 + 4);
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
            v10 = v9 - 2;
            if ( v10 )
            {
              if ( v10 == 10 )
                return 265;
            }
            else
            {
              return 104;
            }
          }
          else
          {
            v11 = 71;
            if ( a2 != 71 )
              return 69;
            return v11;
          }
        }
        else
        {
          return 52;
        }
      }
      else
      {
        return 35;
      }
    }
    else
    {
      return 18;
    }
  }
  else
  {
    return a2;
  }
  return v3;
}
