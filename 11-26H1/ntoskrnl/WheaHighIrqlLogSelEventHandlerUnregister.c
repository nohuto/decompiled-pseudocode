/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x1406D7150
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406D72F8 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY *v2; // r9

  if ( LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    CmpCallbackListLock.IoSelfBoostsEntry.Next = v2;
    *(_QWORD *)CmpCallbackListLock.PriorityFloorCounts = v2;
    LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) = (_DWORD)v2;
    _InterlockedExchange((_DWORD *)&CmpCallbackListLock.PropagateBoostsEntry.Next + 1, (__int32)v2);
  }
  return result;
}
