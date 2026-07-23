/*
 * XREFs of ApiSetpIsFeatureEnabled @ 0x18013B6A0
 * Callers:
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 *     ApiSetQuerySchemaInfo2_V7 @ 0x180116BE8 (ApiSetQuerySchemaInfo2_V7.c)
 * Callees:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x18013B6E0 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x18013B728 (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
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
