/*
 * XREFs of Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline @ 0x140093990
 * Callers:
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140060BF4 (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 * Callees:
 *     Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledFallback @ 0x1400939CC (Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayMux_CheckDeviceStarted__private_featureState & 0x10) != 0 )
    return Feature_DisplayMux_CheckDeviceStarted__private_featureState & 1;
  else
    return Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayMux_CheckDeviceStarted__private_featureState,
             3LL);
}
