/*
 * XREFs of PsSetSessionObjectIoEvent @ 0x140B4726C
 * Callers:
 *     IopSessionChangeWorker @ 0x1404392D0 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall PsSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 136LL), 0, 0);
}
