/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x1406DB270
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406DB488 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(void *a1)
{
  void *v1; // rbx
  __int32 v2; // r9d
  int v3; // r10d
  void *v4; // r11

  v1 = a1;
  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] == v2 )
    {
      CmpContextListLock.SchedulerApc.SystemArgument1 = v1;
      CmpContextListLock.SchedulerApc.SystemArgument2 = v4;
      *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((volatile __int32 *)&CmpContextListLock.SchedulerApcFill5[60], v2);
  }
  return v3;
}
