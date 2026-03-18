/*
 * XREFs of VfGetDmaDomain @ 0x140604CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfGetDmaDomain(int a1)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter);
}
