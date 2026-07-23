/*
 * XREFs of LdrpUpdateStatistics @ 0x18007E444
 * Callers:
 *     LdrpWorkCallback @ 0x18007E360 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 * Callees:
 *     <none>
 */

struct _TEB *LdrpUpdateStatistics()
{
  struct _TEB *result; // rax

  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    LdrpStatistics = LdrpWorkInProgress;
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_1801CA684;
  else
    ++dword_1801CA688;
  return result;
}
