/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800EC970
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x180084F5C (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800EC9A0 (RtlpFcRemoveChangeRegistration.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  if ( !byte_1801CA908 )
  {
    RtlpFcRemoveChangeRegistration(RegistrationHandle, RegistrationHandle);
    return RtlpFcFreeChangeRegistration(RegistrationHandle);
  }
  return result;
}
