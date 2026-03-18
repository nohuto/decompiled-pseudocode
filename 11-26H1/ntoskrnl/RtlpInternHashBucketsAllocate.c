/*
 * XREFs of RtlpInternHashBucketsAllocate @ 0x14080988C
 * Callers:
 *     RtlInternTableIntern @ 0x14094E938 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpInternHashBucketsAllocate(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a2, a1);
}
