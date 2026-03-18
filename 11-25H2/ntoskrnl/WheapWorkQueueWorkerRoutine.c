/*
 * XREFs of WheapWorkQueueWorkerRoutine @ 0x140354510
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x1403546E0 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapWorkQueueWorkerRoutine(PLIST_ENTRY ListHead)
{
  PLIST_ENTRY v2; // rax
  __int64 result; // rax

  do
  {
    v2 = ExInterlockedRemoveHeadList(ListHead, (PKSPIN_LOCK)&ListHead[1]);
    guard_dispatch_icall_no_overrides(ListHead, v2);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&ListHead[1].Blink, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
