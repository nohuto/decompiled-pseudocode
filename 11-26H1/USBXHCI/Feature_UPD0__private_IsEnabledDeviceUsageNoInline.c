/*
 * XREFs of Feature_UPD0__private_IsEnabledDeviceUsageNoInline @ 0x140044E48
 * Callers:
 *     Controller_LogDiagnosticsOnD0Exit @ 0x140041F28 (Controller_LogDiagnosticsOnD0Exit.c)
 * Callees:
 *     Feature_UPD0__private_IsEnabledFallback @ 0x140044E84 (Feature_UPD0__private_IsEnabledFallback.c)
 */

__int64 Feature_UPD0__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UPD0__private_featureState & 0x10) != 0 )
    return Feature_UPD0__private_featureState & 1;
  else
    return Feature_UPD0__private_IsEnabledFallback((unsigned int)Feature_UPD0__private_featureState, 3LL);
}
