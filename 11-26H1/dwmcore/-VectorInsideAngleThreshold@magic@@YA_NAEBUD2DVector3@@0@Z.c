/*
 * XREFs of ?VectorInsideAngleThreshold@magic@@YA_NAEBUD2DVector3@@0@Z @ 0x18017E604
 * Callers:
 *     ?CanAddThisColumnVectorToMatrix@magic@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18017CD80 (-CanAddThisColumnVectorToMatrix@magic@@YA_NPEAUD2DVector3@@IAEBU2@@Z.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017D500 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017DDF8 (--$CalculateDetectedInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum.c)
 *     ??$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017E874 (--$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ??$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017F098 (--$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 * Callees:
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x18017E660 (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 */

bool __fastcall magic::VectorInsideAngleThreshold(
        magic *this,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3)
{
  float v3; // xmm0_4
  __int32 v4; // xmm3_4

  v3 = D3DXVector3Angle(this, a2);
  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(LODWORD(v3) & v4) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 - 3.1415927) & v4) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 + 3.1415927) & v4) < 0.17453;
}
