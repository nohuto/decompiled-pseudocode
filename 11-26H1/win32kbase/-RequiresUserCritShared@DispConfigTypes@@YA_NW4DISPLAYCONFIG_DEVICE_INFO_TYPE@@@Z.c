/*
 * XREFs of ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1400FB820
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DispConfigTypes::RequiresUserCritShared(int a1)
{
  char result; // al

  if ( a1 == -37 )
    return 0;
  switch ( a1 )
  {
    case -39:
    case -30:
    case -21:
    case -20:
    case -11:
    case -2:
LABEL_6:
      result = 1;
      break;
    case -36:
    case -34:
    case -33:
    case -26:
    case -25:
    case -14:
    case -12:
    case -9:
    case -5:
    case 7:
    case 9:
    case 11:
    case 12:
    case 15:
      return 0;
    default:
      if ( a1 != -10 )
      {
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
            return 0;
          default:
            goto LABEL_6;
        }
      }
      return 0;
  }
  return result;
}
