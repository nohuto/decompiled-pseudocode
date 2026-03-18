/*
 * XREFs of ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016E3DC
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401B9C4C (Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401B9CA0 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline @ 0x1401B9CF4 (Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1401B9D48 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DispConfigTypes::GetGetterTypeSize(int a1)
{
  __int64 result; // rax

  if ( a1 > 100 )
    return 0LL;
  if ( a1 == 100 )
    return 24LL;
  switch ( a1 )
  {
    case -46:
      if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
        return 0LL;
      return 268LL;
    case -45:
      if ( !(unsigned int)Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline() )
        return 0LL;
      return 24LL;
    case -44:
      if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        return 0LL;
      goto LABEL_19;
    case -42:
      if ( !(unsigned int)Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline() )
        return 0LL;
      return 264LL;
    case -39:
    case -13:
    case 15:
      return 36LL;
    case -37:
      return 44LL;
    case -36:
    case -26:
    case -12:
    case -9:
    case 6:
    case 7:
    case 11:
    case 12:
      return 24LL;
    case -34:
      return 776LL;
    case -33:
      return 376LL;
    case -30:
    case -21:
    case -11:
    case -2:
      return 2056LL;
    case -25:
    case -14:
      return 40LL;
    case -24:
    case -15:
    case -3:
    case 9:
      return 32LL;
    case -22:
    case -10:
    case -5:
LABEL_19:
      result = 28LL;
      break;
    case -20:
      result = 56LL;
      break;
    case -8:
      result = 1304LL;
      break;
    case -7:
      result = 940LL;
      break;
    case 1:
      result = 84LL;
      break;
    case 2:
      result = 420LL;
      break;
    case 3:
      result = 80LL;
      break;
    case 4:
      result = 276LL;
      break;
    default:
      return 0LL;
  }
  return result;
}
