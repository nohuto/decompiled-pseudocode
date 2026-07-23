/*
 * XREFs of CcGetVirtualAddress @ 0x1402C2D60
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x1409DFB60 (CcMapData.c)
 *     CcMapDataCommon @ 0x140A360B0 (CcMapDataCommon.c)
 *     CcMapAndCopyFromCache @ 0x140A718D0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D2B1C (CcAllocateInitializeVacbArray.c)
 *     CcBuildUpHighPriorityMappings @ 0x14050EC98 (CcBuildUpHighPriorityMappings.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, struct _KLOCK_ENTRIES *a4, int a5, int a6)
{
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v10; // r15
  int v11; // ebp
  LegacyAutoBoost *v12; // rsi
  int v13; // edx
  int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // r10
  int v18; // edx
  int v19; // ecx
  int v20; // r9d
  __int64 VacbMiss; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // r14
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt
  int v28; // r9d
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  bool v33; // zf
  int v34; // r8d
  __int64 InitializeVacbArray; // rax
  __int64 v36; // rdx
  _DWORD *v37; // rsi
  unsigned int j; // eax
  volatile signed __int64 **v39; // rsi
  __int64 v40; // rax
  _KTHREAD *v41; // r8
  __int64 v42; // rdx
  unsigned __int8 CurrentIrql; // bp
  void *ArbitraryUserPointer; // rax
  volatile __int64 *v45; // rdx
  __int64 v46; // rcx
  unsigned int i; // edx
  bool v48; // cc
  _KTHREAD **v49; // rcx
  signed __int32 v50[8]; // [rsp+0h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  char v52; // [rsp+28h] [rbp-60h]
  unsigned int v53; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v55; // [rsp+90h] [rbp+8h] BYREF
  int v56; // [rsp+98h] [rbp+10h]
  __int64 *v57; // [rsp+A0h] [rbp+18h]
  struct _KLOCK_ENTRIES *v58; // [rsp+A8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v7 = a2 & 0x3FFFF;
  v56 = 0;
  v8 = a2 - v7;
  v10 = *(_QWORD *)(a1 + 536);
  v53 = (*(_DWORD *)(a1 + 152) >> 9) & 1;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 || a5 )
  {
    v11 = 1;
    LODWORD(v55) = 1;
    if ( *(_DWORD *)&EmpParseLock.AbWaitEntryCount >= 0x80u || *(_DWORD *)(v10 + 1248) >= 0x80u )
      goto LABEL_3;
  }
  else
  {
    v11 = 0;
    LODWORD(v55) = 0;
    if ( *(_DWORD *)&EmpParseLock.AbWaitEntryCount >= 0x80u )
      goto LABEL_3;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v37 = (_DWORD *)InitializeVacbArray;
  if ( !InitializeVacbArray )
  {
    LODWORD(v55) = v11;
    goto LABEL_3;
  }
  if ( v11 == 1 )
    CcBuildUpHighPriorityMappings(v10, InitializeVacbArray);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v36) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v36);
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v45 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 9);
  v46 = (__int64)ArbitraryUserPointer + 64;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v45, v46) )
      KxWaitForLockOwnerShip(v46);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v46, v45);
  }
  if ( *(_DWORD *)&EmpParseLock.PriorityFloorCounts[24] > 0x500u )
    KeBugCheckEx(0x34u, 0x1EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  for ( i = 0; i < 0x500; ++i )
  {
    if ( !*((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + i) )
    {
      v48 = i <= CcVacbArraysHighestUsedIndex;
      *((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + i) = v37;
      *v37 = i;
      if ( !v48 )
        CcVacbArraysHighestUsedIndex = i;
      goto LABEL_88;
    }
  }
  if ( i == 1280 )
    KeBugCheckEx(0x34u, 0x207uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_88:
  for ( j = 0; j < 0xCCC; ++j )
  {
    v41 = (_KTHREAD *)&v37[10 * j + 8];
    if ( *(_QWORD *)&v37[10 * j + 4] )
    {
      a4 = *(struct _KLOCK_ENTRIES **)(v10 + 1240);
      if ( a4->Thread != (_KTHREAD *)(v10 + 1232) )
LABEL_91:
        __fastfail(3u);
      *(_QWORD *)&v41->Header.Lock = v10 + 1232;
      *(_QWORD *)&v37[10 * j + 10] = a4;
      a4->Thread = v41;
      *(_QWORD *)(v10 + 1240) = v41;
      ++*(_DWORD *)(v10 + 1248);
    }
    else
    {
      v49 = *(_KTHREAD ***)&EmpParseLock.PriorityFloorCounts[16];
      if ( **(struct _KTHREAD ***)&EmpParseLock.PriorityFloorCounts[16] != (struct _KTHREAD *)&EmpParseLock.PriorityFloorCounts[8] )
        goto LABEL_91;
      *(_QWORD *)&v41->Header.Lock = &EmpParseLock.PriorityFloorCounts[8];
      *(_QWORD *)&v37[10 * j + 10] = v49;
      *v49 = v41;
      ++*(_DWORD *)&EmpParseLock.AbWaitEntryCount;
      *(_QWORD *)&EmpParseLock.PriorityFloorCounts[16] = &v37[10 * j + 8];
    }
  }
  v39 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v39, retaddr);
    goto LABEL_70;
  }
  _m_prefetchw(v39);
  v40 = (__int64)*v39;
  if ( *v39 )
  {
LABEL_68:
    *v39 = 0LL;
    v42 = (__int64)v39[1];
    if ( (((unsigned __int8)v42 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v40 + 8), v42)) & 4) != 0 )
    {
      _InterlockedOr(v50, 0);
      KiWakeAddressAll(v40 + 8, v42, v41);
    }
    goto LABEL_70;
  }
  if ( v39 != (volatile signed __int64 **)_InterlockedCompareExchange64(v39[1], 0LL, (signed __int64)v39) )
  {
    v40 = KxWaitForLockChainValid(v39);
    goto LABEL_68;
  }
LABEL_70:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_3:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x59EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 104, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 104), 0, v12, (struct _KTHREAD *)(a1 + 104));
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v12 + 33) |= 2u;
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = *(_DWORD *)(a1 + 152);
  if ( a6
    || (v13 & 0x800200) == 0x200
    || (v8 & 0xFFFFF) != 0
    || (v13 & 0x40000000) != 0
    || v8 < 0x100000
    || v8 == *(_QWORD *)(a1 + 344) )
  {
    v14 = 1;
  }
  else
  {
    v14 = v56;
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 88);
  if ( v15 <= 0x2000000 )
  {
    VacbMiss = *(_QWORD *)(v16 + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  }
  else
  {
    v17 = a2;
    v18 = 0;
    v19 = 25;
    do
    {
      v20 = v19;
      v19 += 7;
      ++v18;
    }
    while ( v15 > 1LL << v19 );
    VacbMiss = *(_QWORD *)(v16 + 8 * (a2 >> v20));
    if ( !VacbMiss )
      goto LABEL_38;
    do
    {
      if ( !v18 )
        break;
      v22 = 1LL << v20;
      v20 -= 7;
      v17 &= v22 - 1;
      --v18;
      VacbMiss = *(_QWORD *)(VacbMiss + 8 * (v17 >> v20));
    }
    while ( VacbMiss );
  }
  if ( VacbMiss )
  {
    v23 = *(_QWORD *)(VacbMiss + 8);
    v24 = _InterlockedIncrement((volatile signed __int32 *)(VacbMiss + 16));
    if ( !v24 )
      KeBugCheckEx(0x34u, 0xBDCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v24 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 552));
    _m_prefetchw((const void *)(a1 + 104));
    v25 = *(_QWORD *)(a1 + 104);
    v26 = v25 - 16;
    if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (v25 & 2) != 0
      || (v27 = *(_QWORD *)(a1 + 104),
          v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v26, v25)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 + 104));
    }
    KeAbPostRelease(a1 + 104);
    goto LABEL_31;
  }
LABEL_38:
  _m_prefetchw((const void *)(a1 + 104));
  v30 = *(_QWORD *)(a1 + 104);
  v31 = v30 - 16;
  if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v31 = 0LL;
  if ( (v30 & 2) != 0
    || (v32 = *(_QWORD *)(a1 + 104),
        v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v31, v30)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 + 104));
  }
  KeAbPostRelease(a1 + 104);
  VacbMiss = CcGetVacbMiss(a1, a2, v53, (unsigned int)v55);
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0
    && (v8 & 0xFFFFF) == 0
    && (*(_DWORD *)(a1 + 152) & 0x8000000) == 0
    && v8 >= 0x100000 )
  {
    v8 -= 0x100000LL;
    v55 = v8;
    CcUnmapVacbArray(a1, (unsigned int)&v55, 0x100000, 1, 0, 0);
  }
LABEL_31:
  if ( !v14 )
  {
    v33 = (*(_DWORD *)(a1 + 152) & 0x800000) == 0;
    v52 = 0;
    LOBYTE(v28) = 1;
    LOBYTE(BugCheckParameter4) = 0;
    if ( v33 )
    {
      v34 = CcUnmapBehindLength;
      if ( v8 >= (unsigned int)CcUnmapBehindLength )
      {
        v55 = v8 - (unsigned int)CcUnmapBehindLength;
LABEL_52:
        CcUnmapVacbArray(a1, (unsigned int)&v55, v34, v28, BugCheckParameter4, v52);
        goto LABEL_32;
      }
      v55 = 0LL;
    }
    else
    {
      if ( v8 >= 8650752 )
      {
        v55 = v8 - 0x800000;
        CcUnmapVacbArray(a1, (unsigned int)&v55, 0x800000, v28, BugCheckParameter4, v52);
        goto LABEL_32;
      }
      v55 = 0x40000LL;
    }
    v34 = v8;
    goto LABEL_52;
  }
LABEL_32:
  *v57 = VacbMiss;
  LODWORD(v58->Thread) = 0x40000 - v7;
  return v7 + *(_QWORD *)VacbMiss;
}
