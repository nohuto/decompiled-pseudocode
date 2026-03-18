/*
 * XREFs of ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401CB9C0
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage @ 0x1401A2124 (Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage.c)
 *     Feature_CheckCurrentDispBrokerMode__private_IsEnabledDeviceUsageNoInline @ 0x1401CFEDC (Feature_CheckCurrentDispBrokerMode__private_IsEnabledDeviceUsageNoInline.c)
 */

bool DrvIsModeChangeHandledByDispBroker(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)Feature_CheckCurrentDispBrokerMode__private_IsEnabledDeviceUsageNoInline() )
  {
    Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
    return (unsigned int)DispBrokerGetCurrentMode(v1, v0) == 3;
  }
  else
  {
    Feature_BrokeredDisplays_ModeChanges__private_ReportDeviceUsage();
    return 1;
  }
}
