/*
 * XREFs of SmpFlushStorePages @ 0x140B27010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E0BBC (MiFlushAllStoreSwapPages.c)
 */

LONG __fastcall SmpFlushStorePages(__int64 a1, __int64 a2, __int64 a3)
{
  MiFlushAllStoreSwapPages(**(struct _KEVENT ***)(*(_QWORD *)a1 + 2208LL), a2, a3);
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
