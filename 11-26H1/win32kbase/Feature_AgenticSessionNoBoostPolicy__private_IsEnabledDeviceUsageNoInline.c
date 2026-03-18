/*
 * XREFs of Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401C93F0
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x1400DDFB4 (-doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1401A88F0 (-SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4For.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401D3B5C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     ?OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401D3FB4 (-OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback @ 0x1401C942C (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AgenticSessionNoBoostPolicy__private_featureState & 0x10) != 0 )
    return Feature_AgenticSessionNoBoostPolicy__private_featureState & 1;
  else
    return Feature_AgenticSessionNoBoostPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_featureState,
             3LL);
}
