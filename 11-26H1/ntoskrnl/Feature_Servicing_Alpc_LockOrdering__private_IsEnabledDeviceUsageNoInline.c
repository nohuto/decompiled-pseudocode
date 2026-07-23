/*
 * XREFs of Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline @ 0x14060257C
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x140B73710 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     Feature_Servicing_Alpc_LockOrdering__private_IsEnabledFallback @ 0x1406025B8 (Feature_Servicing_Alpc_LockOrdering__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Alpc_LockOrdering__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Alpc_LockOrdering__private_featureState & 1;
  else
    return Feature_Servicing_Alpc_LockOrdering__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Alpc_LockOrdering__private_featureState,
             3LL);
}
