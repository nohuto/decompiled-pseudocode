/*
 * XREFs of PspRevertContainerImpersonation @ 0x14037F6B0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRevertContainerImpersonation @ 0x14037F2E0 (NtRevertContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x14037F300 (IopProcessWorkItem.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int8 v7; // si
  unsigned int v8; // r14d
  __int64 i; // rdx
  signed __int64 v10; // rbx
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int8 v12; // r12
  unsigned int v13; // r14d
  ULONG_PTR v14; // r9
  char v15; // al
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v18; // r9
  struct _KPRCB *v19; // r8
  signed __int32 *SchedulerAssist; // rdx
  unsigned int v21; // r14d
  unsigned __int64 v22; // rcx
  unsigned __int64 *v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // al
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  char v30; // al
  unsigned int v31; // edx
  int IsEnabledNoReportingNoInline; // eax
  int v33; // ecx
  __int64 v34; // r8
  unsigned int v35; // r9d
  char v36; // al
  int v37; // edx
  signed int v38; // eax
  char v39; // r14
  struct _KPRCB *v40; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  int v42; // r9d
  bool v43; // cc
  unsigned int v44; // edx
  int v45; // ecx
  struct _SINGLE_LIST_ENTRY v46; // [rsp+40h] [rbp-9h] BYREF
  struct _SINGLE_LIST_ENTRY v47; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int128 v49; // [rsp+60h] [rbp+17h]
  __int64 v50; // [rsp+70h] [rbp+27h]
  __int64 retaddr; // [rsp+A8h] [rbp+5Fh]

  v2 = *(_QWORD *)(BugCheckParameter1 + 1616);
  if ( !v2 )
    return 3221225473LL;
  _m_prefetchw((const void *)(BugCheckParameter1 + 1440));
  v5 = *(_DWORD *)(BugCheckParameter1 + 1440);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 1440), v5 & 0xFEFFFFFF, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 0x1000000) != 0 )
  {
    v47.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, BugCheckParameter1, 0LL);
    v19 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v19->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v28 = *SchedulerAssist;
      do
      {
        v29 = v28;
        v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
      }
      while ( v29 != v28 );
      if ( (v28 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v19, SchedulerAssist, v19, v18);
    }
    _enable();
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
    {
      UserData = 0LL;
      v50 = 0LL;
      v49 = 0LL;
      KiAcquireThreadStateLockForWrite(BugCheckParameter1, (__int64)&UserData, (volatile signed __int32 **)v19);
      _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
      *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
      KiReleaseThreadStateLock(v22, (__int64)&UserData, v23);
    }
    else if ( (*(_DWORD *)(BugCheckParameter1 + 512) & 8) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 512), 3u);
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    KiReadyDeferredReadyList(CurrentPrcb, &v47);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v7 = KeGetCurrentIrql();
  if ( v7 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(v7, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.FirstArgument, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire((int *)&PsAltSystemCallRegistrationLock.FirstArgument, v7);
    for ( i = LODWORD(PsAltSystemCallRegistrationLock.FirstArgument);
          ((__int64)PsAltSystemCallRegistrationLock.FirstArgument & 0xBFFFFFFF) != 0x80000000;
          i = LODWORD(PsAltSystemCallRegistrationLock.FirstArgument) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.FirstArgument, 0x40000000u);
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)&PsAltSystemCallRegistrationLock.FirstArgument, v7);
  }
  *(_QWORD *)(BugCheckParameter1 + 1616) = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 4) == 0 )
  {
    v46.Next = 0LL;
    v12 = KeGetCurrentIrql();
    if ( v12 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(i) = 2;
      KiRaiseIrqlProcessIrqlFlags(v12, i);
    }
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v14 = *(char *)(BugCheckParameter1 + 795);
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    v15 = *(_BYTE *)(BugCheckParameter1 + v14 + 824);
    if ( !v15 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v14, 2uLL, 0LL);
    v30 = v15 - 1;
    *(_BYTE *)(BugCheckParameter1 + v14 + 824) = v30;
    if ( v30 )
      goto LABEL_113;
    v31 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v14);
    *(_DWORD *)(BugCheckParameter1 + 856) = v31;
    if ( v31 >= 1 << v14 || *(char *)(BugCheckParameter1 + 195) > 31 )
      goto LABEL_113;
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline((unsigned int)v14);
    v33 = *(char *)(BugCheckParameter1 + 563);
    v34 = (unsigned int)v33;
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v33 < 16 )
      {
        v36 = 0;
        v37 = v33 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v37 <= v33 )
          v37 = v33;
        if ( *(char *)(BugCheckParameter1 + 870) > 0 )
          v36 = *(_BYTE *)(BugCheckParameter1 + 870);
        v34 = (unsigned int)(v37 + v36);
        if ( (int)v34 >= 16 )
          v34 = 15LL;
        v35 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v35 >> 4) > (int)v34 )
          v34 = (unsigned __int8)(v35 >> 4);
      }
      v38 = *(_DWORD *)(BugCheckParameter1 + 856);
      if ( !v38 )
        goto LABEL_111;
      _BitScanReverse((unsigned int *)&v38, v38);
      v43 = (int)v34 < v38;
    }
    else
    {
      v42 = v33;
      if ( v33 < 16 )
      {
        v45 = v33 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v45 <= (int)v34 )
          v45 = v34;
        v42 = *(char *)(BugCheckParameter1 + 563) + *(char *)(BugCheckParameter1 + 870);
        if ( v42 <= v45 )
          v42 = v45;
        v44 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v44 >> 4) > v42 )
          v42 = (unsigned __int8)(v44 >> 4);
        if ( v42 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
          v42 = 15;
      }
      v38 = *(_DWORD *)(BugCheckParameter1 + 856);
      v34 = (unsigned int)v42;
      if ( !v38 )
        goto LABEL_111;
      _BitScanReverse((unsigned int *)&v38, v38);
      v43 = v42 < v38;
    }
    if ( v43 )
      v34 = (unsigned int)v38;
    LODWORD(v47.Next) = 0;
LABEL_111:
    if ( (int)v34 < *(char *)(BugCheckParameter1 + 195) )
      KiSetPriorityThread(BugCheckParameter1, &v46, v34);
LABEL_113:
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    v39 = 0;
    v40 = KeGetCurrentPrcb();
    Next = v46.Next;
    if ( v46.Next )
    {
      v46.Next = v46.Next->Next;
      do
      {
        KiDeferredReadySingleThread(v40, (ULONG_PTR)&Next[-27], &v46, 0LL);
        Next = v46.Next;
        ++v39;
        if ( v46.Next )
          v46.Next = v46.Next->Next;
        if ( (v39 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((char *)&v40->DeferredDispatchInterrupts);
      }
      while ( Next );
    }
    KiFlushSoftwareInterruptBatch((char *)&v40->DeferredDispatchInterrupts);
    KiCheckForThreadDispatch((__int64)v40, v12);
    goto LABEL_24;
  }
  *(_DWORD *)(BugCheckParameter1 + 116) |= 0x10000u;
LABEL_24:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    LODWORD(PsAltSystemCallRegistrationLock.FirstArgument) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PsAltSystemCallRegistrationLock.FirstArgument, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  __writecr8(v7);
  if ( stru_140F03830.Affinity )
  {
    if ( (v24 = stru_140F03830.Affinity->StaticBitmap[3], *(_DWORD *)(v24 + 96))
      && ((v25 = *(_BYTE *)(v24 + 100), v25 >= 4u) || !v25)
      && (*(_QWORD *)(v24 + 112) & 0x8000000000002000uLL) != 0
      && (*(_QWORD *)(v24 + 120) & 0x8000000000002000uLL) == *(_QWORD *)(v24 + 120)
      || HIWORD(stru_140F03830.Affinity->StaticBitmap[11])
      && (v26 = stru_140F03830.Affinity->StaticBitmap[4], *(_DWORD *)(v26 + 96))
      && ((v27 = *(_BYTE *)(v26 + 100), v27 >= 4u) || !v27)
      && (*(_QWORD *)(v26 + 112) & 0x8000000000002000uLL) != 0
      && (*(_QWORD *)(v26 + 120) & 0x8000000000002000uLL) == *(_QWORD *)(v26 + 120) )
    {
      LODWORD(v46.Next) = *(_DWORD *)(v2 + 1296);
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v46;
      *(_QWORD *)&v49 = &v47;
      LODWORD(v47.Next) = 0;
      *((_QWORD *)&v49 + 1) = 4LL;
      EtwWriteEx((REGHANDLE)stru_140F03830.Affinity, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v2 - 48, -1, 0x746E6F43u);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v43 = v10 <= 1;
  BugCheckParameter4 = v10 - 1;
  if ( v43 )
  {
    if ( *(_QWORD *)(v2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v2 - 48) >> 8)],
        v2,
        3uLL,
        *(_QWORD *)(v2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v2, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v2 - 48);
  }
  return 0LL;
}
