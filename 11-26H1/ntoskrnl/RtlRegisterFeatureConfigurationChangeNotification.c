/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x140500B80
 * Callers:
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x14085B4DC (wil_details_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14077D658 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  if ( KeGetEffectiveIrql()
    && (((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 || PoPowerDownActionInProgress) )
  {
    return -1073741637;
  }
  else
  {
    return CmFcRegisterFeatureConfigurationChangeNotification(
             Callback,
             Context,
             ObservedChangeStamp,
             RegistrationHandle);
  }
}
