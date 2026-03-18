/*
 * XREFs of ACPIDevicePowerNotifyEvent @ 0x140043B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIDevicePowerNotifyEvent(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
