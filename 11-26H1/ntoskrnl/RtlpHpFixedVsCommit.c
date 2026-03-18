/*
 * XREFs of RtlpHpFixedVsCommit @ 0x1404DCAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpFixedVsCommit(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return guard_dispatch_icall_no_overrides(a1, &v3);
}
