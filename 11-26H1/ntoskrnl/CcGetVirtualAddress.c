/*
 * XREFs of CcGetVirtualAddress @ 0x1402E0F50
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x1404B3978 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x1409E2B50 (CcMapData.c)
 *     CcMapDataCommon @ 0x140A235A0 (CcMapDataCommon.c)
 *     CcMapAndCopyFromCache @ 0x140A64900 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D943C (CcAllocateInitializeVacbArray.c)
 *     CcBuildUpHighPriorityMappings @ 0x140515228 (CcBuildUpHighPriorityMappings.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  __int64 v37; // r8
  _DWORD *v38; // rsi
  unsigned int j; // eax
  volatile signed __int64 **v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int8 CurrentIrql; // bp
  void *ArbitraryUserPointer; // rax
  volatile __int64 *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int i; // edx
  bool v49; // cc
  __int64 v50; // rdx
  _SINGLE_LIST_ENTRY **v51; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  signed __int32 v53[8]; // [rsp+0h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  char v55; // [rsp+28h] [rbp-60h]
  unsigned int v56; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v58; // [rsp+90h] [rbp+8h] BYREF
  int v59; // [rsp+98h] [rbp+10h]
  __int64 *v60; // [rsp+A0h] [rbp+18h]
  struct _KLOCK_ENTRIES *v61; // [rsp+A8h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v7 = a2 & 0x3FFFF;
  v59 = 0;
  v8 = a2 - v7;
  v10 = *(_QWORD *)(a1 + 536);
  v56 = (*(_DWORD *)(a1 + 152) >> 9) & 1;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 || a5 )
  {
    v11 = 1;
    LODWORD(v58) = 1;
    if ( *(_DWORD *)&EmpParseLock.PriorityFloorCounts[4] >= 0x80u || *(_DWORD *)(v10 + 1248) >= 0x80u )
      goto LABEL_3;
  }
  else
  {
    v11 = 0;
    LODWORD(v58) = 0;
    if ( *(_DWORD *)&EmpParseLock.PriorityFloorCounts[4] >= 0x80u )
      goto LABEL_3;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v38 = (_DWORD *)InitializeVacbArray;
  if ( !InitializeVacbArray )
  {
    LODWORD(v58) = v11;
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v47 = _InterlockedExchange64(v45, v46);
    if ( v47 )
      KxWaitForLockOwnerShip(v46, v47, v37);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v46, v45);
  }
  if ( LODWORD(EmpParseLock.MutantListHead.Blink) > 0x500 )
    KeBugCheckEx(0x34u, 0x1EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  for ( i = 0; i < 0x500; ++i )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&EmpParseLock.AbWaitEntryCount + 8LL * i) )
    {
      v49 = i <= CcVacbArraysHighestUsedIndex;
      *(_QWORD *)(*(_QWORD *)&EmpParseLock.AbWaitEntryCount + 8LL * i) = v38;
      *v38 = i;
      if ( !v49 )
        CcVacbArraysHighestUsedIndex = i;
      goto LABEL_88;
    }
  }
  if ( i == 1280 )
    KeBugCheckEx(0x34u, 0x207uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_88:
  for ( j = 0; j < 0xCCC; ++j )
  {
    v50 = 5LL * j;
    v51 = (_SINGLE_LIST_ENTRY **)&v38[10 * j + 8];
    if ( *(_QWORD *)&v38[10 * j + 4] )
    {
      a4 = *(struct _KLOCK_ENTRIES **)(v10 + 1240);
      if ( a4->Thread != (_KTHREAD *)(v10 + 1232) )
LABEL_91:
        __fastfail(3u);
      *v51 = (_SINGLE_LIST_ENTRY *)(v10 + 1232);
      *(_QWORD *)&v38[10 * j + 10] = a4;
      a4->Thread = (_KTHREAD *)v51;
      *(_QWORD *)(v10 + 1240) = v51;
      ++*(_DWORD *)(v10 + 1248);
    }
    else
    {
      Next = EmpParseLock.IoSelfBoostsEntry.Next;
      if ( EmpParseLock.IoSelfBoostsEntry.Next->Next != &EmpParseLock.PropagateBoostsEntry )
        goto LABEL_91;
      *v51 = &EmpParseLock.PropagateBoostsEntry;
      *(_QWORD *)&v38[10 * j + 10] = Next;
      Next->Next = (struct _SINGLE_LIST_ENTRY *)v51;
      ++*(_DWORD *)&EmpParseLock.PriorityFloorCounts[4];
      EmpParseLock.IoSelfBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)&v38[10 * j + 8];
    }
  }
  v40 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
  {
    KiReleaseQueuedSpinLockInstrumented(v40, retaddr);
    goto LABEL_70;
  }
  _m_prefetchw(v40);
  v41 = (__int64)*v40;
  if ( *v40 )
  {
LABEL_68:
    *v40 = 0LL;
    v42 = (__int64)v40[1];
    if ( (((unsigned __int8)v42 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v41 + 8), v42)) & 4) != 0 )
    {
      _InterlockedOr(v53, 0);
      KiWakeAddressAll();
    }
    goto LABEL_70;
  }
  if ( v40 != (volatile signed __int64 **)_InterlockedCompareExchange64(v40[1], 0LL, (signed __int64)v40) )
  {
    v41 = KxWaitForLockChainValid((__int64 *)v40, v50, (__int64)v51);
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
    v14 = v59;
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
      ExfReleasePushLock(a1 + 104, v26);
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
    ExfReleasePushLock(a1 + 104, v31);
  }
  KeAbPostRelease(a1 + 104);
  VacbMiss = CcGetVacbMiss(a1, a2, v56, (unsigned int)v58);
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0
    && (v8 & 0xFFFFF) == 0
    && (*(_DWORD *)(a1 + 152) & 0x8000000) == 0
    && v8 >= 0x100000 )
  {
    v8 -= 0x100000LL;
    v58 = v8;
    CcUnmapVacbArray(a1, (unsigned int)&v58, 0x100000, 1, 0, 0);
  }
LABEL_31:
  if ( !v14 )
  {
    v33 = (*(_DWORD *)(a1 + 152) & 0x800000) == 0;
    v55 = 0;
    LOBYTE(v28) = 1;
    LOBYTE(BugCheckParameter4) = 0;
    if ( v33 )
    {
      v34 = CcUnmapBehindLength;
      if ( v8 >= (unsigned int)CcUnmapBehindLength )
      {
        v58 = v8 - (unsigned int)CcUnmapBehindLength;
LABEL_52:
        CcUnmapVacbArray(a1, (unsigned int)&v58, v34, v28, BugCheckParameter4, v55);
        goto LABEL_32;
      }
      v58 = 0LL;
    }
    else
    {
      if ( v8 >= 8650752 )
      {
        v58 = v8 - 0x800000;
        CcUnmapVacbArray(a1, (unsigned int)&v58, 0x800000, v28, BugCheckParameter4, v55);
        goto LABEL_32;
      }
      v58 = 0x40000LL;
    }
    v34 = v8;
    goto LABEL_52;
  }
LABEL_32:
  *v60 = VacbMiss;
  LODWORD(v61->Thread) = 0x40000 - v7;
  return v7 + *(_QWORD *)VacbMiss;
}
