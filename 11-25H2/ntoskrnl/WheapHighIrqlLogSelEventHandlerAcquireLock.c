/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140652418
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x140652010 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x140652080 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEvent @ 0x140652440 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&WheapDispatchPtr.Dpc.SystemArgument2 + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
