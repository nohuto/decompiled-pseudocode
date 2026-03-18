/*
 * XREFs of Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x1401B64E0
 * Callers:
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x14016AC04 (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 *     AllocateW32ProcessImpl @ 0x14016AD30 (AllocateW32ProcessImpl.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledFallback @ 0x1401B6518 (Feature_NotifyProcessCreateAlways__private_IsEnabledFallback.c)
 */

__int64 Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NotifyProcessCreateAlways__private_featureState & 0x10) != 0 )
    return Feature_NotifyProcessCreateAlways__private_featureState & 1;
  else
    return Feature_NotifyProcessCreateAlways__private_IsEnabledFallback(
             (unsigned int)Feature_NotifyProcessCreateAlways__private_featureState,
             3LL);
}
