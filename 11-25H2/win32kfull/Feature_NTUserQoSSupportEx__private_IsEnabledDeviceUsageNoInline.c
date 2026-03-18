/*
 * XREFs of Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1402721A8
 * Callers:
 *     xxxConsoleControl @ 0x1401B62A0 (xxxConsoleControl.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     NtUserSetAdditionalPowerThrottlingProcess @ 0x14029DCA0 (NtUserSetAdditionalPowerThrottlingProcess.c)
 * Callees:
 *     Feature_NTUserQoSSupportEx__private_IsEnabledFallback @ 0x1402721E0 (Feature_NTUserQoSSupportEx__private_IsEnabledFallback.c)
 */

__int64 Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NTUserQoSSupportEx__private_featureState & 0x10) != 0 )
    return Feature_NTUserQoSSupportEx__private_featureState & 1;
  else
    return Feature_NTUserQoSSupportEx__private_IsEnabledFallback(
             (unsigned int)Feature_NTUserQoSSupportEx__private_featureState,
             3LL);
}
