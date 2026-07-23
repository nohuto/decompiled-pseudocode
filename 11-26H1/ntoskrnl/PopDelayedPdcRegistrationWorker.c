/*
 * XREFs of PopDelayedPdcRegistrationWorker @ 0x1407DF920
 * Callers:
 *     <none>
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x1407E48B4 (PopAdaptiveStandbyInitializeActivator.c)
 */

__int64 PopDelayedPdcRegistrationWorker()
{
  __int64 result; // rax

  result = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( !(_DWORD)result )
    return PopAdaptiveStandbyInitializeActivator();
  return result;
}
