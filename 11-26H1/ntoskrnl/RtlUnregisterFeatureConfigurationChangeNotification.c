/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x140806C60
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1408673B0 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  return CmFcManagerUnregisterFeatureConfigurationChangeNotification(RegistrationHandle, RegistrationHandle);
}
