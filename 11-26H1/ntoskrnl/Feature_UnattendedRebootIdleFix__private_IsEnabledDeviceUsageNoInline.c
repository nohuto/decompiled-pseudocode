/*
 * XREFs of Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x140613CC8
 * Callers:
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x1407E2104 (PopAdaptiveConsoleSessionOverrideClear.c)
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 * Callees:
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledFallback @ 0x140613D04 (Feature_UnattendedRebootIdleFix__private_IsEnabledFallback.c)
 */

__int64 Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UnattendedRebootIdleFix__private_featureState & 0x10) != 0 )
    return Feature_UnattendedRebootIdleFix__private_featureState & 1;
  else
    return Feature_UnattendedRebootIdleFix__private_IsEnabledFallback(
             (unsigned int)Feature_UnattendedRebootIdleFix__private_featureState,
             3LL);
}
