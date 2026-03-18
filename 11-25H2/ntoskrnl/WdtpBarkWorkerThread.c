/*
 * XREFs of WdtpBarkWorkerThread @ 0x140814730
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall WdtpBarkWorkerThread(struct _KEVENT *a1)
{
  guard_dispatch_icall_no_overrides((char *)&a1[5].Header.WaitListHead.Blink + 5);
  return KeSetEvent(a1 + 4, 0, 0);
}
