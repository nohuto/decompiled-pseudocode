/*
 * XREFs of ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180179D7C (--$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILF.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A074 (--$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A45C (--$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18017B0A4 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C16C (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017C954 (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18017D4B8 (_anonymous_namespace_--TransformAndNormalize.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017D500 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017DDF8 (--$CalculateDetectedInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum.c)
 *     ??$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017E874 (--$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ??$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017F098 (--$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B90E0 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 *     ??$ResolveProhibitedMotion@UDwmPenInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B9518 (--$ResolveProhibitedMotion@UDwmPenInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionT.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B9948 (--$ResolveProhibitedMotion@UDwmTouchInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractio.c)
 *     ??$ResolveProhibitedMotion@UDwmMousewheelInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B9D78 (--$ResolveProhibitedMotion@UDwmMousewheelInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInter.c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3TransformCoord(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  float v3; // xmm7_4
  float v4; // xmm5_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm4_4
  float v8; // xmm7_4

  v3 = *((float *)a2 + 1);
  v4 = (float)((float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
     + *((float *)a3 + 12);
  v5 = *((float *)a2 + 2);
  v6 = (float)((float)((float)(v3 * *((float *)a3 + 5)) + (float)(*(float *)a2 * *((float *)a3 + 1)))
             + (float)(v5 * *((float *)a3 + 9)))
     + *((float *)a3 + 13);
  v7 = (float)((float)((float)(v3 * *((float *)a3 + 7)) + (float)(*(float *)a2 * *((float *)a3 + 3)))
             + (float)(v5 * *((float *)a3 + 11)))
     + *((float *)a3 + 15);
  v8 = (float)((float)((float)(v3 * *((float *)a3 + 6)) + (float)(*(float *)a2 * *((float *)a3 + 2)))
             + (float)(v5 * *((float *)a3 + 10)))
     + *((float *)a3 + 14);
  *(float *)a1 = v4;
  *((float *)a1 + 1) = v6;
  *((float *)a1 + 2) = v8;
  if ( (float)(v7 - 1.0) < -0.00000011920929 || (float)(v7 - 1.0) > 0.00000011920929 )
  {
    *(float *)a1 = (float)(1.0 / v7) * v4;
    *((float *)a1 + 1) = (float)(1.0 / v7) * v6;
    *((float *)a1 + 2) = (float)(1.0 / v7) * v8;
  }
  return a1;
}
