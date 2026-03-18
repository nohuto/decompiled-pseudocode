/*
 * XREFs of ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180185FA0
 * Callers:
 *     ?SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I_N@Z @ 0x180227900 (-SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I_N@Z.c)
 * Callees:
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x180179C8C (-ConfigurationListContainsType@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x18018BFF0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x180227C60 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsInteractionType(__int64 a1, int a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10d
  int v7; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  int v13; // r11d
  int v14; // r11d
  int v15; // r11d
  unsigned int v16; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0;
  v16 = 0;
  v7 = a2;
  v9 = 0LL;
  v10 = 0LL;
  if ( a4 )
  {
    anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 1272, &v17, &v16, 0LL);
    v9 = v17;
    v10 = v16;
  }
  if ( v7 == 5 )
  {
    v11 = *(_DWORD *)(a1 + 640) & 0xFFFF7FC0;
    if ( (*(_DWORD *)(a1 + 640) & 0x8000) != 0 )
      v11 = *(_DWORD *)(a1 + 640);
    LOBYTE(v4) = (v11 & a3) != 0;
    return v4;
  }
  else
  {
    v13 = v7 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 2 )
            return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                     a1 + 480,
                     a3,
                     v9,
                     v10);
          else
            return 0LL;
        }
        else
        {
          return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                   a1 + 320,
                   a3,
                   v9,
                   v10);
        }
      }
      else
      {
        return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                 a1 + 160,
                 a3,
                 v9,
                 v10);
      }
    }
    else
    {
      return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
               a1,
               a3,
               v9,
               v10);
    }
  }
}
