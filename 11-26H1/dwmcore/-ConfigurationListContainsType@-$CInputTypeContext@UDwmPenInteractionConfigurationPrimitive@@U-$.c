/*
 * XREFs of ?ConfigurationListContainsType@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x180179C8C
 * Callers:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z @ 0x180185EA0 (-SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z.c)
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180185FA0 (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 i; // r11

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 112) )
      return 0LL;
    if ( ((a4 & a3 | ~a4 & *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12 * i + 8)) & a2) != 0 )
      break;
  }
  return 1LL;
}
