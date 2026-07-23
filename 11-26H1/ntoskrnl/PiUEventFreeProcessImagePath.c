/*
 * XREFs of PiUEventFreeProcessImagePath @ 0x140B412EC
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140775AE8 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1409A764C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x1409A7900 (PiUEventHandleGetEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
