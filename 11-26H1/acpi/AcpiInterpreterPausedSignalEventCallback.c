/*
 * XREFs of AcpiInterpreterPausedSignalEventCallback @ 0x140066060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall AcpiInterpreterPausedSignalEventCallback(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
