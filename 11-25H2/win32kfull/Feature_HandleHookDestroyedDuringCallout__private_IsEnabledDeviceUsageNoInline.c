/*
 * XREFs of Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsageNoInline @ 0x140286D68
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback @ 0x140286DA0 (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback.c)
 */

__int64 Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HandleHookDestroyedDuringCallout__private_featureState & 0x10) != 0 )
    return Feature_HandleHookDestroyedDuringCallout__private_featureState & 1;
  else
    return Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback(
             (unsigned int)Feature_HandleHookDestroyedDuringCallout__private_featureState,
             3LL);
}
