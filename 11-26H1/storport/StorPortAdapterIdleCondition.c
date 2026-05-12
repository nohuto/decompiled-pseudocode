/*
 * XREFs of StorPortAdapterIdleCondition @ 0x140055510
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x14002AE80 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DlrmFetchOrAllocateWorkItem @ 0x14007DC8C (DlrmFetchOrAllocateWorkItem.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rdi
  __int64 WorkItem; // rax
  __int64 result; // rax
  int v8; // ecx
  int v9; // r8d
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      a3,
      **(_QWORD **)(a1 + 5024),
      *(_DWORD *)(a1 + 56),
      a2);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a1 + 5024) + 20LL), 0);
  RaidPauseAdapterQueue(a1);
  if ( RaidIsAdapterControlSupported(a1 + 376, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, 0);
  if ( *(char *)(a1 + 104) >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 6288);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 12) & 1) != 0 )
      {
        WorkItem = DlrmFetchOrAllocateWorkItem(*(_QWORD *)(a1 + 6288));
        if ( WorkItem )
        {
          *(_DWORD *)(WorkItem + 16) = 8;
          ExInterlockedInsertTailList((PLIST_ENTRY)(v5 + 144), (PLIST_ENTRY)WorkItem, (PKSPIN_LOCK)(v5 + 160));
          _InterlockedOr(v10, 0);
          KeSetEvent((PRKEVENT)(v5 + 88), 0, 0);
        }
      }
    }
  }
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 5024), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173442 & 0x10) != 0 )
      return McTemplateK0pqq_EtwWriteTransfer(
               v8,
               (unsigned int)&EventAdapterIdleConditionStop,
               v9,
               **(_QWORD **)(a1 + 5024),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}
