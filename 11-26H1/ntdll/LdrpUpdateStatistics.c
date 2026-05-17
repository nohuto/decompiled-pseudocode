/*
 * XREFs of LdrpUpdateStatistics @ 0x1800870D4
 * Callers:
 *     LdrpWorkCallback @ 0x180086FF0 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
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
    ++dword_1801CB624;
  else
    ++dword_1801CB628;
  return result;
}
