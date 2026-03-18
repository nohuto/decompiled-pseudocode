/*
 * XREFs of KsepRegistryCloseKey @ 0x1409E42F0
 * Callers:
 *     KseSetDeviceFlags @ 0x1407BC6C0 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BCC58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryQueryDriverShims @ 0x1409E4314 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409E5B5C (KsepDbQueryRegistryDeviceData.c)
 *     KsepMatchInitBiosInfo @ 0x140CCD5F0 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140D0821C (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement((_DWORD *)&AlpcpMessageLogLock.RelativeTimerBias + 1);
  }
  return result;
}
