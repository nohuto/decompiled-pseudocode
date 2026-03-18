/*
 * XREFs of ACPIBuildNotifyEvent @ 0x140043AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIBuildNotifyEvent(__int64 a1, struct _KEVENT *a2)
{
  return KeSetEvent(a2, 0, 0);
}
