/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x1406D70E0
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406D72F8 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(struct _SINGLE_LIST_ENTRY *a1)
{
  struct _SINGLE_LIST_ENTRY *v1; // rbx
  __int32 v2; // r9d
  int v3; // r10d
  __int64 v4; // r11

  v1 = a1;
  if ( LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) == v2 )
    {
      CmpCallbackListLock.IoSelfBoostsEntry.Next = v1;
      *(_QWORD *)CmpCallbackListLock.PriorityFloorCounts = v4;
      LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((_DWORD *)&CmpCallbackListLock.PropagateBoostsEntry.Next + 1, v2);
  }
  return v3;
}
