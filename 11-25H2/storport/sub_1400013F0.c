/*
 * XREFs of sub_1400013F0 @ 0x1400013F0
 * Callers:
 *     WorkerRoutine @ 0x1400013D0 (WorkerRoutine.c)
 *     sub_14002B140 @ 0x14002B140 (sub_14002B140.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 * Callees:
 *     sub_14000172C @ 0x14000172C (sub_14000172C.c)
 *     sub_1400017E0 @ 0x1400017E0 (sub_1400017E0.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400A6140 @ 0x1400A6140 (sub_1400A6140.c)
 *     sub_1400A6224 @ 0x1400A6224 (sub_1400A6224.c)
 */

char __fastcall sub_1400013F0(unsigned int *Context)
{
  char v2; // r15
  __int64 v4; // r9
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r8d
  struct _SLIST_ENTRY *v10; // rsi
  ULONG TimeIncrement; // eax
  int v12; // r8d
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  union _SLIST_HEADER *v17; // rcx
  unsigned int v18; // r8d
  PIO_WORKITEM WorkItem; // rax

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
          (PIO_WORKITEM_ROUTINE)WorkerRoutine,
          CriticalWorkQueue,
          Context);
    }
    return 0;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)Context + 47, 1, 0) )
    return 0;
  if ( Context[34] < Context[36] )
  {
    if ( *((_QWORD *)Context + 21) )
    {
      if ( MEMORY[0xFFFFF78000000320] < *((_QWORD *)Context + 21) )
        goto LABEL_9;
      *((_QWORD *)Context + 21) = 0LL;
    }
    v4 = *((_QWORD *)Context + 19);
    v5 = *(_QWORD *)(v4 + 64);
    if ( *((_BYTE *)Context + 184) )
    {
      v8 = sub_1400143E0(64LL, Context[37], 1397907794LL, v4);
    }
    else
    {
      v6 = sub_14000172C(Context);
      v8 = sub_1400017E0(Context[37], v7, v5, v6);
    }
    v10 = (struct _SLIST_ENTRY *)v8;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 48) = 523124044;
      *(_DWORD *)(v8 + 792) = Context[45];
      v14 = Context[45];
      if ( v14 )
        *(_QWORD *)(v8 + 808) = v8 + Context[37] - v14;
      if ( *((_BYTE *)Context + 184) )
        *(_QWORD *)(v8 + 840) = 0LL;
      Context[41] = 0;
      v2 = 1;
      *(_QWORD *)(v8 + 32) = Context;
      if ( (byte_1401694F0 & 0x10) != 0 )
        sub_1400A6140(
          Context[34] + 1,
          Context[34],
          v9,
          *(_QWORD *)(v5 + 48),
          *(_DWORD *)(v5 + 56),
          Context[48],
          Context[34],
          Context[34] + 1,
          Context[36]);
      _InterlockedAdd((volatile signed __int32 *)Context + 34, 1u);
      v15 = Context[34];
      Context[7] = v15;
      Context[8] = v15;
      v16 = Context[32];
      if ( v16 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 19) + 64LL) + 976LL);
        v17 = *(union _SLIST_HEADER **)(*((_QWORD *)Context + 8)
                                      + 8LL * (v16 * (HIDWORD(KeGetPcr()[1].LockArray) % v18) / v18));
      }
      else
      {
        v17 = (union _SLIST_HEADER *)(Context + 16);
      }
      ExpInterlockedPushEntrySList(v17, v10);
    }
    else
    {
      ++Context[40];
      ++Context[41];
      *((_QWORD *)Context + 21) = MEMORY[0xFFFFF78000000320];
      TimeIncrement = KeQueryTimeIncrement();
      v13 = Context[44] + 1;
      Context[44] = v13;
      *((_QWORD *)Context + 21) += 30 * (0x989680 / TimeIncrement);
      if ( (byte_1401694F0 & 0x20) != 0 )
        sub_1400A6224(
          v13,
          0x989680 % TimeIncrement,
          v12,
          *(_QWORD *)(v5 + 48),
          *(_DWORD *)(v5 + 56),
          Context[48],
          Context[7],
          Context[36],
          Context[40],
          Context[41],
          v13);
    }
  }
LABEL_9:
  Context[47] = 0;
  return v2;
}
