/*
 * XREFs of CcDeletePrivateVolumeCacheMap @ 0x1403E7080
 * Callers:
 *     CcReapPrivateVolumeCachemap @ 0x14038BB90 (CcReapPrivateVolumeCachemap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405B487C (CcDrainDelayDeleteForPartitionExit.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403861F0 (CcDecrementVolumeUseCountWithDelete.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     CcForEachNumaNode @ 0x1403E7398 (CcForEachNumaNode.c)
 *     CcDeleteNumaNode @ 0x1403E7730 (CcDeleteNumaNode.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePrivateVolumeCacheMap(char *P)
{
  _QWORD *v1; // rbp
  __int64 v3; // rsi
  void *v4; // rcx
  __int64 v5; // rcx
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  void *v8; // rcx
  _QWORD **v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap-BEGIN: PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6));
  v3 = *((_QWORD *)P + 4);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap: PVCM:%p(vid:%2lx) Setting ExitEvent\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6));
  KeSetEvent((PRKEVENT)P + 49, 0, 0);
  KeSetEvent((PRKEVENT)P + 50, 0, 0);
  v4 = (void *)*((_QWORD *)P + 153);
  if ( v4 )
  {
    ZwWaitForSingleObject(v4, 0, 0LL);
    ZwClose(*((HANDLE *)P + 153));
    *((_QWORD *)P + 153) = 0LL;
  }
  v5 = *((_QWORD *)P + 5);
  if ( v5 )
    CcDecrementVolumeUseCountWithDelete(v5);
  while ( *((_QWORD *)P + 1) != 1LL )
    KeDelayExecutionThread(0, 0, &Cc5MicroSeconds);
  CcDereferencePartitionAndPrivateVolumeCacheMap(v3, (__int64)P);
  if ( P[984] )
  {
    P[984] = 0;
    KeCancelTimer((PKTIMER)(P + 920));
  }
  v6 = (_QWORD **)(P + 1560);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v14 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
LABEL_28:
      __fastfail(3u);
    *v6 = v14;
    v14[1] = v6;
    ExFreePoolWithTag(v7, 0x71576343u);
  }
  v8 = (void *)*((_QWORD *)P + 134);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x70546343u);
    *((_QWORD *)P + 134) = 0LL;
  }
  CcForEachNumaNode(CcUnInitializeAsyncReadForNodeHelper, v3, P, 0LL);
  CcForEachNumaNode(CcUninitializeAsyncLazywriteForNodeHelper, v3, P, 0LL);
  v9 = (_QWORD **)(P + 48);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 )
      goto LABEL_28;
    v11 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_28;
    *v9 = v11;
    v12 = v10 - 4;
    v11[1] = v9;
    CcDeleteNumaNode(v12);
    if ( v1 )
      v12 = v1;
    v1 = v12;
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x754E6343u);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap-END: PVCM:%p(vid:%2lx), PVCMCount:%lu\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6),
    *(_DWORD *)(v3 + 48) - 1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 768), &LockHandle);
  if ( (*(_DWORD *)(v3 + 48))-- == 1 )
    KeSetEvent((PRKEVENT)(v3 + 56), 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(P, 0x6D566343u);
}
