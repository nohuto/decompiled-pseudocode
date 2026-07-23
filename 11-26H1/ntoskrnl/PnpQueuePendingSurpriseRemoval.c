/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x1409B317C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x1409B30F0 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopMergeRelationLists @ 0x1407B56A4 (IopMergeRelationLists.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     IopCheckIfMergeRequired @ 0x1409B2828 (IopCheckIfMergeRequired.c)
 *     IopIsDescendantNode @ 0x1409B3630 (IopIsDescendantNode.c)
 *     IopAllocateRelationList @ 0x1409B38E8 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1409B5B30 (IopFreeRelationList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, void **a2, int a3, int a4)
{
  unsigned int **v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rbx
  unsigned int **v8; // rdi
  PVOID *v9; // r14
  PVOID *v10; // r12
  PVOID *v11; // r15
  PVOID *v12; // rsi
  unsigned int **RelationList; // rax
  __int64 *v14; // rax
  __int64 v15; // rsi
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r11
  __int64 v20; // r11
  PVOID *v21; // rcx
  PVOID **v22; // rax
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF
  int v24; // [rsp+70h] [rbp+18h]
  int v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v4 = (unsigned int **)*a2;
  CurrentThread = KeGetCurrentThread();
  Pool2 = 0LL;
  v8 = (unsigned int **)*a2;
  *a2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v9 = (PVOID *)IopPendingSurpriseRemovals;
  while ( 1 )
  {
    v10 = v9;
    if ( v9 == &IopPendingSurpriseRemovals )
      break;
    v11 = v9;
    v12 = v9;
    v9 = (PVOID *)*v9;
    if ( v11[7] == a1 )
    {
      Pool2 = (__int64)v12;
      v8 = (unsigned int **)v11[8];
      break;
    }
    if ( IopCheckIfMergeRequired(v11[8], v8) )
    {
      if ( v8 == v4 )
      {
        Pool2 = (__int64)v11;
        RelationList = (unsigned int **)IopAllocateRelationList(3LL);
        v8 = RelationList;
        if ( !RelationList )
        {
          v8 = v4;
          PnpReleaseDependencyRelationsLock();
          goto LABEL_9;
        }
        IopMergeRelationLists(RelationList, (__int64)v4, 0);
      }
      IopMergeRelationLists(v8, (__int64)v11[8], 1);
      IopFreeRelationList(v11[8]);
      if ( (PVOID *)Pool2 == v12 )
      {
        *(_QWORD *)(Pool2 + 64) = 0LL;
      }
      else
      {
        v21 = (PVOID *)*v10;
        if ( *((PVOID **)*v10 + 1) != v12 )
          goto LABEL_11;
        v22 = (PVOID **)v12[1];
        if ( *v22 != v12 )
          goto LABEL_11;
        *v22 = v21;
        v21[1] = v22;
        ExFreePoolWithTag(v12, 0);
      }
    }
  }
  PnpReleaseDependencyRelationsLock();
  if ( v4 != v8 )
  {
    IopFreeRelationList(v4);
    goto LABEL_13;
  }
LABEL_9:
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    Interval.QuadPart = -10000LL;
    do
    {
      KeDelayExecutionThread(0, 0, &Interval);
      Pool2 = ExAllocatePool2(0x40uLL);
    }
    while ( !Pool2 );
  }
  v14 = (__int64 *)qword_140F84428;
  if ( *(PVOID **)qword_140F84428 != &IopPendingSurpriseRemovals )
LABEL_11:
    __fastfail(3u);
  *(_QWORD *)Pool2 = &IopPendingSurpriseRemovals;
  *(_QWORD *)(Pool2 + 8) = v14;
  *v14 = Pool2;
  qword_140F84428 = Pool2;
LABEL_13:
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *v8;
    if ( (unsigned int)v15 >= **v8 || !v16 )
      break;
    _mm_lfence();
    v17 = 3 * v15;
    v15 = (unsigned int)(v15 + 1);
    v18 = *(_QWORD *)&v16[2 * v17 + 4];
    if ( v18 )
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
    else
      v19 = 0LL;
    if ( (*(_BYTE *)(v19 + 648) & 1) != 0 && (unsigned __int8)IopIsDescendantNode(v8) )
    {
      *(_QWORD *)(v20 + 648) &= ~1uLL;
      --*(_DWORD *)(*(_QWORD *)(v20 + 648) + 656LL);
    }
  }
  *(_DWORD *)(Pool2 + 84) = v24;
  *(_DWORD *)(Pool2 + 108) = v25;
  *(_QWORD *)(Pool2 + 56) = a1;
  *(_BYTE *)(Pool2 + 88) = 0;
  *(_QWORD *)(Pool2 + 64) = v8;
  *(_BYTE *)(Pool2 + 104) = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KeLeaveCriticalRegion();
}
