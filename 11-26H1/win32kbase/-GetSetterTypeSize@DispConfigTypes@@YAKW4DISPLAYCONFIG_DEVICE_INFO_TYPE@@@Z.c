/*
 * XREFs of ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1401E0030
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x1401E03E0 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
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
  if ( a1 == -6 )
    return 28LL;
  if ( a1 == -4 || a1 == 5 || a1 == 8 || a1 == 10 )
    return 24LL;
  if ( a1 != 13 )
  {
    if ( a1 != 16 && a1 != 17 )
      return 0LL;
    return 24LL;
  }
  return 312LL;
}
