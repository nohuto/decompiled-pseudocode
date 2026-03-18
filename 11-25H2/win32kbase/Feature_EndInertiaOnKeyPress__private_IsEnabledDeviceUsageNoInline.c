/*
 * XREFs of Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsageNoInline @ 0x14021273C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402122A0 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14021263C (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledFallback @ 0x140212774 (Feature_EndInertiaOnKeyPress__private_IsEnabledFallback.c)
 */

__int64 Feature_EndInertiaOnKeyPress__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EndInertiaOnKeyPress__private_featureState & 0x10) != 0 )
    return Feature_EndInertiaOnKeyPress__private_featureState & 1;
  else
    return Feature_EndInertiaOnKeyPress__private_IsEnabledFallback(
             (unsigned int)Feature_EndInertiaOnKeyPress__private_featureState,
             3LL);
}
