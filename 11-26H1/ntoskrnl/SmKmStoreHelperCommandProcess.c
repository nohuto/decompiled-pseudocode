/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x140382C98
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140395A70 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140501F24 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x140281020 (SmFpFree.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MmStoreProbeAndLockPages @ 0x1402F0670 (MmStoreProbeAndLockPages.c)
 *     SmFpAllocate @ 0x14035D180 (SmFpAllocate.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x1403825F0 (PsGetPagePriorityThread.c)
 *     SmKmFreeMdlForLock @ 0x14038302C (SmKmFreeMdlForLock.c)
 *     PsSetPagePriorityThread @ 0x140383060 (PsSetPagePriorityThread.c)
 *     SmKmAllocateMdlForLock @ 0x1403944B0 (SmKmAllocateMdlForLock.c)
 *     SmAcquireReleaseCharges @ 0x140394610 (SmAcquireReleaseCharges.c)
 *     SmpFpReleaseResource @ 0x140405920 (SmpFpReleaseResource.c)
 *     SmKmUnlockMdl @ 0x14040751C (SmKmUnlockMdl.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1404A2D4C (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404B5970 (MmMapLockedPagesWithReservedMapping.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14063F6DC (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14063F848 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     SmpFpWaitForResource @ 0x14063F9AC (SmpFpWaitForResource.c)
 *     ZwUnlockVirtualMemory @ 0x140726FD0 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409F1A98 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140AB8860 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edi
  int v10; // edi
  struct _MDL *MdlForLock; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int16 v15; // r8
  __int16 v16; // ax
  int v17; // edi
  int PagePriorityThread; // eax
  __int64 v19; // rdx
  volatile LONG *v20; // rcx
  int v21; // r13d
  PVOID MappedSystemVa; // rdi
  __int64 v23; // r14
  PVOID v24; // rax
  void *v25; // rcx
  int v26; // eax
  struct _KTHREAD *v27; // rcx
  __int64 v28; // rdx
  void *v29; // rcx
  int v30; // edx
  int v31; // eax
  int v32; // r12d
  void *VirtualMemory; // [rsp+30h] [rbp-10h] BYREF
  struct _MDL *v34; // [rsp+38h] [rbp-8h]
  unsigned __int8 v35; // [rsp+88h] [rbp+48h]
  unsigned __int8 v36; // [rsp+88h] [rbp+48h]
  PEX_SPIN_LOCK SpinLock; // [rsp+90h] [rbp+50h]
  int SpinLocka; // [rsp+90h] [rbp+50h]
  PEX_SPIN_LOCK SpinLockb; // [rsp+90h] [rbp+50h]
  unsigned __int64 v40; // [rsp+98h] [rbp+58h] BYREF

  VirtualMemory = 0LL;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = a2 - 2;
  if ( !v6 )
  {
    v28 = *(unsigned int *)(a3 + 24);
    v40 = *(_QWORD *)(a3 + 8);
    VirtualMemory = (void *)MmStoreAllocateVirtualMemory(v40, v28);
    v29 = VirtualMemory;
    if ( !VirtualMemory )
      goto LABEL_35;
    if ( *(_QWORD *)(a1 + 120) && (*(_DWORD *)(a3 + 40) & 1) == 0 )
    {
      v36 = CurrentThread[1].SavedApcStateFill[15];
      CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
      v32 = SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v40, 1LL, 0LL);
      if ( !v32 )
      {
        v17 = -1073741670;
        goto LABEL_57;
      }
      v17 = SmKmVirtualLockCtxLockMemory(*(struct _KTHREAD **)(a1 + 120));
      CurrentThread[1].SavedApcStateFill[15] = v36;
      if ( v17 < 0 )
      {
LABEL_57:
        MmStoreFreeVirtualMemory(VirtualMemory);
        if ( v32 )
          SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v40, 1LL, 1LL);
        goto LABEL_27;
      }
      SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v40, 1LL, 1LL);
      v29 = VirtualMemory;
    }
    *(_QWORD *)(a3 + 32) = v29;
    goto LABEL_24;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v25 = *(void **)a3;
    v40 = *(_QWORD *)(a3 + 8);
    v26 = *(_DWORD *)(a3 + 16);
    VirtualMemory = v25;
    if ( (v26 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v25);
      v27 = *(struct _KTHREAD **)(a1 + 120);
      if ( v27 )
        SmKmVirtualLockCtxMemoryUnlocked(v27);
    }
    goto LABEL_24;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v30 = v8 - 1;
    if ( !v30 )
    {
      v17 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a3 + 8), 0LL);
      goto LABEL_27;
    }
    if ( v30 != 1 )
    {
      v17 = -1073741811;
      goto LABEL_27;
    }
    VirtualMemory = *(void **)a3;
    v40 = *(_QWORD *)(a3 + 8);
    ZwUnlockVirtualMemory(-1LL, &VirtualMemory, &v40, 1LL);
    goto LABEL_24;
  }
  v9 = *(_DWORD *)(a3 + 20);
  VirtualMemory = *(void **)a3;
  v10 = v9 & 1;
  v40 = *(_QWORD *)(a3 + 8);
  SpinLock = *(PEX_SPIN_LOCK *)(a1 + 128);
  MdlForLock = (struct _MDL *)SmKmAllocateMdlForLock(
                                *((_QWORD *)SpinLock + 4),
                                (unsigned __int64)*((unsigned __int16 *)SpinLock + 50) << 12);
  if ( !MdlForLock )
  {
    if ( !v10 )
      goto LABEL_35;
    MdlForLock = (struct _MDL *)SmpFpWaitForResource(SpinLock);
  }
  if ( !MdlForLock )
  {
LABEL_35:
    v17 = -1073741670;
    goto LABEL_27;
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  SpinLocka = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( SpinLocka != (_DWORD)v12 )
    SpinLocka = PsSetPagePriorityThread(CurrentThread, v12);
  v35 = CurrentThread[1].SavedApcStateFill[15];
  CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
  v13 = (unsigned __int64)VirtualMemory;
  v14 = v40;
  v15 = (__int16)VirtualMemory;
  v16 = (__int16)VirtualMemory;
  MdlForLock->Next = 0LL;
  MdlForLock->MdlFlags = 0;
  MdlForLock->StartVa = (PVOID)(v13 & 0xFFFFFFFFFFFFF000uLL);
  MdlForLock->ByteCount = v14;
  MdlForLock->ByteOffset = v15 & 0xFFF;
  MdlForLock->Size = 8 * ((((v16 & 0xFFF) + v14 + 4095) >> 12) + 6);
  v17 = MmStoreProbeAndLockPages((ULONG_PTR)MdlForLock, 0);
  if ( v17 < 0 )
  {
    if ( v17 == -1073741801 )
      v17 = -1073741395;
    if ( v17 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
    {
      v34 = (struct _MDL *)SmFpAllocate(*(volatile LONG **)(a1 + 128), 4, a1, 0LL, 1);
      v31 = SmKmProbeAndLockAddress(VirtualMemory, v40, MdlForLock, 1u);
      v17 = v31;
      if ( v31 >= 0 )
        MdlForLock->Next = v34;
      else
        SmFpFree(*(_QWORD *)(a1 + 128), 4, a1, (__int64)v34);
    }
  }
  else
  {
    v17 = 0;
  }
  if ( SpinLocka != *(_DWORD *)(a3 + 16) )
  {
    PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
    if ( PagePriorityThread != (_DWORD)v19 )
      PsSetPagePriorityThread(CurrentThread, v19);
  }
  CurrentThread[1].SavedApcStateFill[15] = v35;
  if ( v17 >= 0 )
  {
    v20 = *(volatile LONG **)(a1 + 128);
    v21 = *(_DWORD *)(a3 + 20) & 1;
    SpinLockb = v20;
    if ( (MdlForLock->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MdlForLock->MappedSystemVa;
    }
    else
    {
      v24 = MmMapLockedPagesSpecifyCache(MdlForLock, 0, MmCached, 0LL, 0, 0x40000010u);
      v20 = SpinLockb;
      MappedSystemVa = v24;
    }
    if ( !MappedSystemVa && v21 )
    {
      MappedSystemVa = (PVOID)SmpFpWaitForResource(v20);
      MmMapLockedPagesWithReservedMapping(MappedSystemVa, 0x6D526D73u, MdlForLock, MmCached);
    }
    VirtualMemory = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *(_QWORD *)(a3 + 32) = MdlForLock;
LABEL_24:
      v17 = 0;
      goto LABEL_27;
    }
    v17 = -1073741670;
    SmKmUnlockMdl(MdlForLock, *(PEX_SPIN_LOCK *)(a1 + 128));
  }
  v23 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(v23 + 112) == a1 && (unsigned int)SmpFpReleaseResource(*(PEX_SPIN_LOCK *)(a1 + 128)) )
  {
    if ( !*(_BYTE *)(v23 + 94) )
    {
      _InterlockedExchange64((volatile __int64 *)(v23 + 112), 0LL);
      KeSetEvent((PRKEVENT)(v23 + 8), 0, 0);
    }
  }
  else
  {
    SmKmFreeMdlForLock(*(_QWORD *)(v23 + 32), MdlForLock);
  }
LABEL_27:
  *(_DWORD *)(a3 + 48) = v17;
}
