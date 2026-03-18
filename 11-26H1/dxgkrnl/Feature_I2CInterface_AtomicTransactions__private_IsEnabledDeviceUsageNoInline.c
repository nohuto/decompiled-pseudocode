/*
 * XREFs of Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline @ 0x140094E40
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback @ 0x140094E7C (Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback.c)
 */

__int64 Feature_I2CInterface_AtomicTransactions__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_I2CInterface_AtomicTransactions__private_featureState & 0x10) != 0 )
    return Feature_I2CInterface_AtomicTransactions__private_featureState & 1;
  else
    return Feature_I2CInterface_AtomicTransactions__private_IsEnabledFallback(
             (unsigned int)Feature_I2CInterface_AtomicTransactions__private_featureState,
             3LL);
}
