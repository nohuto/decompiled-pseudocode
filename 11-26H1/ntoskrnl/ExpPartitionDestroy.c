/*
 * XREFs of ExpPartitionDestroy @ 0x14083FAC8
 * Callers:
 *     PspTeardownPartition @ 0x1407FE050 (PspTeardownPartition.c)
 *     ExpPartitionInitialize @ 0x14083FCA4 (ExpPartitionInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeIsNodeInitialized @ 0x14038227C (KeIsNodeInitialized.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ZwWaitForSingleObject @ 0x140723470 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ExpWorkQueueDestroy @ 0x14083FEE0 (ExpWorkQueueDestroy.c)
 *     ExpWorkQueueHealthMetricsFree @ 0x140840068 (ExpWorkQueueHealthMetricsFree.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpPartitionDestroy(PVOID P)
{
  unsigned __int16 i; // si
  __int64 v3; // rdi
  unsigned __int16 j; // di
  unsigned __int16 *v5; // r15
  int k; // r14d
  unsigned int m; // ebp
  ULONG_PTR v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  void *v11; // rcx

  if ( *((_QWORD *)P + 2) )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v3 = *(_QWORD *)(*((_QWORD *)P + 2) + 8LL * i);
      if ( v3 )
      {
        if ( *(_QWORD *)(v3 + 264) )
        {
          *(_DWORD *)(v3 + 272) = 1;
          KeSetEvent((PRKEVENT)(v3 + 16), 0, 0);
          ZwWaitForSingleObject(*(HANDLE *)(v3 + 264), 0, 0LL);
          ZwClose(*(HANDLE *)(v3 + 264));
        }
        KeCancelTimer2(v3 + 128);
        KeCancelTimer((PKTIMER)(v3 + 40));
        KeFlushQueuedDpcs();
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 2) + 8LL * i), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 2), 0);
  }
  if ( *((_QWORD *)P + 1) )
  {
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      if ( KeIsNodeInitialized(j) )
        v5 = (unsigned __int16 *)KeNodeBlock[j];
      else
        v5 = 0LL;
      for ( k = 0; k < 8; ++k )
      {
        for ( m = 0; m < *((_DWORD *)v5 + 30); ++m )
        {
          v8 = 0LL;
          v9 = *((_QWORD *)P + 1);
          v10 = m + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[32] * (k + 8 * *v5);
          if ( (*(_QWORD *)(v9 + 8 * v10) & 1) == 0 )
            v8 = *(_QWORD *)(v9 + 8 * v10);
          if ( v8 )
          {
            if ( *(_DWORD *)(v8 + 4) )
              KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, v8, 0LL);
            v11 = *(void **)(v8 + 744);
            if ( v11 )
              ExpWorkQueueHealthMetricsFree(v11);
            ExpWorkQueueDestroy(v8);
            ExFreePoolWithTag((PVOID)v8, 0);
          }
        }
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 1), 0);
  }
  ExFreePoolWithTag(P, 0);
}
