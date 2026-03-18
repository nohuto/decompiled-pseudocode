/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x1407E6B40
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1407E7D34 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1407E521C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1407E7418 (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407ED0EC (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiWriteEnumerationEventsToQueue(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+20h] [rbp-228h] BYREF
  _BYTE v8[540]; // [rsp+24h] [rbp-224h] BYREF

  v4 = TtmiPublishDeviceEnumerationEvents(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 2111LL;
LABEL_3:
    TtmiLogError("TtmiWriteEnumerationEventsToQueue", v5, (unsigned int)v4, (unsigned int)v4);
    return (unsigned int)v4;
  }
  TtmpPublishDisplayRequiredPowerRequestEvents(a1, a2);
  memset_0(v8, 0, sizeof(v8));
  v7 = 1;
  v4 = TtmiWriteEventToSingleQueue(a2, &v7);
  if ( v4 < 0 )
  {
    v5 = 2130LL;
    goto LABEL_3;
  }
  return 0LL;
}
