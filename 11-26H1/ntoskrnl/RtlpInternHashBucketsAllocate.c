/*
 * XREFs of RtlpInternHashBucketsAllocate @ 0x14080F31C
 * Callers:
 *     RtlInternTableIntern @ 0x1409CA278 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpInternHashBucketsAllocate(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a2, a1);
}
