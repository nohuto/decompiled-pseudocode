/*
 * XREFs of Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401A5210
 * Callers:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x14003E754 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 * Callees:
 *     Feature_HandleManagerHardening__private_IsEnabledFallback @ 0x1401A5248 (Feature_HandleManagerHardening__private_IsEnabledFallback.c)
 */

__int64 Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HandleManagerHardening__private_featureState & 0x10) != 0 )
    return Feature_HandleManagerHardening__private_featureState & 1;
  else
    return Feature_HandleManagerHardening__private_IsEnabledFallback(
             (unsigned int)Feature_HandleManagerHardening__private_featureState,
             3LL);
}
