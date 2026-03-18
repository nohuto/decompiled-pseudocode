/*
 * XREFs of Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x1405857EC
 * Callers:
 *     HalpEnlightenmentInitialize @ 0x140585848 (HalpEnlightenmentInitialize.c)
 *     HalpDmaInit @ 0x140CB0700 (HalpDmaInit.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledFallback @ 0x140585828 (Feature_CvmDmaBouncing__private_IsEnabledFallback.c)
 */

__int64 Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CvmDmaBouncing__private_featureState & 0x10) != 0 )
    return Feature_CvmDmaBouncing__private_featureState & 1;
  else
    return Feature_CvmDmaBouncing__private_IsEnabledFallback(
             (unsigned int)Feature_CvmDmaBouncing__private_featureState,
             3LL);
}
