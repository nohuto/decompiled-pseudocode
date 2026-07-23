/*
 * XREFs of CcDeletePartition @ 0x1405B4A24
 * Callers:
 *     CcGetPartitionWithCreate @ 0x1403E5118 (CcGetPartitionWithCreate.c)
 *     CcCreatePartition @ 0x1405B4998 (CcCreatePartition.c)
 *     CcExitPartition @ 0x1405B4ED4 (CcExitPartition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     CcForEachNumaNode @ 0x1403E7398 (CcForEachNumaNode.c)
 *     CcDeleteNumaNode @ 0x1403E7730 (CcDeleteNumaNode.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405B487C (CcDrainDelayDeleteForPartitionExit.c)
 *     CcUninitializePartitionVacbs @ 0x1405B5808 (CcUninitializePartitionVacbs.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePartition(char *P)
{
  void *v2; // rbp
  void *v3; // rcx
  KIRQL v4; // al
  void *v5; // rcx
  _QWORD **v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD **v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeSetEvent((PRKEVENT)(P + 1304), 0, 0);
  CcDereferencePartition((__int64)P);
  v3 = (void *)*((_QWORD *)P + 169);
  if ( v3 )
  {
    ZwWaitForSingleObject(v3, 0, 0LL);
    ZwClose(*((HANDLE *)P + 169));
    *((_QWORD *)P + 169) = 0LL;
  }
  if ( P[1048] )
  {
    P[1048] = 0;
    KeCancelTimer((PKTIMER)(P + 984));
  }
  if ( P[1293] )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&EmpParseLock.InGlobalUpdateVpThreadPriorityList);
    --LOWORD(EmpParseLock.ReadTransferCount);
    *(_QWORD *)(*((_QWORD *)P + 1) + 8LL) = 0LL;
    KeReleaseSpinLock(&EmpParseLock.InGlobalUpdateVpThreadPriorityList, v4);
  }
  KeCancelTimer((PKTIMER)(P + 1376));
  P[1504] = 0;
  CcDrainDelayDeleteForPartitionExit((__int64)P);
  if ( CcEnablePerVolumeLazyWriter )
  {
    if ( *((_QWORD *)P + 162) )
    {
      KeWaitForSingleObject(P + 56, Executive, 0, 0, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 96, &LockHandle);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( CcEnablePerVolumeLazyWriter )
    {
      while ( *((char **)P + 12) == P + 96 )
        KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
    }
  }
  v5 = (void *)*((_QWORD *)P + 142);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x70546343u);
    *((_QWORD *)P + 142) = 0LL;
  }
  CcUninitializePartitionVacbs(P);
  if ( !CcEnablePerVolumeLazyWriter )
    CcForEachNumaNode((__int64)CcUnInitializeAsyncReadForNodeHelper, (__int64)P, 0LL);
  v6 = (_QWORD **)(P + 16);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
LABEL_31:
      __fastfail(3u);
    *v6 = v8;
    v9 = (__int64)(v7 - 4);
    v8[1] = v6;
    CcDeleteNumaNode(v9);
    if ( v2 )
      v9 = (__int64)v2;
    v2 = (void *)v9;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x754E6343u);
  v10 = (_QWORD **)(P + 96);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == v10 )
      break;
    if ( (_QWORD **)v11[1] != v10 )
      goto LABEL_31;
    v12 = (_QWORD *)*v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_31;
    *v10 = v12;
    v12[1] = v10;
    ExFreePoolWithTag(v11, 0x71576343u);
  }
  DbgPrintEx(0x7Fu, 2u, "CcDeletePartition: Partition Deleted=%p, PartitionObject=%p \n", P, *((const void **)P + 1));
  ExFreePoolWithTag(P, 0x72506343u);
}
