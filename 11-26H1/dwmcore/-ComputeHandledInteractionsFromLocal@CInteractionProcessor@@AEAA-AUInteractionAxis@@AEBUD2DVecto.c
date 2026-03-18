/*
 * XREFs of ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017CC58
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017B788 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ??$CalculateHandledInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BA88 (--$CalculateHandledInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180179D7C (--$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILF.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A074 (--$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A45C (--$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017C954 (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // ecx
  int v9; // ecx
  _OWORD *v10; // rax
  int v12; // ecx
  int v13[6]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)a4 = xmmword_1803AD770;
  *(_OWORD *)(a4 + 16) = xmmword_1803AD780;
  *(_OWORD *)(a4 + 32) = xmmword_1803AD790;
  *(_OWORD *)(a4 + 48) = xmmword_1803AD7A0;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 12) = 0;
  v8 = *(_DWORD *)(a1 + 788) - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v12 = v9 - 1;
      if ( v12 )
      {
        if ( v12 != 2 )
          return a2;
        v10 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
                          a1,
                          (__int64)v13,
                          (__int64 *)(a1 + 480),
                          a3,
                          (struct D2DMatrix *)a4);
      }
      else
      {
        if ( !CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
          return a2;
        v10 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
                          a1,
                          (__int64)v13,
                          (__int64 *)(a1 + 320),
                          a3,
                          (struct D2DMatrix *)a4);
      }
    }
    else
    {
      v10 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                        a1,
                        (__int64)v13,
                        (__int64 *)(a1 + 160),
                        a3,
                        (struct D2DMatrix *)a4);
    }
  }
  else
  {
    v10 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                      a1,
                      (__int64)v13,
                      (__int64 *)a1,
                      a3,
                      (struct D2DMatrix *)a4);
  }
  *(_OWORD *)a2 = *v10;
  return a2;
}
