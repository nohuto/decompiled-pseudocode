/*
 * XREFs of Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6104
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     Feature_QoSCleanupChildWindow__private_IsEnabledFallback @ 0x1402B613C (Feature_QoSCleanupChildWindow__private_IsEnabledFallback.c)
 */

__int64 Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_QoSCleanupChildWindow__private_featureState & 0x10) != 0 )
    return Feature_QoSCleanupChildWindow__private_featureState & 1;
  else
    return Feature_QoSCleanupChildWindow__private_IsEnabledFallback(
             (unsigned int)Feature_QoSCleanupChildWindow__private_featureState,
             3LL);
}
