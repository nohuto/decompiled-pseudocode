/*
 * XREFs of Feature_359445817__private_IsEnabledDeviceUsageNoInline @ 0x1400A60C4
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     Feature_359445817__private_IsEnabledFallback @ 0x1400A6100 (Feature_359445817__private_IsEnabledFallback.c)
 */

__int64 Feature_359445817__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_359445817__private_featureState & 0x10) != 0 )
    return Feature_359445817__private_featureState & 1;
  else
    return Feature_359445817__private_IsEnabledFallback((unsigned int)Feature_359445817__private_featureState, 3LL);
}
