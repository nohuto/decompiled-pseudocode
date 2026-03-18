/*
 * XREFs of AcpiNotifyDeleteDeviceSyncCompletion @ 0x140066090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall AcpiNotifyDeleteDeviceSyncCompletion(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
