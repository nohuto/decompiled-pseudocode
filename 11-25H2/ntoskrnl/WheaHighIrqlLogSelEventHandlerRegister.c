/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x140652010
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140652418 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(void *a1)
{
  void *v1; // rbx
  __int32 v2; // r9d
  int v3; // r10d
  __int64 v4; // r11

  v1 = a1;
  if ( LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) == v2 )
    {
      WheapDispatchPtr.Dpc.DpcData = v1;
      *(_QWORD *)&WheapDispatchPtr.ActiveThreadCount = v4;
      LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Dpc.SystemArgument2 + 1, v2);
  }
  return v3;
}
