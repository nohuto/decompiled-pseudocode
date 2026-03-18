/*
 * XREFs of Interrupter_IoWorkItemRequeueDpc @ 0x140049920
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_ReleaseEventRingLock @ 0x1400285B0 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140028690 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x140028B00 (Interrupter_DeferToDpcOrWorkItem.c)
 */

void __fastcall Interrupter_IoWorkItemRequeueDpc(PVOID IoObject, struct _KEVENT *Context, PIO_WORKITEM IoWorkItem)
{
  char v4; // al
  __int64 v5; // rcx

  ++Context[2].Header.SignalState;
  v4 = Interrupter_AcquireEventRingLock((__int64)Context);
  LODWORD(Context[4].Header.WaitListHead.Blink) &= ~8u;
  Interrupter_ReleaseEventRingLock((__int64)Context, v4);
  v5 = *(_QWORD *)&Context->Header.Lock;
  ++LODWORD(Context[2].Header.WaitListHead.Blink);
  Interrupter_DeferToDpcOrWorkItem(v5);
  KeSetEvent(Context + 8, 0, 0);
}
