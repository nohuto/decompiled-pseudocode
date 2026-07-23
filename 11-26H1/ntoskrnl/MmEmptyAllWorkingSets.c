/*
 * XREFs of MmEmptyAllWorkingSets @ 0x1406FCAF8
 * Callers:
 *     EtwpSetMark @ 0x140778508 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406FC690 (MiEmptyAllWorkingSets.c)
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
