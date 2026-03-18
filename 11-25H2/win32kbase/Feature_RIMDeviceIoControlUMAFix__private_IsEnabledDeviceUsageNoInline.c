/*
 * XREFs of Feature_RIMDeviceIoControlUMAFix__private_IsEnabledDeviceUsageNoInline @ 0x1401D7B10
 * Callers:
 *     NtRIMDeviceIoControl @ 0x14017E770 (NtRIMDeviceIoControl.c)
 * Callees:
 *     Feature_RIMDeviceIoControlUMAFix__private_IsEnabledFallback @ 0x1401D7B48 (Feature_RIMDeviceIoControlUMAFix__private_IsEnabledFallback.c)
 */

__int64 Feature_RIMDeviceIoControlUMAFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RIMDeviceIoControlUMAFix__private_featureState & 0x10) != 0 )
    return Feature_RIMDeviceIoControlUMAFix__private_featureState & 1;
  else
    return Feature_RIMDeviceIoControlUMAFix__private_IsEnabledFallback(
             (unsigned int)Feature_RIMDeviceIoControlUMAFix__private_featureState,
             3LL);
}
