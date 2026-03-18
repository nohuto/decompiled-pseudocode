/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406D72F8
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x1406D70E0 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x1406D7150 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEvent @ 0x1406D7320 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&CmpCallbackListLock.PropagateBoostsEntry.Next + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
