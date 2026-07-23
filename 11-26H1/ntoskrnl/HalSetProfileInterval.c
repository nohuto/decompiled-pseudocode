/*
 * XREFs of HalSetProfileInterval @ 0x140582250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalSetProfileInterval(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( (int)guard_dispatch_icall_no_overrides(0LL, &v2) >= 0 )
    return v2;
  else
    return 0LL;
}
