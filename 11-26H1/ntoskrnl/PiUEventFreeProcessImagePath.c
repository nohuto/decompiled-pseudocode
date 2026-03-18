/*
 * XREFs of PiUEventFreeProcessImagePath @ 0x140B3F2BC
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140772AE8 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x14099A7E8 (PiUEventNotifyClient.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1409D675C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x1409D6A10 (PiUEventHandleGetEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeProcessImagePath(void **a1)
{
  wchar_t *v2; // rcx

  if ( a1 )
  {
    v2 = (wchar_t *)*a1;
    if ( v2 )
    {
      if ( v2 != L"unknown" )
      {
        ExFreePoolWithTag(v2, 0x59706E50u);
        *a1 = 0LL;
      }
    }
  }
}
