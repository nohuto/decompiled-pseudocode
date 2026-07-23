/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x1406DB2E0
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406DB488 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  void *v2; // r9

  if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    CmpContextListLock.SchedulerApc.SystemArgument1 = v2;
    CmpContextListLock.SchedulerApc.SystemArgument2 = v2;
    *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] = (_DWORD)v2;
    _InterlockedExchange((volatile __int32 *)&CmpContextListLock.SchedulerApcFill5[60], (__int32)v2);
  }
  return result;
}
