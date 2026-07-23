/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406DB488
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x1406DB270 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x1406DB2E0 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEvent @ 0x1406DB4B0 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)&CmpContextListLock.SchedulerApcFill5[60], 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
