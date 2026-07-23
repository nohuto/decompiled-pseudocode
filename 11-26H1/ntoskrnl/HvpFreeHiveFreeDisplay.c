/*
 * XREFs of HvpFreeHiveFreeDisplay @ 0x1408BE23C
 * Callers:
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall HvpFreeHiveFreeDisplay(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (__int64 *)(a1 + 328);
  v3 = 2LL;
  do
  {
    v4 = v2;
    v5 = 24LL;
    do
    {
      if ( *v4 )
      {
        result = (_UNKNOWN **)guard_dispatch_icall_no_overrides(*v4, *((unsigned int *)v4 - 4));
        *((_DWORD *)v4 - 2) = 0;
        *v4 = 0LL;
        *((_DWORD *)v4 - 4) = 0;
      }
      v4 += 3;
      --v5;
    }
    while ( v5 );
    v2 += 79;
    --v3;
  }
  while ( v3 );
  return result;
}
