/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1400018E8
 * Callers:
 *     StorpGetLogicalProcessorRelationship @ 0x140001464 (StorpGetLogicalProcessorRelationship.c)
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorEtwRaidMiniportEventProxy @ 0x14004EB50 (StorEtwRaidMiniportEventProxy.c)
 *     StorEnableRegistryKeyNotification @ 0x140050904 (StorEnableRegistryKeyNotification.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140051AE8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorpBuildScatterGatherList @ 0x140058304 (StorpBuildScatterGatherList.c)
 *     StorPortpInvokeAcpiMethod @ 0x14005B718 (StorPortpInvokeAcpiMethod.c)
 *     StorEtwNvmeMiniportEventProxy @ 0x14007A9D0 (StorEtwNvmeMiniportEventProxy.c)
 *     StorPortNvmeofExtendedFunction @ 0x14007BC80 (StorPortNvmeofExtendedFunction.c)
 *     StorpGetNodeAffinity2 @ 0x14007CE90 (StorpGetNodeAffinity2.c)
 *     StorEtwMiniportLogByteStream @ 0x1400B1628 (StorEtwMiniportLogByteStream.c)
 *     NvmeAdapterStorMQAddController @ 0x1400DF1F4 (NvmeAdapterStorMQAddController.c)
 *     NvmeAdapterStorMQRemoveController @ 0x1400DF6F8 (NvmeAdapterStorMQRemoveController.c)
 *     StorPortpRegisterDriverProxy @ 0x14011910C (StorPortpRegisterDriverProxy.c)
 *     StorPortpSwapDriverProxyEndpoints @ 0x140119140 (StorPortpSwapDriverProxyEndpoints.c)
 *     StorAddChildAdapter @ 0x14012EDD8 (StorAddChildAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  __int64 result; // rax

  if ( a1 > -1073741661 )
  {
    if ( a1 != -1073741637 )
    {
      if ( a1 == -1073741496 )
        return 3238002696LL;
      if ( a1 != -1073741436 )
      {
        if ( a1 < 0 )
          return 3238002689LL;
        else
          return 0LL;
      }
      return 3238002697LL;
    }
    return 3238002690LL;
  }
  switch ( a1 )
  {
    case -1073741661:
      return 3238002697LL;
    case -2147483643:
      return 3238002692LL;
    case -1073741822:
      return 3238002690LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741789:
      return 3238002692LL;
  }
  result = 3238002689LL;
  if ( a1 == -1073741670 )
    return 3238002691LL;
  return result;
}
