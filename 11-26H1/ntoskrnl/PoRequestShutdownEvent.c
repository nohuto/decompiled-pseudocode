/*
 * XREFs of PoRequestShutdownEvent @ 0x140AF1030
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestShutdownWait @ 0x140AF1078 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = stru_140F11D08.PriorityFloorCounts;
    return 0;
  }
  return result;
}
