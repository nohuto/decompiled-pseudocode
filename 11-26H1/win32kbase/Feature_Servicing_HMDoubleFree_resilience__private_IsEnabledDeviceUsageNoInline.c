/*
 * XREFs of Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14016E984
 * Callers:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140118714 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 * Callees:
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback @ 0x1401DF38C (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_HMDoubleFree_resilience__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HMDoubleFree_resilience__private_featureState & 1;
  else
    return Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_featureState,
             3LL);
}
