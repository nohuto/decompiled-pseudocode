/*
 * XREFs of ?ReverseAndLeftShift@magic@@YA?AUD2DMatrix@@AEBU2@@Z @ 0x18017B574
 * Callers:
 *     ??$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180179D7C (--$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILF.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A074 (--$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A45C (--$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017C954 (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 * Callees:
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18017A3B8 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 *     ?ConvertVectorArrayToMatrix@magic@@YA?AUD2DMatrix@@PEAUD2DVector3@@@Z @ 0x18017B71C (-ConvertVectorArrayToMatrix@magic@@YA-AUD2DMatrix@@PEAUD2DVector3@@@Z.c)
 */

__int64 __fastcall magic::ReverseAndLeftShift(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // xmm1_4
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  unsigned int v5; // xmm0_4
  unsigned __int64 v6; // xmm6_8
  __int64 v7; // r8
  char v8; // r9
  __int64 v9; // r8
  unsigned int v11; // edx
  unsigned __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-48h]
  unsigned __int64 v14; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-3Ch]
  unsigned __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-30h]

  v2 = a2[6];
  LODWORD(v12) = a2[2];
  v13 = a2[10];
  v3 = a2[5];
  HIDWORD(v12) = v2;
  v4 = a2[1];
  HIDWORD(v14) = v3;
  v5 = *a2;
  LODWORD(v14) = v4;
  v15 = a2[9];
  v6 = v14;
  v16 = __PAIR64__(a2[4], v5);
  v17 = a2[8];
  do
  {
    while ( 1 )
    {
      if ( D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v12)
        && !D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v14) )
      {
        v12 = v6;
        v13 = v11;
        v6 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v14 = v6;
        v15 = 0;
      }
      if ( !D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v14)
        || D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v16) )
      {
        break;
      }
      v6 = v16;
      v14 = v16;
      v15 = v17;
      v16 = 0LL;
      v17 = 0;
    }
  }
  while ( v8 );
  magic::ConvertVectorArrayToMatrix(v7, &v12);
  return v9;
}
