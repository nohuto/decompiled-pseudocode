/*
 * XREFs of HvpAllocateMap @ 0x140ABAA20
 * Callers:
 *     HvpExpandMap @ 0x140ABA60C (HvpExpandMap.c)
 *     HvpInitMap @ 0x140ABA780 (HvpInitMap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall HvpAllocateMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  void *v7; // rax
  void *v8; // rsi
  __int64 v9; // rax

  if ( a4 >= 0x400 )
    return 0;
  while ( a3 <= a4 )
  {
    v7 = (void *)guard_dispatch_icall_no_overrides(12288LL, 0LL);
    v8 = v7;
    if ( !v7 )
      return 0;
    memset_0(v7, 0, 0x3000uLL);
    v9 = a3++;
    *(_QWORD *)(a2 + 8 * v9) = v8;
  }
  return 1;
}
