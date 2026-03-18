/*
 * XREFs of MmFlushAllPagesEx @ 0x1406F90D0
 * Callers:
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402580F8 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x140504838 (MiFlushAllPages.c)
 */

__int64 *__fastcall MmFlushAllPagesEx(char a1, unsigned int a2)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v6; // rbx

  for ( i = 0LL; ; i = v6 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v6 = result;
    if ( !result )
      break;
    MiFlushAllPages(*result, a1, a2);
  }
  return result;
}
