/*
 * XREFs of IoGetIommuInterfaceEx @ 0x1407A4480
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetIommuInterfaceEx(__int64 a1, __int64 a2)
{
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  return guard_dispatch_icall_no_overrides(a1, a2);
}
