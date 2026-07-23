/*
 * XREFs of HalpApicWriteEndOfInterrupt @ 0x1405A4960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpApicWriteEndOfInterrupt()
{
  return guard_dispatch_icall_no_overrides(176LL, 0LL);
}
