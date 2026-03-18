/*
 * XREFs of Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x14018A5D8
 * Callers:
 *     AllocateW32ProcessImpl @ 0x14018A480 (AllocateW32ProcessImpl.c)
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x1401D7A2C (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40 (NtUserSetProcessLaunchForegroundPolicy.c)
 * Callees:
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledFallback @ 0x1401C6020 (Feature_NotifyProcessCreateAlways__private_IsEnabledFallback.c)
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
