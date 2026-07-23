/*
 * XREFs of PsSetSessionObjectIoEvent @ 0x140B4929C
 * Callers:
 *     IopSessionChangeWorker @ 0x140427F30 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall PsSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 136LL), 0, 0);
}
