/*
 * XREFs of Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline @ 0x14006F88C
 * Callers:
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14019896C (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 * Callees:
 *     Feature_SetPnPTransitionIdToBdd__private_IsEnabledFallback @ 0x14006F8C8 (Feature_SetPnPTransitionIdToBdd__private_IsEnabledFallback.c)
 */

__int64 Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetPnPTransitionIdToBdd__private_featureState & 0x10) != 0 )
    return Feature_SetPnPTransitionIdToBdd__private_featureState & 1;
  else
    return Feature_SetPnPTransitionIdToBdd__private_IsEnabledFallback(
             (unsigned int)Feature_SetPnPTransitionIdToBdd__private_featureState,
             3LL);
}
