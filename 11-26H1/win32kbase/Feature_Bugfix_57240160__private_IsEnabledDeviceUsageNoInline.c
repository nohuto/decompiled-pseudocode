/*
 * XREFs of Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x1401B4A74
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401B4908 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     DisableDelegation @ 0x14021B3F0 (DisableDelegation.c)
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 * Callees:
 *     Feature_Bugfix_57240160__private_IsEnabledFallback @ 0x1401B4AB0 (Feature_Bugfix_57240160__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_57240160__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_57240160__private_featureState & 1;
  else
    return Feature_Bugfix_57240160__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_57240160__private_featureState,
             3LL);
}
