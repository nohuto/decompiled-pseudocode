/*
 * XREFs of ?RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14003E114
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1402C9210 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline @ 0x140063C44 (Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DispConfigTypes::RequiresAdapterCoreAccessExclusive(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 > -16 )
  {
    v2 = a1 - 8;
    if ( !v2 )
      return 1;
    v3 = v2 - 2;
    if ( !v3 )
      return 1;
    v4 = v3 - 3;
    if ( !v4 )
      return 1;
    v5 = v4 - 3;
    if ( !v5 )
      return 1;
    return v5 == 1;
  }
  else
  {
    switch ( a1 )
    {
      case -16:
      case -40:
        return 1;
      case -41:
        return (unsigned int)Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline() != 0;
      case -38:
      case -23:
        return 1;
    }
    return a1 == -18;
  }
}
