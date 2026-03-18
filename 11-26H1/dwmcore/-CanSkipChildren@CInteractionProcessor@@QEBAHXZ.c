/*
 * XREFs of ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x1801BFC34
 * Callers:
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x1801BFC20 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 * Callees:
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x1801BFCDC (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$T.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x1801CD810 (-SupportsAllInteractions@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-.c)
 */

__int64 __fastcall CInteractionProcessor::CanSkipChildren(CInteractionProcessor *this)
{
  __int64 v1; // r11
  unsigned int v3; // r10d
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // rcx
  __int64 result; // rax

  v1 = 3LL;
  if ( (*((_BYTE *)this + 1264) & 3) == 0 )
    return 0LL;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = (_DWORD *)((char *)this + 1312);
  do
  {
    if ( *((_BYTE *)v6 - 4) )
    {
      v4 = v6[1] & *v6 | (unsigned int)v4;
      v5 = v6[1] | (unsigned int)v5;
    }
    v6 += 3;
    --v1;
  }
  while ( v1 );
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                         (char *)this + 720,
                         v4,
                         v5);
      return (unsigned __int8)result;
    case 3:
      LOBYTE(result) = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                         (char *)this + 752,
                         v4,
                         v5);
      return (unsigned __int8)result;
    case 4:
      LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                         (char *)this + 688,
                         v4,
                         v5);
      return (unsigned __int8)result;
  }
  if ( *((_DWORD *)this + 197) != 5 )
  {
    if ( *((_DWORD *)this + 197) == 6 )
    {
      LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                         (char *)this + 656,
                         v4,
                         v5);
      return (unsigned __int8)result;
    }
    return 0LL;
  }
  LOBYTE(v3) = *((_DWORD *)this + 162) == -805306369;
  return v3;
}
