/*
 * XREFs of VerifierKeLowerIrql @ 0x140B85690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140B980D8 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140B9921C (VfKeIrqlLogLower.c)
 */

__int64 __fastcall VerifierKeLowerIrql(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = 0LL;
  LOBYTE(a2) = a1;
  if ( (MmVerifierData & 1) != 0 )
    v4 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2, a3, a4);
  LOBYTE(a1) = a2;
  result = guard_dispatch_icall_no_overrides(a1);
  if ( (MmVerifierData & 1) != 0 )
    return VfKeIrqlLogLower(v4);
  return result;
}
