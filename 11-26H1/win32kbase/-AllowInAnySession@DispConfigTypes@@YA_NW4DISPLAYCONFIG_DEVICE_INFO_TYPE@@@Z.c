/*
 * XREFs of ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FB7E0
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DispConfigTypes::AllowInAnySession(int a1)
{
  char result; // al

  if ( a1 == -10 )
    return 1;
  switch ( a1 )
  {
    case -39:
    case -30:
    case -25:
    case -24:
    case -22:
    case -21:
    case -20:
    case -15:
    case -13:
    case -11:
    case -8:
    case -7:
    case -2:
    case 2:
    case 3:
    case 4:
    case 6:
    case 100:
      return 1;
    default:
      result = 0;
      break;
  }
  return result;
}
