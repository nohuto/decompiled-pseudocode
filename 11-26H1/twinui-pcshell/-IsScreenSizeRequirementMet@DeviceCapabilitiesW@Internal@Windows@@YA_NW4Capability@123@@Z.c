/*
 * XREFs of ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x180200FC0
 * Callers:
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180255130 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?IsScreenPresentMatchingSizeCondition@DeviceCapabilitiesW@Internal@Windows@@YA_NMW4tagCONDITION_OPERATION@@@Z @ 0x1802010C4 (-IsScreenPresentMatchingSizeCondition@DeviceCapabilitiesW@Internal@Windows@@YA_NMW4tagCONDITION_.c)
 *     ??$GetConditionOperationResult@M@DeviceCapabilitiesW@Internal@Windows@@YA_NMMW4tagCONDITION_OPERATION@@@Z @ 0x18050E190 (--$GetConditionOperationResult@M@DeviceCapabilitiesW@Internal@Windows@@YA_NMMW4tagCONDITION_OPER.c)
 */

bool __fastcall Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet(
        Windows::Internal::DeviceCapabilitiesW *a1,
        float a2)
{
  int v2; // ebx
  int i; // eax
  const wchar_t *v4; // r8
  __int64 v5; // rdx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (unsigned int)a1;
  v2 = 0;
  for ( i = 0; !i; i = 1 )
  {
    if ( !`Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet'::`2'::c_rgCapabilityToInchMap )
    {
      v7 = 0;
      v4 = L"SmallScreenEnhancements";
      if ( L"SmallScreenEnhancements"
        && !`Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet'::`2'::s_rgCapabilityOverrideDoesNotExist
        && SHRegGetDWORD(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceCapabilities",
             L"SmallScreenEnhancements",
             &v7) >= 0
        && v7 )
      {
        v2 = ((unsigned __int8)Windows::Internal::DeviceCapabilitiesW::GetConditionOperationResult<float>(a1, v5, 5LL) ^ 1)
           + 1;
      }
      else
      {
        `Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet'::`2'::s_rgCapabilityOverrideDoesNotExist = 1;
        v2 = 2
           - Windows::Internal::DeviceCapabilitiesW::IsScreenPresentMatchingSizeCondition(
               a1,
               a2,
               (enum tagCONDITION_OPERATION)v4);
      }
      return v2 == 1;
    }
  }
  return v2 == 1;
}
