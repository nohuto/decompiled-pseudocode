/*
 * XREFs of TtmiPublishDeviceEnumerationEvents @ 0x1407EAD7C
 * Callers:
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407EC698 (TtmiWriteEnumerationEventsToQueue.c)
 * Callees:
 *     TtmpPublishDeviceEvent @ 0x1407EB890 (TtmpPublishDeviceEvent.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiPublishDeviceEnumerationEvents(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rdi
  int v6; // eax
  unsigned int v7; // ebx

  v2 = (__int64 *)(a1 + 96);
  for ( i = *(__int64 **)(a1 + 96); i != v2; i = (__int64 *)*i )
  {
    if ( (i[75] & 0xA) == 2 )
    {
      v6 = TtmpPublishDeviceEvent(a1, a2, i, 0LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        TtmiLogError("TtmiPublishDeviceEnumerationEvents", 1012LL, (unsigned int)v6, (unsigned int)v6);
        return v7;
      }
    }
  }
  return 0;
}
