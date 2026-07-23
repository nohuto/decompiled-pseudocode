/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x1405E7550
 * Callers:
 *     NtQueryAuxiliaryCounterFrequency @ 0x14084B7A0 (NtQueryAuxiliaryCounterFrequency.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeQueryAuxiliaryCounterFrequency(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
