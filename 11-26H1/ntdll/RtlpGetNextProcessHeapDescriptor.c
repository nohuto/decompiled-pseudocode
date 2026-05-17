/*
 * XREFs of RtlpGetNextProcessHeapDescriptor @ 0x1800DBCA0
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801445D0 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpGetNextProcessHeapDescriptor(__int64 **a1)
{
  __int64 *result; // rax

  result = (__int64 *)RtlpProcessHeaps;
  if ( a1 )
    result = *a1;
  if ( result == &RtlpProcessHeaps )
    return 0LL;
  return result;
}
