/*
 * XREFs of ?AxisContainsInteraction@magic@@YA_NAEBUInteractionAxis@@@Z @ 0x1801BA1A8
 * Callers:
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B90E0 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 *     ??$ResolveProhibitedMotion@UDwmPenInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B9518 (--$ResolveProhibitedMotion@UDwmPenInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionT.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B9948 (--$ResolveProhibitedMotion@UDwmTouchInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractio.c)
 *     ??$ResolveProhibitedMotion@UDwmMousewheelInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801B9D78 (--$ResolveProhibitedMotion@UDwmMousewheelInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInter.c)
 * Callees:
 *     <none>
 */

char __fastcall magic::AxisContainsInteraction(magic *this, const struct InteractionAxis *a2)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)this
    || *((_BYTE *)this + 1)
    || *((float *)this + 1) != 0.0
    || *((float *)this + 2) != 0.0
    || *((float *)this + 3) != 0.0 )
  {
    return 1;
  }
  return result;
}
