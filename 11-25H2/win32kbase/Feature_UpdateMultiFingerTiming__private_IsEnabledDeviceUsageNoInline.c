/*
 * XREFs of Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline @ 0x140225608
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB168 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x140225220 (-ProcessInitialization@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     Feature_UpdateMultiFingerTiming__private_IsEnabledFallback @ 0x140225640 (Feature_UpdateMultiFingerTiming__private_IsEnabledFallback.c)
 */

__int64 Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UpdateMultiFingerTiming__private_featureState & 0x10) != 0 )
    return Feature_UpdateMultiFingerTiming__private_featureState & 1;
  else
    return Feature_UpdateMultiFingerTiming__private_IsEnabledFallback(
             (unsigned int)Feature_UpdateMultiFingerTiming__private_featureState,
             3LL);
}
