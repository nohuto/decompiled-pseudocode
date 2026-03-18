/*
 * XREFs of Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledDeviceUsageNoInline @ 0x140272154
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledFallback @ 0x14027218C (Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledFallback.c)
 */

__int64 Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixSwpNoActivateAddedViaPosChanging2__private_featureState & 0x10) != 0 )
    return Feature_FixSwpNoActivateAddedViaPosChanging2__private_featureState & 1;
  else
    return Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledFallback(
             (unsigned int)Feature_FixSwpNoActivateAddedViaPosChanging2__private_featureState,
             3LL);
}
