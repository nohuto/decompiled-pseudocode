/*
 * XREFs of PoRequestShutdownEvent @ 0x140AF3C70
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestShutdownWait @ 0x140AF3CB8 (PopRequestShutdownWait.c)
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
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}
