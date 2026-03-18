/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x1405D9E30
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x140220B60 (KeRemoveQueueEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(PKQUEUE Queue)
{
  __int64 v2; // rdx
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
    {
      EntryArray = 0LL;
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    }
    while ( EntryArray == (PLIST_ENTRY)128 );
    guard_dispatch_icall_no_overrides(EntryArray[1].Blink, v2);
  }
}
