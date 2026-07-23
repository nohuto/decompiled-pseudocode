/*
 * XREFs of ExpCallProcessing @ 0x140428144
 * Callers:
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCallProcessing(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // r10
  __int64 result; // rax

  if ( a5 )
  {
    v5 = a5;
    if ( !a1 )
      v5 = a5 + 1;
    result = *v5;
    if ( *v5 )
      return guard_dispatch_icall_no_overrides(a2, a3);
  }
  return result;
}
