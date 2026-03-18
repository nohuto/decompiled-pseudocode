/*
 * XREFs of EtwTraceEndCallback @ 0x1400FE280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall EtwTraceEndCallback(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 v3; // rcx

  result = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  v3 = 0LL;
  if ( result )
    v3 = *result;
  --*(_BYTE *)(v3 + 1456);
  return result;
}
