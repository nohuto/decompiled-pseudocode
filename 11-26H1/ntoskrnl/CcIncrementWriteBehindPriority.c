/*
 * XREFs of CcIncrementWriteBehindPriority @ 0x14038B454
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 */

void __fastcall CcIncrementWriteBehindPriority(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_DWORD *)(a1 + 560);
  if ( v4 == -1 )
    v4 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v5 = v4 % CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v5 + 64);
  else
    v6 = *(_QWORD *)(v1 + 8 * v5 + 128);
  v7 = *(_QWORD *)(a1 + 504);
  v8 = *(_QWORD *)(v6 + 16);
  if ( v7 && (v7 & 1) == 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 832), &LockHandle);
    v9 = *(_QWORD *)(a1 + 504);
    if ( !v9 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return;
    }
    *(_QWORD *)(a1 + 504) = v9 | 1;
    v10 = *(_QWORD *)v9;
    v11 = *(_QWORD **)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) == v9 && *v11 == v9 )
    {
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)v9 = 0LL;
      v12 = *(unsigned __int64 **)(v6 + 80);
      if ( *v12 == v6 + 72 )
      {
        *(_QWORD *)v9 = v6 + 72;
        *(_QWORD *)(v9 + 8) = v12;
        *v12 = v9;
        *(_QWORD *)(v6 + 80) = v9;
        if ( *(_BYTE *)(v6 + 196) )
          goto LABEL_19;
        v13 = (_QWORD *)(v6 + 56);
        v14 = *(__int64 **)(v6 + 56);
        if ( v14 == (__int64 *)(v6 + 56) )
          goto LABEL_19;
        v2 = *(_QWORD **)(v6 + 56);
        v15 = *v14;
        if ( (_QWORD *)v14[1] == v13 && *(__int64 **)(v15 + 8) == v14 )
        {
          *v13 = v15;
          *(_QWORD *)(v15 + 8) = v13;
          ++*(_DWORD *)(v6 + 48);
          CcReferencePartitionAndPrivateVolumeCacheMap(v1, v8);
LABEL_19:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v2 )
          {
            *v2 = 0LL;
            ExQueueWorkItemToPartition(v2, 0, *(_DWORD *)(v6 + 24));
          }
          return;
        }
      }
    }
    __fastfail(3u);
  }
}
