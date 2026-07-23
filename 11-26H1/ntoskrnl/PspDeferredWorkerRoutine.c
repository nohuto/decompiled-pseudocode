/*
 * XREFs of PspDeferredWorkerRoutine @ 0x1407F4880
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall PspDeferredWorkerRoutine(PRKEVENT Event, __int64 a2)
{
  LODWORD(Event[1].Header.WaitListHead.Blink) = guard_dispatch_icall_no_overrides(
                                                  (__int64)Event[1].Header.WaitListHead.Flink,
                                                  a2);
  return KeSetEvent(Event, 1, 0);
}
