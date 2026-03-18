/*
 * XREFs of Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x140272250
 * Callers:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 * Callees:
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledFallback @ 0x140272288 (Feature_SharedUserCritAndUIPI__private_IsEnabledFallback.c)
 */

__int64 Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SharedUserCritAndUIPI__private_featureState & 0x10) != 0 )
    return Feature_SharedUserCritAndUIPI__private_featureState & 1;
  else
    return Feature_SharedUserCritAndUIPI__private_IsEnabledFallback(
             (unsigned int)Feature_SharedUserCritAndUIPI__private_featureState,
             3LL);
}
