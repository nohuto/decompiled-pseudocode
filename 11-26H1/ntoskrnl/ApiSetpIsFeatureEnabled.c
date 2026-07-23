/*
 * XREFs of ApiSetpIsFeatureEnabled @ 0x1406DF2D8
 * Callers:
 *     ApiSetpResolveHost @ 0x14051F22C (ApiSetpResolveHost.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x1406DE0EC (ApiSetQuerySchemaInfo2_V7.c)
 * Callees:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x1406DF318 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1406DF374 (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall ApiSetpIsFeatureEnabled(int a1)
{
  int v1; // eax
  int IsEnabledDeviceUsageNoInline; // eax

  if ( a1 == 57880228 )
  {
    IsEnabledDeviceUsageNoInline = Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline();
    goto LABEL_6;
  }
  if ( a1 == 60895909 )
  {
    IsEnabledDeviceUsageNoInline = Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline();
LABEL_6:
    v1 = (IsEnabledDeviceUsageNoInline != 0) + 1;
    return v1 == 2;
  }
  v1 = 0;
  return v1 == 2;
}
