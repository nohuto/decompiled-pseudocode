/*
 * XREFs of HalpLoadSfsUpdateWorker @ 0x14059D350
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG __fastcall HalpLoadSfsUpdateWorker(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 40) = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  return KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
