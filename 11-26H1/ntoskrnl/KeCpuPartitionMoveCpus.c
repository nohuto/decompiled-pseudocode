/*
 * XREFs of KeCpuPartitionMoveCpus @ 0x1405F6240
 * Callers:
 *     KeDeleteCpuPartition @ 0x1407BE174 (KeDeleteCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x1407F7C30 (NtSetInformationCpuPartition.c)
 *     PsCpuPartitionMoveCpus @ 0x1407F81A0 (PsCpuPartitionMoveCpus.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiAcquireCpuPartitionLock @ 0x1404D0C8C (KiAcquireCpuPartitionLock.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404D98B0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E8664 (KiUpdateSystemAvailableCpuState.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405F69E4 (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     KiCpuPartitionUpdatePrcbs @ 0x1405F6D7C (KiCpuPartitionUpdatePrcbs.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F6F08 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeCpuPartitionMoveCpus(__int64 a1, _WORD **a2, struct _KAFFINITY_EX *a3, char a4)
{
  unsigned int v5; // esi
  _WORD **v6; // r14
  __int64 v7; // r15
  void *Pool2; // r13
  __int64 v9; // rax
  void *v10; // r12
  struct _KAFFINITY_EX *v11; // r8
  struct _KAFFINITY_EX *v12; // r9
  unsigned __int16 Count; // r10
  unsigned __int16 v14; // bx
  unsigned __int16 v15; // bp
  unsigned __int16 i; // dx
  unsigned __int64 v17; // rcx
  struct _KAFFINITY_EX *v18; // r8
  unsigned __int16 v19; // dx
  _QWORD *v20; // rbp
  _QWORD *v21; // rdi
  unsigned __int16 v22; // r14
  __int64 v23; // rbx
  _QWORD *v24; // rdi
  unsigned __int16 v25; // r14
  __int64 v26; // rbx
  unsigned __int8 v28[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v29; // [rsp+34h] [rbp-44h]

  v28[0] = 0;
  v5 = 0;
  v6 = a2;
  v7 = a1;
  v29 = KiActiveGroups;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v9 = ExAllocatePool2(0x40uLL);
  v10 = (void *)v9;
  if ( Pool2 && v9 )
  {
    KiAcquireCpuPartitionLock((__int64)v6, v28);
    v11 = a3;
    v12 = (struct _KAFFINITY_EX *)*v6;
    Count = a3->Count;
    v14 = **v6;
    v15 = v14;
    if ( a3->Count >= v14 )
    {
      v15 = a3->Count;
      Count = **v6;
    }
    else
    {
      v11 = (struct _KAFFINITY_EX *)*v6;
    }
    for ( i = 0; i < Count; ++i )
    {
      v17 = a3->Bitmap[i];
      if ( (v17 & v12->Bitmap[i]) != v17 )
        goto LABEL_23;
    }
    if ( v11 != v12 )
    {
      while ( i < v15 )
      {
        if ( a3->Bitmap[i] )
          goto LABEL_23;
        ++i;
      }
    }
    if ( !a4 )
    {
      v18 = a3;
      v19 = 0;
      if ( a3->Count < v14 )
        v18 = (struct _KAFFINITY_EX *)*v6;
      while ( v19 < Count )
      {
        if ( a3->Bitmap[v19] != v12->Bitmap[v19] )
          goto LABEL_24;
        ++v19;
      }
      while ( v19 < v18->Count )
      {
        if ( v18->Bitmap[v19] )
          goto LABEL_24;
        ++v19;
      }
LABEL_23:
      v5 = -1073741811;
LABEL_26:
      KxReleaseSpinLock((PKSPIN_LOCK)v6 + 1);
      goto LABEL_43;
    }
LABEL_24:
    if ( v6 == (_WORD **)v7 )
    {
      v5 = 0;
      goto LABEL_26;
    }
    RtlSubtractAffinityEx((struct _KAFFINITY_EX *)*v6, a3, (__int64)*v6);
    if ( v6 == (_WORD **)KiSystemCpuPartition )
      v5 = KiModifySystemAllowedCpuSetsWithLock(0, 0, (_DWORD)a3, 0, 2);
    KxReleaseSpinLock((PKSPIN_LOCK)v6 + 1);
    KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 8));
    RtlOrAffinityEx(*(struct _KAFFINITY_EX **)v7, a3, *(_QWORD *)v7);
    KiCpuPartitionUpdatePrcbs(v7, a3);
    if ( v7 == KiSystemCpuPartition )
      v5 = KiModifySystemAllowedCpuSetsWithLock(0, 0, (_DWORD)a3, 0, 1);
    KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 8));
    KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
    v20 = v6 + 2;
    v21 = v6[2];
    if ( v21 != v6 + 2 )
    {
      v22 = v29;
      do
      {
        v23 = *(v21 - 2);
        v21 = (_QWORD *)*v21;
        KiAdjustProcessCpuSetsAfterCpuPartitionChange(v23, v10, Pool2, v22, 0LL);
        KiUpdateProcessAvailableCpuState(v23, 1);
      }
      while ( v21 != v20 );
      v6 = a2;
      v7 = a1;
    }
    v24 = *(_QWORD **)(v7 + 16);
    if ( v24 != (_QWORD *)(v7 + 16) )
    {
      v25 = v29;
      do
      {
        v26 = *(v24 - 2);
        v24 = (_QWORD *)*v24;
        KiAdjustProcessCpuSetsAfterCpuPartitionChange(v26, v10, Pool2, v25, 0LL);
        KiUpdateProcessAvailableCpuState(v26, 1);
      }
      while ( v24 != (_QWORD *)(v7 + 16) );
      v6 = a2;
      v7 = a1;
    }
    KxReleaseSpinLock(&KiCpuPartitionAssignmentLock);
    if ( v6 == (_WORD **)KiSystemCpuPartition || v7 == KiSystemCpuPartition )
      KiUpdateSystemAvailableCpuState();
    KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(v6 + 5));
    KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 40));
LABEL_43:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28[0]);
    __writecr8(v28[0]);
  }
  else
  {
    v5 = -1073741670;
    if ( !Pool2 )
      goto LABEL_48;
  }
  ExFreePoolWithTag(Pool2, 0);
LABEL_48:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v5;
}
