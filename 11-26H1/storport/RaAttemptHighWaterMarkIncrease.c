/*
 * XREFs of RaAttemptHighWaterMarkIncrease @ 0x14004C760
 * Callers:
 *     StorNextIoGatewayItem @ 0x14002F7C8 (StorNextIoGatewayItem.c)
 *     RaAttemptHighWaterMarkIncreasePassive @ 0x14004C740 (RaAttemptHighWaterMarkIncreasePassive.c)
 *     StorSubmitIoGatewayItem @ 0x1400563B0 (StorSubmitIoGatewayItem.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x140025578 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     StorGetPreferredNodeNumber @ 0x1400257D0 (StorGetPreferredNodeNumber.c)
 *     McTemplateK0zqqqqq_EtwWriteTransfer @ 0x1400AEB50 (McTemplateK0zqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0zqqqqqqq_EtwWriteTransfer @ 0x1400AEC34 (McTemplateK0zqqqqqqq_EtwWriteTransfer.c)
 */

char __fastcall RaAttemptHighWaterMarkIncrease(unsigned int *Context)
{
  char v2; // r15
  PIO_WORKITEM WorkItem; // rax
  __int64 v5; // r9
  __int64 v6; // r14
  unsigned int v7; // ebx
  int PreferredNodeNumber; // eax
  __int64 v9; // rdx
  __int64 Pool; // rax
  int v11; // r8d
  struct _SLIST_ENTRY *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  union _SLIST_HEADER *v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rbx
  ULONG TimeIncrement; // eax
  int v19; // r8d
  int v20; // ecx

  v2 = 0;
  if ( KeGetCurrentIrql() && !*((_BYTE *)Context + 184) )
  {
    if ( *((_QWORD *)Context + 36)
      || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)Context + 19) + 64LL) + 8LL)),
          (*((_QWORD *)Context + 36) = WorkItem) != 0LL) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 76, 1, 0) )
        IoQueueWorkItem(
          *((PIO_WORKITEM *)Context + 36),
          (PIO_WORKITEM_ROUTINE)RaAttemptHighWaterMarkIncreasePassive,
          CriticalWorkQueue,
          Context);
    }
    return 0;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)Context + 47, 1, 0) )
    return 0;
  if ( Context[34] < Context[36] )
  {
    if ( !*((_QWORD *)Context + 21) )
      goto LABEL_13;
    if ( MEMORY[0xFFFFF78000000320] >= *((_QWORD *)Context + 21) )
    {
      *((_QWORD *)Context + 21) = 0LL;
LABEL_13:
      v5 = *((_QWORD *)Context + 19);
      v6 = *(_QWORD *)(v5 + 64);
      if ( *((_BYTE *)Context + 184) )
      {
        Pool = RaidAllocatePool(64LL, Context[37], 1397907794LL, v5);
      }
      else
      {
        v7 = Context[37];
        PreferredNodeNumber = StorGetPreferredNodeNumber((__int64)Context);
        Pool = StorAllocateContiguousIoResourcesWithPreferredNode(v7, v9, (_QWORD *)v6, PreferredNodeNumber);
      }
      v12 = (struct _SLIST_ENTRY *)Pool;
      if ( Pool )
      {
        *(_DWORD *)(Pool + 48) = 523124044;
        *(_DWORD *)(Pool + 792) = Context[45];
        v13 = Context[45];
        if ( v13 )
          *(_QWORD *)(Pool + 808) = Pool + Context[37] - v13;
        if ( *((_BYTE *)Context + 184) )
          *(_QWORD *)(Pool + 840) = 0LL;
        Context[41] = 0;
        v2 = 1;
        *(_QWORD *)(Pool + 32) = Context;
        if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
          McTemplateK0zqqqqq_EtwWriteTransfer(
            Context[34] + 1,
            Context[34],
            v11,
            *(_QWORD *)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            Context[48],
            Context[34],
            Context[34] + 1,
            Context[36]);
        _InterlockedAdd((volatile signed __int32 *)Context + 34, 1u);
        Context[7] = Context[34];
        Context[8] = Context[7];
        v14 = Context[32];
        if ( v14 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 19) + 64LL) + 1040LL);
          v15 = *(union _SLIST_HEADER **)(*((_QWORD *)Context + 8)
                                        + 8LL * (v14 * (HIDWORD(KeGetPcr()[1].LockArray) % v16) / v16));
        }
        else
        {
          v15 = (union _SLIST_HEADER *)(Context + 16);
        }
        ExpInterlockedPushEntrySList(v15, v12);
      }
      else
      {
        ++Context[40];
        ++Context[41];
        v17 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)Context + 21) = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v20 = Context[44] + 1;
        Context[44] = v20;
        *((_QWORD *)Context + 21) = v17 + 30 * (0x989680 / TimeIncrement);
        if ( (Microsoft_Windows_StorPortEnableBits & 0x20) != 0 )
          McTemplateK0zqqqqqqq_EtwWriteTransfer(
            v20,
            0x989680 % TimeIncrement,
            v19,
            *(_QWORD *)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            Context[48],
            Context[7],
            Context[36],
            Context[40],
            Context[41],
            v20);
      }
    }
  }
  Context[47] = 0;
  return v2;
}
