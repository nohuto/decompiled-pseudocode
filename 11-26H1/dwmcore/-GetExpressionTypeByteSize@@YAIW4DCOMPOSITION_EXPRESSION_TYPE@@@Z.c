/*
 * XREFs of ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18010D3FC
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18010CEB8 (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18010EAD0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z @ 0x18026F570 (-PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeByteSize(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf
  int v7; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  if ( a1 != 17 )
  {
    if ( a1 > 52 )
    {
      v9 = a1 - 69;
      if ( !v9 )
        goto LABEL_10;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_10;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_10;
      v12 = v11 - 33;
      if ( !v12 )
        goto LABEL_10;
      v6 = v12 == 161;
    }
    else
    {
      if ( a1 == 52 )
      {
LABEL_10:
        v7 = a1 >> 4;
        return (unsigned int)(4 * v7);
      }
      v2 = a1 - 11;
      if ( !v2 )
      {
LABEL_13:
        v7 = 0;
        return (unsigned int)(4 * v7);
      }
      v3 = v2 - 6;
      if ( !v3 )
        goto LABEL_10;
      v4 = v3 - 1;
      if ( !v4 )
        goto LABEL_10;
      v5 = v4 - 17;
      if ( !v5 )
        goto LABEL_10;
      v6 = v5 == 7;
    }
    if ( v6 )
      goto LABEL_10;
    goto LABEL_13;
  }
  return 1LL;
}
