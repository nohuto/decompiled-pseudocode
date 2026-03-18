/*
 * XREFs of VerifierExAllocatePoolEx @ 0x140B81440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierExAllocatePoolEx(__int64 a1)
{
  LODWORD(a1) = a1 | 0x80;
  return guard_dispatch_icall_no_overrides(a1);
}
