/*
 * XREFs of HalDmaRegisterFaultCallback @ 0x1405A3540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalDmaRegisterFaultCallback(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !*a2 )
    return 3221225712LL;
  v3 = *(_QWORD *)(a1 + 544);
  if ( !v3 )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(v3, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741584 )
      return 3221225659LL;
    if ( (_DWORD)result == -1073741582 )
      return 3221225712LL;
  }
  return result;
}
