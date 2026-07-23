/*
 * XREFs of HvpFreeMap @ 0x1408BDF90
 * Callers:
 *     HvpShrinkMap @ 0x140866938 (HvpShrinkMap.c)
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 *     HvpExpandMap @ 0x140ABBACC (HvpExpandMap.c)
 *     HvpInitMap @ 0x140ABBC40 (HvpInitMap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall HvpFreeMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // edi
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = 1023;
    if ( a4 < 0x400 )
      v5 = a4;
    while ( a3 <= v5 )
    {
      v8 = *(_QWORD *)(a2 + 8LL * a3);
      if ( v8 )
      {
        result = (_UNKNOWN **)guard_dispatch_icall_no_overrides(v8, 12288LL);
        *(_QWORD *)(a2 + 8LL * a3) = 0LL;
      }
      ++a3;
    }
  }
  return result;
}
