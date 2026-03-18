/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1406F7E2C
 * Callers:
 *     EtwpSetMark @ 0x140775508 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402580F8 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406F79C4 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}
