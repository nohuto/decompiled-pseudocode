/*
 * XREFs of RtlpGetPreviousProcessHeapDescriptor @ 0x180144E04
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801444C0 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpGetPreviousProcessHeapDescriptor(__int64 a1)
{
  __int64 *result; // rax

  result = (__int64 *)qword_1801CBF88;
  if ( a1 )
    result = *(__int64 **)(a1 + 8);
  if ( result == &RtlpProcessHeaps )
    return 0LL;
  return result;
}
