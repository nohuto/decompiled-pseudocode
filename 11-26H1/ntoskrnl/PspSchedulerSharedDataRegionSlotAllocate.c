/*
 * XREFs of PspSchedulerSharedDataRegionSlotAllocate @ 0x14094CB6C
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     KeSwappablePageGetLockedAddress @ 0x140230E2C (KeSwappablePageGetLockedAddress.c)
 *     KeSwappablePageReference @ 0x140230E44 (KeSwappablePageReference.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140436600 (ObReferenceObjectByPointerWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PspSchedulerSharedDataRegionSlotAllocate(struct _KTHREAD *a1, __int64 a2, _QWORD *a3)
{
  _KPROCESS *v6; // rbx
  NTSTATUS v7; // esi
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KTHREAD *CurrentThread; // rcx
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // rcx
  __int64 LockedAddress; // rax
  struct _KLOCK_ENTRIES *v20; // r9
  struct _KTHREAD *v21; // rax
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // r14
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  if ( a1 != KeGetCurrentThread() )
    return (unsigned int)-1073741637;
  v6 = *(_KPROCESS **)(a2 + 160);
  if ( v6 != KeGetCurrentThread()->ApcState.Process || v6 != PsGetCurrentThreadProcess() || a1[1].Process )
    return (unsigned int)-1073741637;
  v7 = ObReferenceObjectByPointerWithTag((PVOID)a2, 1u, PspSchedulerSharedDataType, 0, 0x61537350u);
  if ( v7 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire(a2 + 200, 0LL, 0LL, v8);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v11, a2 + 200);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a2 + 208), 1u, *(_DWORD *)(a2 + 224));
    v15 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
    {
      v7 = -1073741670;
    }
    else
    {
      *(_DWORD *)(a2 + 224) = ClearBitsAndSet + 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 200));
      KeAbPostRelease(a2 + 200);
      KeLeaveCriticalRegion();
      v16 = *(unsigned int *)(a2 + 192);
      v17 = (unsigned int)v15 >> 6;
      if ( _bittest64(&v16, v17) )
        goto LABEL_16;
      RegionSize = 4096LL;
      BaseAddress = (PVOID)(*(_QWORD *)(a2 + 184) + (unsigned int)((_DWORD)v17 << 12));
      v7 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( v7 >= 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 192), v17);
LABEL_16:
        memset_0((void *)((v15 << 6) + *(_QWORD *)(a2 + 176)), 0, 0x40uLL);
        a1->SchedulerSharedOffset = (v15 & 0x3F) << 6;
        v18 = a2 + 80 * v17;
        a1->SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)v18;
        KeSwappablePageReference(v18);
        LockedAddress = KeSwappablePageGetLockedAddress(&a1->SchedulerSharedSwappablePage->RegionStart);
        if ( LockedAddress )
          a1->SchedulerSharedSystemSlot = (void *)(LockedAddress + a1->SchedulerSharedOffset);
        a1[1].Process = (_KPROCESS *)a2;
        if ( a3 )
          *a3 = (v15 << 6) + *(_QWORD *)(a2 + 184);
        return (unsigned int)v7;
      }
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      v22 = (AutoBoost *)KeAbPreAcquire(a2 + 200, 0LL, 0LL, v20);
      v24 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v22, a2 + 200);
      if ( v24 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v24, v23);
        else
          *((_BYTE *)v24 + 10) = 1;
      }
      *(_BYTE *)((v15 >> 3) + *(_QWORD *)(a2 + 216)) &= ~(1 << (v15 & 7));
      if ( *(_DWORD *)(a2 + 224) > (unsigned int)v15 )
        *(_DWORD *)(a2 + 224) = v15;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 200));
    KeAbPostRelease(a2 + 200);
    KeLeaveCriticalRegion();
    ObfDereferenceObjectWithTag((PVOID)a2, 0x61537350u);
  }
  return (unsigned int)v7;
}
