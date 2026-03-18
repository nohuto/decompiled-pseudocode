/*
 * XREFs of ExInitializePagedLookasideListInternal @ 0x140498DA0
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14078D880 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407C1414 (AlpcpInitSystem.c)
 *     ExInitializePagedLookasideList @ 0x140B31D30 (ExInitializePagedLookasideList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
 */

char __fastcall ExInitializePagedLookasideListInternal(
        __int64 a1,
        PVOID (__fastcall *a2)(int a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  int v12; // ebx
  PVOID (__fastcall *v13)(int, SIZE_T, ULONG); // rax
  void (__stdcall *v14)(PVOID); // rax
  KIRQL v15; // dl
  struct _LIST_ENTRY ****v16; // rcx
  struct _LIST_ENTRY ***v17; // rax
  char result; // al
  unsigned int v19; // r10d

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  v12 = a4 | 1;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  v13 = ExAllocatePoolZero;
  if ( a2 )
    v13 = a2;
  *(_WORD *)(a1 + 18) = 256;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 48) = v13;
  v14 = ExFreePool;
  if ( a3 )
    v14 = a3;
  *(_QWORD *)(a1 + 56) = v14;
  *(_QWORD *)(a1 + 80) = 0LL;
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.1008);
  if ( a8 )
  {
    *(_WORD *)(a1 + 16) = a7;
    *(_WORD *)(a1 + 18) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v16 = *(struct _LIST_ENTRY *****)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor;
  v17 = (struct _LIST_ENTRY ***)(a1 + 64);
  if ( **(struct _KTHREAD ***)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList )
    __fastfail(3u);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor;
  *v17 = &ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  *v16 = v17;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor = a1 + 64;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.1008, v15);
  result = DifObjTrkIsKvEnabledForPlugin(48LL);
  if ( result )
    return DifObjTrkInsertItem(v19, a1, 128LL, 0LL);
  return result;
}
