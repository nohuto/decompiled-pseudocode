/*
 * XREFs of MiGetBadPageResources @ 0x1406F5D78
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x1402EB3D0 (MiIsPfnFromChargedSlabAllocation.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiReferencePagePartition @ 0x1406F56DC (MiReferencePagePartition.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406FE828 (MiFileOnlyPfnMarkedBad.c)
 *     MiIsFileOnlyPfnImpendingRemoval @ 0x1406FF600 (MiIsFileOnlyPfnImpendingRemoval.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetBadPageResources(
        __int64 a1,
        volatile unsigned __int8 *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // r15
  AutoBoost *v6; // rax
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 BaseResidentPage; // rax
  unsigned int v19; // edx
  BOOL v20; // r14d
  unsigned __int8 v21[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v23[88]; // [rsp+38h] [rbp-A0h] BYREF
  ULONG_PTR v24; // [rsp+90h] [rbp-48h]

  v4 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 8) = 1;
  if ( !*(_QWORD *)(a1 + 48) )
    *(_QWORD *)(a1 + 48) = ExAllocatePoolMm(
                             64LL,
                             0x20uLL,
                             1816291661,
                             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !*(_BYTE *)(a1 + 12) )
  {
    *(_BYTE *)(a1 + 12) = 1;
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E37F48, 0LL, 0LL, a4);
    v7 = _interlockedbittestandset64(&stru_140E37F48.Header.Lock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E37F48, v6, (__int64)&stru_140E37F48);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(a2) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v8 + 33), a2, 1);
      }
      else
      {
        *((_BYTE *)v8 + 10) = 1;
      }
    }
  }
  v9 = MiSafeLockPage(v4, (__int64)a2, a3);
  v10 = v9;
  v21[0] = v9;
  if ( v9 == 17 )
    return 3221225712LL;
  v12 = 48 * v4 - 0x220000000000LL;
  if ( (*(_DWORD *)(v12 + 32) & 0x40000000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x10000000) != 0 )
      *(_DWORD *)(v12 + 32) |= 0x80000000;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
      __writecr8(v10);
    }
    return 259LL;
  }
  v13 = 48 * v4 - 0x220000000000LL;
  v14 = (*(_QWORD *)(v12 + 40) >> 53) & 1LL;
  if ( ((*(_QWORD *)(v12 + 40) >> 53) & 1) != 0 )
  {
    if ( (unsigned int)MiIsFileOnlyPfnImpendingRemoval(v13) )
    {
LABEL_24:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v10 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
        __writecr8(v10);
      }
      return 0LL;
    }
  }
  else
  {
    if ( MiIsPageOnBadList(v13) )
      goto LABEL_24;
    MiReferencePagePartition(v15, 1, (_QWORD *)(a1 + 16));
    v16 = *(_QWORD *)(a1 + 16);
    if ( !v16 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v10 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
        __writecr8(v10);
      }
      return 3221225738LL;
    }
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v16 + 256);
    if ( (int)MiAcquireNonPagedResources((ULONG *)v16, 2uLL, 0LL, 6LL) < 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v10 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
        __writecr8(v10);
      }
      PsDereferencePartition(*(_QWORD *)(a1 + 24));
      result = 3221225626LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_BYTE *)(a1 + 14) = 1;
      return result;
    }
    *(_QWORD *)(a1 + 40) = 2LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x10000000) != 0 )
    *(_DWORD *)(v12 + 32) |= 0x80000000;
  MiSetPfnRemovalRequested(48 * v4 - 0x220000000000LL, 1LL, *(_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E37F48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E37F48.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E37F48);
  *(_BYTE *)(a1 + 12) = 0;
  if ( !(_DWORD)v14 )
  {
    --*(_QWORD *)(a1 + 40);
    if ( (*(_QWORD *)(v12 + 40) & 0x10000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(48 * v4 - 0x220000000000LL);
      v19 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      if ( BaseResidentPage != v12 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v19 <= 1 )
      {
        MiDemoteLargeFreePage(v4, v10, 1);
        result = 3221226548LL;
        *(_DWORD *)(a1 + 8) = 2;
        return result;
      }
    }
    v20 = 0;
    if ( (unsigned int)MiGetPfnSlabType(48 * v4 - 0x220000000000LL) != 9 )
      v20 = MiIsPfnFromChargedSlabAllocation(48 * v4 - 0x220000000000LL) == 0;
    if ( *(int *)(v12 + 32) < 0
      && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1300LL) != -1
      && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2068LL) & 2) != 0
      && *(__int64 *)(v12 + 40) >= 0
      && (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
      && (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(v12 + 35) & 0x20) != 0 )
    {
      MiStoreDiscardPoisonedPage(*(_QWORD *)(a1 + 16), 48 * v4 - 0x220000000000LL, v21);
      LOBYTE(v10) = v21[0];
    }
    if ( (_BYTE)v10 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v10 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
        __writecr8((unsigned __int8)v10);
      }
    }
    if ( v20 )
    {
      memset_0(v23, 0, sizeof(v23));
      v22 = *(_QWORD *)(a1 + 16);
      v24 = v4;
      KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)&v22);
    }
    *(_DWORD *)(a1 + 8) = 0;
    return 0LL;
  }
  LOBYTE(v17) = v10;
  result = MiFileOnlyPfnMarkedBad(48 * v4 - 0x220000000000LL, *(unsigned int *)(a1 + 32), v17);
  if ( (_DWORD)result == 259 )
  {
    LOBYTE(stru_140E2ED08.AffinityPrimaryGroup) = 1;
    *(_BYTE *)(a1 + 13) = 1;
  }
  return result;
}
