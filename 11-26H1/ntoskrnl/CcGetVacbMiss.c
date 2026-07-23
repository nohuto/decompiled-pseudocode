/*
 * XREFs of CcGetVacbMiss @ 0x1402C3F60
 * Callers:
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402C2CE0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbLargeOffset @ 0x1402C3430 (CcSetVacbLargeOffset.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     CcSetVacbInFreeList @ 0x1402C49B0 (CcSetVacbInFreeList.c)
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcGetVacbFromFreeList @ 0x14045A1D0 (CcGetVacbFromFreeList.c)
 *     CcSetVacbIntoList @ 0x1404774B4 (CcSetVacbIntoList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140AFCD38 (CcUnmapVacb.c)
 */

unsigned __int64 __fastcall CcGetVacbMiss(__int64 a1, __int64 a2, int a3, int a4)
{
  $04F135B480AA75E9F84DA8531FC1BADA *v4; // rdi
  unsigned int v5; // r13d
  unsigned __int8 v6; // r15
  __int64 v7; // rdx
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  volatile __int64 *v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 *p_AbWaitEntryCount; // rcx
  $04F135B480AA75E9F84DA8531FC1BADA *v16; // r8
  __int64 *v17; // rax
  unsigned __int64 VacbFromFreeList; // rdi
  __int64 v19; // rdx
  __int64 **v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  unsigned __int64 v25; // r13
  struct _KLOCK_ENTRIES *v26; // r9
  NTSTATUS v27; // r15d
  AutoBoost *v28; // rax
  AutoBoost *v29; // rsi
  __int64 v30; // r9
  __int64 v31; // r11
  __int64 v32; // r10
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rsi
  __int64 v37; // rax
  char v38; // cl
  __int16 v39; // r14
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  __int64 v42; // rtt
  KIRQL v43; // si
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v45; // ecx
  __int64 v47; // rax
  __int16 v48; // r14
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  __int64 v51; // rtt
  KIRQL v52; // al
  KIRQL v53; // r8
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // r9
  __int64 v59; // rcx
  KIRQL v60; // si
  int v61; // r9d
  char BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v63; // [rsp+30h] [rbp-58h] BYREF
  $04F135B480AA75E9F84DA8531FC1BADA *v64; // [rsp+38h] [rbp-50h]
  unsigned __int64 v65; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v66; // [rsp+90h] [rbp+8h]
  unsigned int v67; // [rsp+98h] [rbp+10h]

  v4 = *($04F135B480AA75E9F84DA8531FC1BADA **)(a1 + 536);
  HIDWORD(v63) = HIDWORD(a2);
  v5 = 0;
  v64 = v4;
  v6 = 0;
  v7 = (unsigned int)a2 - (a2 & 0x3FFFF);
  LODWORD(v63) = v7;
  v10 = v63;
  while ( 1 )
  {
    v66 = v6;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
    }
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    v13 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 9);
    v14 = (__int64)ArbitraryUserPointer + 64;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v13, v14) )
        KxWaitForLockOwnerShip(v14);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v14, v13);
    }
    if ( v6 )
    {
      p_AbWaitEntryCount = (unsigned __int8 *)&v4[616].AbWaitEntryCount;
      v5 |= 2u;
      v16 = v4 + 624;
    }
    else
    {
      p_AbWaitEntryCount = &EmpParseLock.PriorityFloorCounts[8];
      v16 = &EmpParseLock.792;
    }
    v17 = *(__int64 **)p_AbWaitEntryCount;
    VacbFromFreeList = 0LL;
    v67 = v5;
    if ( *(unsigned __int8 **)p_AbWaitEntryCount != p_AbWaitEntryCount )
    {
      v19 = *v17;
      VacbFromFreeList = (unsigned __int64)(v17 - 2);
      ++CcNumberOfMappedVacbs;
      if ( *(__int64 **)(v19 + 8) != v17 )
        goto LABEL_83;
      v20 = (__int64 **)v17[1];
      if ( *v20 != v17 )
        goto LABEL_83;
      *v20 = (__int64 *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      if ( !*(_DWORD *)&v16->AbWaitEntryCount )
        KeBugCheckEx(0x34u, 0x394uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*(_DWORD *)&v16->AbWaitEntryCount;
      v21 = *(_QWORD *)(VacbFromFreeList + 32);
      v22 = (__int64)(VacbFromFreeList - v21 - 16) / 40;
      if ( (unsigned int)v22 > *(_DWORD *)(v21 + 8) )
        *(_DWORD *)(v21 + 8) = v22;
      if ( !*(_QWORD *)VacbFromFreeList )
      {
        v23 = **(unsigned int **)(VacbFromFreeList + 32);
        v24 = (_DWORD *)*((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + v23);
        if ( v24 )
        {
          ++v24[1];
          if ( *v24 != (_DWORD)v23 )
            KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        }
      }
      *(_QWORD *)(VacbFromFreeList + 8) = -1LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v25 = VacbFromFreeList;
    if ( VacbFromFreeList )
      break;
    while ( CcInitializationComplete )
    {
      if ( !CcNumberOfMappedVacbs )
        break;
      v59 = *(_QWORD *)(*(_QWORD *)&v64[4].AbWaitEntryCount + 8LL);
      if ( !v59 || !(unsigned int)CcUnmapInactiveViewsInternal(v59, 64LL, 0LL, 0LL) )
        break;
      v60 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = CcGetVacbFromFreeList(v64, v6);
      KeReleaseQueuedSpinLock(4uLL, v60);
      v25 = VacbFromFreeList;
      if ( VacbFromFreeList )
        goto LABEL_24;
    }
    v61 = a4;
    if ( a4 == 1 )
      ++HIDWORD(EmpParseLock.PropagateBoostsEntry.Next);
    v45 = -1073741670;
LABEL_102:
    if ( v6 || v61 != 1 )
      RtlRaiseStatus(v45);
    v5 = v67;
    v6 = 1;
    v4 = v64;
  }
LABEL_24:
  v65 = *(_QWORD *)(a1 + 32) - v10;
  if ( v65 > 0x40000 )
    LODWORD(v65) = 0x40000;
  v27 = MmMapViewInSystemCache(
          *(_QWORD *)(a1 + 176),
          VacbFromFreeList,
          (unsigned int)&v63,
          (unsigned int)&v65,
          BugCheckParameter4);
  if ( a3 )
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
  v28 = (AutoBoost *)KeAbPreAcquire(a1 + 104, 0LL, 0LL, v26);
  v29 = v28;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v28, a1 + 104);
  if ( v29 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v29 + 33) |= 2u;
    else
      *((_BYTE *)v29 + 10) = 1;
  }
  v30 = *(_QWORD *)(a1 + 32);
  v31 = *(_QWORD *)(a1 + 88);
  v10 = v63;
  if ( v30 <= 0x2000000 )
  {
    v36 = *(_QWORD *)(v31 + 8 * ((unsigned __int64)(unsigned int)v63 >> 18));
  }
  else
  {
    v32 = v63;
    v33 = 0;
    v34 = 25;
    do
    {
      v35 = v34;
      v34 += 7;
      ++v33;
    }
    while ( v30 > 1LL << v34 );
    v36 = *(_QWORD *)(v31 + 8 * (v63 >> v35));
    if ( !v36 )
    {
LABEL_42:
      if ( v27 >= 0 )
      {
        v38 = 1;
        if ( v30 > 0x2000000 )
        {
          v38 = CcSetVacbLargeOffset(a1, v63, VacbFromFreeList, 0LL);
        }
        else if ( VacbFromFreeList < 0xFFFFFFFFFFFFFFFEuLL )
        {
          *(_QWORD *)(v31 + 8 * ((unsigned __int64)(unsigned int)v63 >> 18)) = VacbFromFreeList;
          goto LABEL_70;
        }
        if ( VacbFromFreeList > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_48:
          if ( v38 )
          {
            if ( *(_QWORD *)(VacbFromFreeList + 8) != -1LL )
              KeBugCheckEx(0x34u, 0x7A4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            *(_QWORD *)(VacbFromFreeList + 8) = a1;
            *(_QWORD *)(VacbFromFreeList + 16) = v10;
            v39 = _InterlockedIncrement((volatile signed __int32 *)(VacbFromFreeList + 16));
            if ( v39 )
            {
              if ( v39 == 1 )
                _InterlockedIncrement((volatile signed __int32 *)(a1 + 552));
              if ( v10 >= *(_QWORD *)(a1 + 376) )
                *(_QWORD *)(a1 + 376) = v10 + 0x40000;
              _m_prefetchw((const void *)(a1 + 104));
              v40 = *(_QWORD *)(a1 + 104);
              v41 = v40 - 16;
              if ( (v40 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v41 = 0LL;
              if ( (v40 & 2) != 0
                || (v42 = *(_QWORD *)(a1 + 104),
                    v42 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v41, v40)) )
              {
                ExfReleasePushLock((_QWORD *)(a1 + 104));
              }
              KeAbPostRelease(a1 + 104);
              if ( a3 )
                KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
              return VacbFromFreeList;
            }
LABEL_87:
            KeBugCheckEx(0x34u, 0xBDCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          }
          v27 = -1073741670;
          CcUnmapVacb(VacbFromFreeList, a1, v67);
          goto LABEL_61;
        }
LABEL_70:
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 548));
        goto LABEL_48;
      }
LABEL_61:
      CcReleaseBcbLockAndVacbLock(a3, a1);
      if ( v66 )
        ++LODWORD(EmpParseLock.IoSelfBoostsEntry.Next);
      else
        *(_QWORD *)VacbFromFreeList = 0LL;
      v43 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v64, VacbFromFreeList, v66);
      KeReleaseQueuedSpinLock(4uLL, v43);
      IsNtstatusExpected = FsRtlIsNtstatusExpected(v27);
      v45 = -1073741589;
      if ( IsNtstatusExpected )
        v45 = v27;
      v61 = a4;
      v6 = v66;
      goto LABEL_102;
    }
    do
    {
      if ( !v33 )
        break;
      v37 = 1LL << v35;
      v35 -= 7;
      v32 &= v37 - 1;
      --v33;
      v36 = *(_QWORD *)(v36 + 8 * (v32 >> v35));
    }
    while ( v36 );
  }
  if ( !v36 )
    goto LABEL_42;
  if ( v27 < 0 )
    goto LABEL_61;
  v47 = *(_QWORD *)(v36 + 8);
  v48 = _InterlockedIncrement((volatile signed __int32 *)(v36 + 16));
  if ( !v48 )
    goto LABEL_87;
  if ( v48 == 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v47 + 552));
  _m_prefetchw((const void *)(a1 + 104));
  v49 = *(_QWORD *)(a1 + 104);
  v50 = v49 - 16;
  if ( (v49 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v50 = 0LL;
  if ( (v49 & 2) != 0
    || (v51 = *(_QWORD *)(a1 + 104),
        v51 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v50, v49)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 + 104));
  }
  KeAbPostRelease(a1 + 104);
  if ( a3 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
  CcUnmapVacb(VacbFromFreeList, a1, v67);
  v52 = KeAcquireQueuedSpinLock(4uLL);
  --CcNumberOfMappedVacbs;
  v53 = v52;
  if ( v66 )
  {
    CcSetVacbIntoList(VacbFromFreeList, &v64[616], v52);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    ++*(_DWORD *)(v58 + 1248);
  }
  else
  {
    v54 = *(_QWORD *)&EmpParseLock.PriorityFloorCounts[8];
    v55 = (_QWORD *)(v25 + 16);
    if ( *(struct _KTHREAD **)(*(_QWORD *)&EmpParseLock.PriorityFloorCounts[8] + 8LL) != (struct _KTHREAD *)&EmpParseLock.PriorityFloorCounts[8] )
LABEL_83:
      __fastfail(3u);
    *v55 = *(_QWORD *)&EmpParseLock.PriorityFloorCounts[8];
    *(_QWORD *)(v25 + 24) = &EmpParseLock.PriorityFloorCounts[8];
    *(_QWORD *)(v54 + 8) = v55;
    *(_QWORD *)&EmpParseLock.PriorityFloorCounts[8] = v25 + 16;
    v56 = *(_QWORD *)(VacbFromFreeList + 32);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    v57 = *(_DWORD *)(v56 + 4);
    if ( !v57 )
      KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v56 + 4) = v57 - 1;
    ++*(_DWORD *)&EmpParseLock.AbWaitEntryCount;
  }
  KeReleaseQueuedSpinLock(4uLL, v53);
  return v36;
}
