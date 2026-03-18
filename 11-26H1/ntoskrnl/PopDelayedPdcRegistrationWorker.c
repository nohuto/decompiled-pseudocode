/*
 * XREFs of PopDelayedPdcRegistrationWorker @ 0x1407DB910
 * Callers:
 *     <none>
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x1407DFE6C (PopAdaptiveStandbyInitializeActivator.c)
 */

__int64 PopDelayedPdcRegistrationWorker()
{
  __int64 result; // rax

  result = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( !(_DWORD)result )
    return PopAdaptiveStandbyInitializeActivator();
  return result;
}
