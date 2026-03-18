/*
 * XREFs of CcGetVacbMiss @ 0x1402E1EA0
 * Callers:
 *     CcGetVirtualAddress @ 0x1402E0F50 (CcGetVirtualAddress.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402E0ED0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbLargeOffset @ 0x1402E1620 (CcSetVacbLargeOffset.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1402E2870 (FsRtlIsNtstatusExpected.c)
 *     CcSetVacbInFreeList @ 0x1402E28F0 (CcSetVacbInFreeList.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     CcGetVacbFromFreeList @ 0x140461210 (CcGetVacbFromFreeList.c)
 *     CcSetVacbIntoList @ 0x14047DB44 (CcSetVacbIntoList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x140AFAAD0 (CcUnmapVacb.c)
 */

unsigned __int64 __fastcall CcGetVacbMiss(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r13d
  unsigned __int8 v6; // r15
  __int64 v7; // rdx
  int v8; // r12d
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  volatile __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rcx
  unsigned __int8 *v17; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned __int64 VacbFromFreeList; // rdi
  struct _SINGLE_LIST_ENTRY *v20; // rdx
  struct _SINGLE_LIST_ENTRY *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  struct _SINGLE_LIST_ENTRY *v26; // r13
  struct _KLOCK_ENTRIES *v27; // r9
  NTSTATUS v28; // r15d
  AutoBoost *v29; // rax
  AutoBoost *v30; // rsi
  __int64 v31; // r9
  __int64 v32; // r11
  __int64 v33; // r10
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rsi
  __int64 v38; // rax
  char v39; // cl
  __int16 v40; // r14
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  __int64 v43; // rtt
  KIRQL v44; // si
  BOOLEAN IsNtstatusExpected; // al
  __int64 v46; // rcx
  __int64 v48; // rax
  __int16 v49; // r14
  signed __int64 v50; // rax
  signed __int64 v51; // rdx
  __int64 v52; // rtt
  KIRQL v53; // al
  KIRQL v54; // r8
  struct _SINGLE_LIST_ENTRY *v55; // rcx
  struct _SINGLE_LIST_ENTRY *v56; // rax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // r9
  __int64 v60; // rcx
  KIRQL v61; // si
  int v62; // r9d
  char BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v64; // [rsp+30h] [rbp-58h] BYREF
  __int64 v65; // [rsp+38h] [rbp-50h]
  unsigned __int64 v66; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v67; // [rsp+90h] [rbp+8h]
  unsigned int v68; // [rsp+98h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 536);
  HIDWORD(v64) = HIDWORD(a2);
  v5 = 0;
  v65 = v4;
  v6 = 0;
  v7 = (unsigned int)a2 - (a2 & 0x3FFFF);
  v8 = a3;
  LODWORD(v64) = v7;
  v10 = v64;
  while ( 1 )
  {
    v67 = v6;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v15 = _InterlockedExchange64(v13, v14);
      if ( v15 )
        KxWaitForLockOwnerShip(v14, v15, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v14, v13);
    }
    if ( v6 )
    {
      p_PropagateBoostsEntry = (_SINGLE_LIST_ENTRY *)(v4 + 1232);
      v5 |= 2u;
      v17 = (unsigned __int8 *)(v4 + 1248);
    }
    else
    {
      p_PropagateBoostsEntry = &EmpParseLock.PropagateBoostsEntry;
      v17 = &EmpParseLock.PriorityFloorCounts[4];
    }
    Next = p_PropagateBoostsEntry->Next;
    VacbFromFreeList = 0LL;
    v68 = v5;
    if ( p_PropagateBoostsEntry->Next != p_PropagateBoostsEntry )
    {
      v20 = Next->Next;
      VacbFromFreeList = (unsigned __int64)&Next[-2];
      ++CcNumberOfMappedVacbs;
      if ( v20[1].Next != Next )
        goto LABEL_83;
      v21 = Next[1].Next;
      if ( v21->Next != Next )
        goto LABEL_83;
      v21->Next = v20;
      v20[1].Next = v21;
      if ( !*(_DWORD *)v17 )
        KeBugCheckEx(0x34u, 0x394uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*(_DWORD *)v17;
      v22 = *(_QWORD *)(VacbFromFreeList + 32);
      v23 = (__int64)(VacbFromFreeList - v22 - 16) / 40;
      if ( (unsigned int)v23 > *(_DWORD *)(v22 + 8) )
        *(_DWORD *)(v22 + 8) = v23;
      if ( !*(_QWORD *)VacbFromFreeList )
      {
        v24 = **(unsigned int **)(VacbFromFreeList + 32);
        v25 = *(_DWORD **)(*(_QWORD *)&EmpParseLock.AbWaitEntryCount + 8 * v24);
        if ( v25 )
        {
          ++v25[1];
          if ( *v25 != (_DWORD)v24 )
            KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        }
      }
      *(_QWORD *)(VacbFromFreeList + 8) = -1LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v26 = (struct _SINGLE_LIST_ENTRY *)VacbFromFreeList;
    if ( VacbFromFreeList )
      break;
    while ( CcInitializationComplete )
    {
      if ( !CcNumberOfMappedVacbs )
        break;
      v60 = *(_QWORD *)(*(_QWORD *)(v65 + 8) + 8LL);
      if ( !v60 || !(unsigned int)CcUnmapInactiveViewsInternal(v60, 64LL, 0LL, 0LL) )
        break;
      v61 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = CcGetVacbFromFreeList(v65, v6);
      KeReleaseQueuedSpinLock(4uLL, v61);
      v26 = (struct _SINGLE_LIST_ENTRY *)VacbFromFreeList;
      if ( VacbFromFreeList )
        goto LABEL_24;
    }
    v62 = a4;
    if ( a4 == 1 )
      ++*(_DWORD *)&EmpParseLock.PriorityFloorCounts[8];
    v46 = 3221225626LL;
LABEL_102:
    if ( v6 || v62 != 1 )
      RtlRaiseStatus(v46);
    v5 = v68;
    v6 = 1;
    v4 = v65;
  }
LABEL_24:
  v66 = *(_QWORD *)(a1 + 32) - v10;
  if ( v66 > 0x40000 )
    LODWORD(v66) = 0x40000;
  v28 = MmMapViewInSystemCache(
          *(_QWORD *)(a1 + 176),
          VacbFromFreeList,
          (unsigned int)&v64,
          (unsigned int)&v66,
          BugCheckParameter4);
  if ( v8 )
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
  v29 = (AutoBoost *)KeAbPreAcquire(a1 + 104, 0LL, 0LL, v27);
  v30 = v29;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v29, a1 + 104);
  if ( v30 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v30 + 33) |= 2u;
    else
      *((_BYTE *)v30 + 10) = 1;
  }
  v31 = *(_QWORD *)(a1 + 32);
  v32 = *(_QWORD *)(a1 + 88);
  v10 = v64;
  if ( v31 <= 0x2000000 )
  {
    v37 = *(_QWORD *)(v32 + 8 * ((unsigned __int64)(unsigned int)v64 >> 18));
  }
  else
  {
    v33 = v64;
    v34 = 0;
    v35 = 25;
    do
    {
      v36 = v35;
      v35 += 7;
      ++v34;
    }
    while ( v31 > 1LL << v35 );
    v37 = *(_QWORD *)(v32 + 8 * (v64 >> v36));
    if ( !v37 )
    {
LABEL_42:
      if ( v28 >= 0 )
      {
        v39 = 1;
        if ( v31 > 0x2000000 )
        {
          v39 = CcSetVacbLargeOffset(a1, v64, VacbFromFreeList, 0LL);
        }
        else if ( VacbFromFreeList < 0xFFFFFFFFFFFFFFFEuLL )
        {
          *(_QWORD *)(v32 + 8 * ((unsigned __int64)(unsigned int)v64 >> 18)) = VacbFromFreeList;
          goto LABEL_70;
        }
        if ( VacbFromFreeList > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_48:
          if ( v39 )
          {
            if ( *(_QWORD *)(VacbFromFreeList + 8) != -1LL )
              KeBugCheckEx(0x34u, 0x7A4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            *(_QWORD *)(VacbFromFreeList + 8) = a1;
            *(_QWORD *)(VacbFromFreeList + 16) = v10;
            v40 = _InterlockedIncrement((volatile signed __int32 *)(VacbFromFreeList + 16));
            if ( v40 )
            {
              if ( v40 == 1 )
                _InterlockedIncrement((volatile signed __int32 *)(a1 + 552));
              if ( v10 >= *(_QWORD *)(a1 + 376) )
                *(_QWORD *)(a1 + 376) = v10 + 0x40000;
              _m_prefetchw((const void *)(a1 + 104));
              v41 = *(_QWORD *)(a1 + 104);
              v42 = v41 - 16;
              if ( (v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v42 = 0LL;
              if ( (v41 & 2) != 0
                || (v43 = *(_QWORD *)(a1 + 104),
                    v43 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v42, v41)) )
              {
                ExfReleasePushLock(a1 + 104, v42);
              }
              KeAbPostRelease(a1 + 104);
              if ( v8 )
                KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
              return VacbFromFreeList;
            }
LABEL_87:
            KeBugCheckEx(0x34u, 0xBDCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          }
          v28 = -1073741670;
          CcUnmapVacb(VacbFromFreeList, a1, v68);
          goto LABEL_61;
        }
LABEL_70:
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 548));
        goto LABEL_48;
      }
LABEL_61:
      CcReleaseBcbLockAndVacbLock(v8, a1);
      if ( v67 )
        ++*(_DWORD *)&EmpParseLock.PriorityFloorCounts[12];
      else
        *(_QWORD *)VacbFromFreeList = 0LL;
      v44 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v65, VacbFromFreeList, v67);
      KeReleaseQueuedSpinLock(4uLL, v44);
      IsNtstatusExpected = FsRtlIsNtstatusExpected(v28);
      v46 = 3221225707LL;
      if ( IsNtstatusExpected )
        v46 = (unsigned int)v28;
      v62 = a4;
      v6 = v67;
      goto LABEL_102;
    }
    do
    {
      if ( !v34 )
        break;
      v38 = 1LL << v36;
      v36 -= 7;
      v33 &= v38 - 1;
      --v34;
      v37 = *(_QWORD *)(v37 + 8 * (v33 >> v36));
    }
    while ( v37 );
  }
  if ( !v37 )
    goto LABEL_42;
  if ( v28 < 0 )
    goto LABEL_61;
  v48 = *(_QWORD *)(v37 + 8);
  v49 = _InterlockedIncrement((volatile signed __int32 *)(v37 + 16));
  if ( !v49 )
    goto LABEL_87;
  if ( v49 == 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v48 + 552));
  _m_prefetchw((const void *)(a1 + 104));
  v50 = *(_QWORD *)(a1 + 104);
  v51 = v50 - 16;
  if ( (v50 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v51 = 0LL;
  if ( (v50 & 2) != 0
    || (v52 = *(_QWORD *)(a1 + 104),
        v52 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v51, v50)) )
  {
    ExfReleasePushLock(a1 + 104, v51);
  }
  KeAbPostRelease(a1 + 104);
  if ( v8 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
  CcUnmapVacb(VacbFromFreeList, a1, v68);
  v53 = KeAcquireQueuedSpinLock(4uLL);
  --CcNumberOfMappedVacbs;
  v54 = v53;
  if ( v67 )
  {
    CcSetVacbIntoList(VacbFromFreeList, v65 + 1232, v53);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    ++*(_DWORD *)(v59 + 1248);
  }
  else
  {
    v55 = EmpParseLock.PropagateBoostsEntry.Next;
    v56 = v26 + 2;
    if ( EmpParseLock.PropagateBoostsEntry.Next[1].Next != &EmpParseLock.PropagateBoostsEntry )
LABEL_83:
      __fastfail(3u);
    v56->Next = (struct _SINGLE_LIST_ENTRY *)EmpParseLock.PropagateBoostsEntry;
    v26[3].Next = &EmpParseLock.PropagateBoostsEntry;
    v55[1].Next = v56;
    EmpParseLock.PropagateBoostsEntry.Next = v26 + 2;
    v57 = *(_QWORD *)(VacbFromFreeList + 32);
    *(_QWORD *)(VacbFromFreeList + 8) = 0LL;
    v58 = *(_DWORD *)(v57 + 4);
    if ( !v58 )
      KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v57 + 4) = v58 - 1;
    ++*(_DWORD *)&EmpParseLock.PriorityFloorCounts[4];
  }
  KeReleaseQueuedSpinLock(4uLL, v54);
  return v37;
}
