/*
 * XREFs of Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x140615764
 * Callers:
 *     PspSetUILimitJobObject @ 0x1407F9E58 (PspSetUILimitJobObject.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140B79198 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspValidateJobAssignmentUILimits @ 0x140B79240 (PspValidateJobAssignmentUILimits.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledFallback @ 0x1406157A0 (Feature_SysSetJobUILimits__private_IsEnabledFallback.c)
 */

__int64 Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SysSetJobUILimits__private_featureState & 0x10) != 0 )
    return Feature_SysSetJobUILimits__private_featureState & 1;
  else
    return Feature_SysSetJobUILimits__private_IsEnabledFallback(
             (unsigned int)Feature_SysSetJobUILimits__private_featureState,
             3LL);
}
