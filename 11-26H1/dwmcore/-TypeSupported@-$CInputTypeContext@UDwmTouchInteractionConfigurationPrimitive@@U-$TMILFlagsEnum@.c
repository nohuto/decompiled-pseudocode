/*
 * XREFs of ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180179A70
 * Callers:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1801797F0 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180179900 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  unsigned int v4; // r11d
  int v5; // edx
  unsigned int v6; // r10d
  _DWORD *v7; // rcx

  v4 = 0;
  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 112) > 1u
      || *(_DWORD *)(a1 + 112) == 1 && a4 & a3 | ~a4 & *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL) )
    {
      return 1;
    }
    return v4;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    LOBYTE(v4) = (((unsigned __int8)(a4 & a3) | (unsigned __int8)(~(_BYTE)a4 & *(_BYTE *)(a1 + 16))) & 0x3F) != 0;
    return v4;
  }
  if ( v5 != 1 )
    return 0LL;
  v6 = 1;
  if ( *(_DWORD *)(a1 + 112) != 1 )
    return 0;
  v7 = *(_DWORD **)(a1 + 88);
  if ( *v7 != 1 || v7[1] != -1 || (a4 & a3 | ~a4 & v7[2]) != 0xCFFFFFFF )
    return 0;
  return v6;
}
