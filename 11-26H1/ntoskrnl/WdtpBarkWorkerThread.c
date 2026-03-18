/*
 * XREFs of WdtpBarkWorkerThread @ 0x1408A00C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall WdtpBarkWorkerThread(struct _KEVENT *a1, __int64 a2)
{
  guard_dispatch_icall_no_overrides((__int64)&a1[5].Header.WaitListHead.Blink + 5, a2);
  return KeSetEvent(a1 + 4, 0, 0);
}
