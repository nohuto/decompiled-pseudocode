/*
 * XREFs of PspSetRateControlProcessCallback @ 0x1407FF930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspSetRateControlProcessCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
    return guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 16));
  return result;
}
