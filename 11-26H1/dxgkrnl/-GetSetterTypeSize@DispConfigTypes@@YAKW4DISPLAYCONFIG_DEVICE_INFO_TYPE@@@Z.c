/*
 * XREFs of ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006549C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1402C9210 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x140056424 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DispConfigTypes::GetSetterTypeSize(int a1)
{
  if ( a1 <= -16 )
  {
    if ( a1 == -16 )
      return 68LL;
    if ( a1 != -43 )
    {
      if ( a1 != -41 && a1 != -40 )
      {
        if ( a1 == -38 )
          return 28LL;
        if ( a1 != -35 && a1 != -27 )
        {
          if ( a1 == -23 )
            return 48LL;
          if ( a1 != -19 )
          {
            if ( a1 == -18 )
              return 28LL;
            return 0LL;
          }
        }
      }
      return 24LL;
    }
    if ( !(unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
      return 0LL;
    return 24LL;
  }
  switch ( a1 )
  {
    case 5:
      return 24LL;
    case -6:
      return 28LL;
    case -4:
    case 8:
    case 10:
      return 24LL;
  }
  if ( a1 != 13 )
  {
    if ( a1 != 16 && a1 != 17 )
      return 0LL;
    return 24LL;
  }
  return 312LL;
}
