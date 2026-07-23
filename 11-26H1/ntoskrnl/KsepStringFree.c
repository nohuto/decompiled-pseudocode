/*
 * XREFs of KsepStringFree @ 0x1409D7848
 * Callers:
 *     KsepLoadShimProvider @ 0x140600A40 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x140600D10 (KsepCacheHwIdFree.c)
 *     KseSetDeviceFlags @ 0x1407BF720 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1407C189C (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407C1AEC (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x1407C1D58 (KsepRegistryCreateKey.c)
 *     KsepCacheDeviceFree @ 0x1409D6B70 (KsepCacheDeviceFree.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KsepDbFreeDriverShims @ 0x1409D926C (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
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
    v3 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v3) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v3) = 197445;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x345u, 0LL);
  }
}
