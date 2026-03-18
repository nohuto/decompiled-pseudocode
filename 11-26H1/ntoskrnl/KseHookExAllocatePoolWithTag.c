/*
 * XREFs of KseHookExAllocatePoolWithTag @ 0x1405FE2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall KseHookExAllocatePoolWithTag(__int64 a1, size_t a2)
{
  void *v3; // rax
  void *v4; // rbx

  v3 = (void *)guard_dispatch_icall_no_overrides(a1, a2);
  v4 = v3;
  if ( v3 )
    memset_0(v3, 0, a2);
  return v4;
}
