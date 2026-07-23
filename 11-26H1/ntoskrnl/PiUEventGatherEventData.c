/*
 * XREFs of PiUEventGatherEventData @ 0x140ADE7B0
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140775AE8 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1409A764C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x1409A7900 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     PnpExtractCategorySpecificEventData @ 0x140ADE7E8 (PnpExtractCategorySpecificEventData.c)
 */

__int64 __fastcall PiUEventGatherEventData(__int64 a1, const WCHAR **a2, __int64 a3, __int64 a4)
{
  const WCHAR *v4; // r10

  v4 = &word_140B8A320;
  if ( *(_QWORD *)(a1 + 64) )
    v4 = *(const WCHAR **)(a1 + 64);
  *a2 = v4;
  return PnpExtractCategorySpecificEventData(a1 + 80, a3, a4);
}
