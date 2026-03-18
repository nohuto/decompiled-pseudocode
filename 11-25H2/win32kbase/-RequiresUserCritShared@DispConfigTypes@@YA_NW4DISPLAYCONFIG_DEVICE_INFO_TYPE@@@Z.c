/*
 * XREFs of ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016E4D0
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400C7E18 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 */

char __fastcall DispConfigTypes::RequiresUserCritShared(int a1)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 > -14 )
  {
    if ( a1 > 7 )
    {
      v3 = a1 - 9;
      if ( !v3 )
        return 0;
      v4 = v3 - 2;
      if ( !v4 )
        return 0;
      v5 = v4 - 1;
      if ( !v5 || v5 == 3 )
        return 0;
      return DispConfigTypes::AllowInAnySession(a1) ^ 1;
    }
    if ( a1 == 7 || a1 == -12 )
      return 0;
    if ( a1 == -11 )
      return 1;
    if ( ((a1 + 9) & 0xFFFFFFFB) != 0 )
    {
      if ( a1 == -2 )
        return 1;
      return DispConfigTypes::AllowInAnySession(a1) ^ 1;
    }
    return 0;
  }
  if ( a1 == -14 )
    return 0;
  if ( a1 <= -30 )
  {
    if ( a1 != -30 && a1 != -39 )
    {
      if ( a1 != -35 && a1 > -38 && a1 < -32 )
        return 0;
      return DispConfigTypes::AllowInAnySession(a1) ^ 1;
    }
    return 1;
  }
  if ( (unsigned int)(a1 + 26) <= 1 )
    return 0;
  if ( (unsigned int)(a1 + 21) <= 1 )
    return 1;
  return DispConfigTypes::AllowInAnySession(a1) ^ 1;
}
