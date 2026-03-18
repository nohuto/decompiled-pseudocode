/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x140652080
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140652418 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  void *v2; // r9

  if ( LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    WheapDispatchPtr.Dpc.DpcData = v2;
    *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount = v2;
    LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) = (_DWORD)v2;
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Dpc.SystemArgument2 + 1, (__int32)v2);
  }
  return result;
}
