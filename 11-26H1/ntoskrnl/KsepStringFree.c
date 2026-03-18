/*
 * XREFs of KsepStringFree @ 0x1409E5588
 * Callers:
 *     KsepLoadShimProvider @ 0x1405FDFF0 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1405FE2C0 (KsepCacheHwIdFree.c)
 *     KseSetDeviceFlags @ 0x1407BC6C0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BCC58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1407BE83C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407BEA8C (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x1407BECF8 (KsepRegistryCreateKey.c)
 *     KsepDbFreeDriverShims @ 0x1409E3D40 (KsepDbFreeDriverShims.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KsepCacheDeviceFree @ 0x1409E6270 (KsepCacheDeviceFree.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A25360 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 */

void __fastcall KsepStringFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *(_OWORD *)a1 = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v3 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v3) = 197445;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x345u, 0LL);
  }
}
