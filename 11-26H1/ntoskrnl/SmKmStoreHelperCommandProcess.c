/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x140384A48
 * Callers:
 *     SmKmStoreHelperWorker @ 0x1403977F0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404FB7F4 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x140280590 (SmFpFree.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     SmFpAllocate @ 0x14035EF20 (SmFpAllocate.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     SmKmFreeMdlForLock @ 0x140384DDC (SmKmFreeMdlForLock.c)
 *     PsSetPagePriorityThread @ 0x140384E10 (PsSetPagePriorityThread.c)
 *     SmKmAllocateMdlForLock @ 0x140396230 (SmKmAllocateMdlForLock.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     SmKmUnlockMdl @ 0x14040060C (SmKmUnlockMdl.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14049C76C (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1406432BC (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140643428 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     SmpFpWaitForResource @ 0x14064358C (SmpFpWaitForResource.c)
 *     ZwUnlockVirtualMemory @ 0x14072BBA0 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140AB9EA0 (MmStoreFreeVirtualMemory.c)
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
  ULONG_PTR v14; // r9
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
  PVOID v25; // rcx
  int v26; // eax
  struct _KTHREAD *v27; // rcx
  __int64 v28; // rdx
  PVOID v29; // rcx
  int v30; // edx
  int v31; // eax
  int v32; // r12d
  PVOID BaseAddress; // [rsp+30h] [rbp-10h] BYREF
  struct _MDL *v34; // [rsp+38h] [rbp-8h]
  unsigned __int8 v35; // [rsp+88h] [rbp+48h]
  unsigned __int8 v36; // [rsp+88h] [rbp+48h]
  PEX_SPIN_LOCK SpinLock; // [rsp+90h] [rbp+50h]
  int SpinLocka; // [rsp+90h] [rbp+50h]
  PEX_SPIN_LOCK SpinLockb; // [rsp+90h] [rbp+50h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+58h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = a2 - 2;
  if ( !v6 )
  {
    v28 = *(unsigned int *)(a3 + 24);
    RegionSize = *(_QWORD *)(a3 + 8);
    BaseAddress = (PVOID)MmStoreAllocateVirtualMemory(RegionSize, v28);
    v29 = BaseAddress;
    if ( !BaseAddress )
      goto LABEL_35;
    if ( *(_QWORD *)(a1 + 120) && (*(_DWORD *)(a3 + 40) & 1) == 0 )
    {
      v36 = CurrentThread[1].SavedApcStateFill[15];
      CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
      v32 = SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), RegionSize, 1LL, 0LL);
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
        MmStoreFreeVirtualMemory(BaseAddress);
        if ( v32 )
          SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), RegionSize, 1LL, 1LL);
        goto LABEL_27;
      }
      SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), RegionSize, 1LL, 1LL);
      v29 = BaseAddress;
    }
    *(_QWORD *)(a3 + 32) = v29;
    goto LABEL_24;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v25 = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v26 = *(_DWORD *)(a3 + 16);
    BaseAddress = v25;
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
    BaseAddress = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    goto LABEL_24;
  }
  v9 = *(_DWORD *)(a3 + 20);
  BaseAddress = *(PVOID *)a3;
  v10 = v9 & 1;
  RegionSize = *(_QWORD *)(a3 + 8);
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
  v13 = (unsigned __int64)BaseAddress;
  v14 = RegionSize;
  v15 = (__int16)BaseAddress;
  v16 = (__int16)BaseAddress;
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
      v31 = SmKmProbeAndLockAddress(BaseAddress, RegionSize, MdlForLock, 1u);
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
    BaseAddress = MappedSystemVa;
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
