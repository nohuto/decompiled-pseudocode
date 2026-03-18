/*
 * XREFs of EtwTraceBeginCallback @ 0x1400BB390
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 *EtwTraceBeginCallback()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  result = (__int64 *)W32GetCurrentThreadNonPaged();
  v1 = 0LL;
  if ( result )
    v1 = *result;
  ++*(_BYTE *)(v1 + 1456);
  return result;
}
