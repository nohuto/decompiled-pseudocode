/*
 * XREFs of MiModifiedWriterWakeStore @ 0x1403FF9C8
 * Callers:
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 */

LIST_ENTRY *__fastcall MiModifiedWriterWakeStore(__int64 a1)
{
  struct _KTIMER *v1; // rbx
  LIST_ENTRY *result; // rax

  v1 = (struct _KTIMER *)(a1 + 1336);
  result = (LIST_ENTRY *)*(unsigned int *)(a1 + 1340);
  if ( (_BYTE)result )
  {
    *(_DWORD *)(a1 + 1328) = 0;
    KeSetEvent((PRKEVENT)(a1 + 1008), 0, 0);
    KeCancelTimer(v1);
    *(_QWORD *)&v1->Header.Lock = 0LL;
    result = &v1->Header.WaitListHead;
    v1->Header.Type = 8;
    v1->Header.WaitListHead.Blink = &v1->Header.WaitListHead;
    v1->Header.WaitListHead.Flink = &v1->Header.WaitListHead;
    v1->DueTime.QuadPart = 0LL;
    v1->Period = 0;
    v1->Processor = 0;
    v1->TimerDifObjTracking = 0;
  }
  return result;
}
