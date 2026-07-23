/*
 * XREFs of KsepRegistryCloseKey @ 0x1409D8784
 * Callers:
 *     KseSetDeviceFlags @ 0x1407BF720 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409D70DC (KsepDbQueryRegistryDeviceData.c)
 *     KsepRegistryQueryDriverShims @ 0x1409D8644 (KsepRegistryQueryDriverShims.c)
 *     KsepMatchInitBiosInfo @ 0x140CD3750 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140D0E4EC (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement((_DWORD *)&AlpcpMessageLogLock.WaitBlockList + 1);
  }
  return result;
}
