/*
 * XREFs of ??$GetConditionOperationResult@M@DeviceCapabilitiesW@Internal@Windows@@YA_NMMW4tagCONDITION_OPERATION@@@Z @ 0x1804ECBA0
 * Callers:
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x18020EB88 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::DeviceCapabilitiesW::GetConditionOperationResult<float>(float a1, float a2, int a3)
{
  char v3; // cl
  int v4; // r8d

  v3 = 0;
  v4 = a3 - 4;
  if ( !v4 )
    return a1 > a2;
  if ( v4 == 1 )
    return a2 >= a1;
  return v3;
}
