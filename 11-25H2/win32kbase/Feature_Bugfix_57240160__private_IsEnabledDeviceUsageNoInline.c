/*
 * XREFs of Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140216004
 * Callers:
 *     DisableDelegation @ 0x14018C880 (DisableDelegation.c)
 *     SetInputDelegationModeImpl @ 0x14018CB3C (SetInputDelegationModeImpl.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401928F0 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     Feature_Bugfix_57240160__private_IsEnabledFallback @ 0x14021603C (Feature_Bugfix_57240160__private_IsEnabledFallback.c)
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
