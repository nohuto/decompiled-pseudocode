/*
 * XREFs of Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline @ 0x1404FDF54
 * Callers:
 *     NtChangeThreadState @ 0x140AD4B20 (NtChangeThreadState.c)
 * Callees:
 *     Feature_SuspendThread2__private_IsEnabledFallback @ 0x140532E98 (Feature_SuspendThread2__private_IsEnabledFallback.c)
 */

__int64 Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SuspendThread2__private_featureState & 0x10) != 0 )
    return Feature_SuspendThread2__private_featureState & 1;
  else
    return Feature_SuspendThread2__private_IsEnabledFallback(
             (unsigned int)Feature_SuspendThread2__private_featureState,
             3LL);
}
