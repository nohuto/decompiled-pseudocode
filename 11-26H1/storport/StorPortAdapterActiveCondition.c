/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1400553B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x14002AE80 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DlrmFetchOrAllocateWorkItem @ 0x14007DC8C (DlrmFetchOrAllocateWorkItem.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, int a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 WorkItem; // rax
  int v9; // ecx
  int v10; // r8d
  KIRQL v11; // bl
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterActiveConditionStart,
      a3,
      **(_QWORD **)(a1 + 5024),
      *(_DWORD *)(a1 + 56),
      a2);
  _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(a1 + 5024) + 20LL), 0);
  if ( RaidIsAdapterControlSupported(a1 + 376, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, 1);
  if ( *(char *)(a1 + 104) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 6288);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 12) & 1) != 0 )
      {
        WorkItem = DlrmFetchOrAllocateWorkItem(*(_QWORD *)(a1 + 6288));
        if ( WorkItem )
        {
          *(_DWORD *)(WorkItem + 16) = 9;
          ExInterlockedInsertTailList((PLIST_ENTRY)(v7 + 144), (PLIST_ENTRY)WorkItem, (PKSPIN_LOCK)(v7 + 160));
          _InterlockedOr(v12, 0);
          KeSetEvent((PRKEVENT)(v7 + 88), 0, 0);
        }
      }
    }
  }
  LOBYTE(v5) = 1;
  if ( !(unsigned int)RaidResumeAdapterQueue(a1, v5, 0LL, v6) )
  {
    v11 = KfRaiseIrql(2u);
    RaidAdapterRestartQueues(a1, 0);
    KeLowerIrql(v11);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173442 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v9,
        (unsigned int)&EventAdapterActiveConditionStop,
        v10,
        **(_QWORD **)(a1 + 5024),
        *(_DWORD *)(a1 + 56),
        a2);
  }
}
