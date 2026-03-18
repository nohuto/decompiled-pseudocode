/*
 * XREFs of CmpCallCallBacksEx @ 0x1408C9E40
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x1408C93B0 (CmPostCallbackNotification.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpCallCallBacks @ 0x1408C9D10 (CmpCallCallBacks.c)
 *     CmPostCallbackNotificationEx @ 0x1408C9D50 (CmPostCallbackNotificationEx.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     CmpSecurityMethod @ 0x1408ED400 (CmpSecurityMethod.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x140850970 (CmpCallbackFatalFilter.c)
 *     CmpCallbackFillObjectContext @ 0x1408CA800 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFetchCallContext @ 0x1408CAD20 (CmpCallbackFetchCallContext.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r13
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // edx
  int v11; // r14d
  __int128 *v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _SLIST_ENTRY **p_SparePtr; // r12
  PVOID SparePtr; // rax
  LIST_ENTRY *p_WaitListHead; // rsi
  struct _KTHREAD *v17; // rax
  void *v18; // rdx
  LegacyAutoBoost *v19; // rbx
  _SLIST_ENTRY *v20; // rdi
  volatile signed __int32 *v21; // r15
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // r14
  struct _SLIST_ENTRY *v28; // rbx
  struct _SLIST_ENTRY **v29; // rcx
  _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **p_Next; // rcx
  signed __int64 v32; // rdx
  __int64 v33; // rtt
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // r15d
  struct _SLIST_ENTRY *v37; // rbx
  struct _SLIST_ENTRY **v38; // rax
  LIST_ENTRY *v39; // rsi
  int v40; // r14d
  PVOID *v41; // rax
  struct _KTHREAD *v43; // rax
  struct _KLOCK_ENTRIES *v44; // r9
  void *v45; // rdx
  LegacyAutoBoost *v46; // rbx
  struct _KPRCB *v47; // rdx
  _GENERAL_LOOKASIDE *v48; // rcx
  struct _KPRCB *v49; // rdx
  _GENERAL_LOOKASIDE *v50; // rcx
  _GENERAL_LOOKASIDE *L; // r14
  __int64 v52; // rcx
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  PSLIST_ENTRY Pool2; // rax
  signed __int32 v57[8]; // [rsp+0h] [rbp-E8h] BYREF
  char v58; // [rsp+20h] [rbp-C8h]
  char v59; // [rsp+21h] [rbp-C7h]
  int v60; // [rsp+24h] [rbp-C4h]
  __int128 *v61; // [rsp+28h] [rbp-C0h]
  LIST_ENTRY *v62; // [rsp+30h] [rbp-B8h]
  struct _SLIST_ENTRY *v63; // [rsp+38h] [rbp-B0h]
  PSLIST_ENTRY v64; // [rsp+40h] [rbp-A8h]
  __int128 *v65; // [rsp+48h] [rbp-A0h]
  __int128 v66; // [rsp+50h] [rbp-98h] BYREF
  __int128 v67; // [rsp+60h] [rbp-88h]
  __int128 v68; // [rsp+70h] [rbp-78h]
  __int64 v69; // [rsp+80h] [rbp-68h]
  LIST_ENTRY *v70; // [rsp+88h] [rbp-60h]
  unsigned __int8 *v71; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *v72; // [rsp+98h] [rbp-50h]
  __int128 v73; // [rsp+A0h] [rbp-48h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = 0;
  v60 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v73 = 0LL;
  v12 = 0LL;
  v61 = 0LL;
  v65 = 0LL;
  v59 = 0;
  CurrentThread = KeGetCurrentThread();
  v72 = CurrentThread;
  if ( v7 != 1 )
  {
    v20 = (_SLIST_ENTRY *)a7;
    goto LABEL_46;
  }
  p_SparePtr = (_SLIST_ENTRY **)&CurrentThread[1].WaitBlock[0].SparePtr;
  v71 = &CurrentThread[1].WaitBlockFill5[40];
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  if ( SparePtr )
    p_WaitListHead = (LIST_ENTRY *)*((_QWORD *)SparePtr + 1);
  else
    p_WaitListHead = &CmpCallbackListLock.Header.WaitListHead;
  v58 = 1;
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v19 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock.Header.Lock, 0, v19, &CmpCallbackListLock);
  if ( v19 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v19, v18);
    else
      *((_BYTE *)v19 + 10) = 1;
  }
  v20 = (_SLIST_ENTRY *)a7;
  while ( 1 )
  {
    do
    {
      p_WaitListHead = p_WaitListHead->Flink;
      v62 = p_WaitListHead;
      if ( p_WaitListHead == &CmpCallbackListLock.Header.WaitListHead )
        goto LABEL_39;
      v21 = (volatile signed __int32 *)&p_WaitListHead[1];
      v70 = p_WaitListHead + 1;
    }
    while ( SLODWORD(p_WaitListHead[1].Flink) < 0 );
    _InterlockedIncrement(v21);
    _m_prefetchw(&CmpCallbackListLock);
    v22 = *(_QWORD *)&CmpCallbackListLock.Header.Lock - 16LL;
    if ( (*(_QWORD *)&CmpCallbackListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( (CmpCallbackListLock.Header.Type & 2) != 0
      || (v23 = *(_QWORD *)&CmpCallbackListLock.Header.Lock,
          v23 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v22,
                   *(signed __int64 *)&CmpCallbackListLock.Header.Lock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((unsigned __int64)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25);
    v58 = 0;
    if ( LODWORD(CmpCallbackListLock.CycleTime) )
      goto LABEL_116;
    if ( !CmpAllocateCallbackMemoryFromPerProcLookaside )
    {
      Pool2 = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      v28 = Pool2;
      if ( !Pool2 )
      {
LABEL_116:
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x100uLL);
        v28 = Pool2;
      }
      v64 = Pool2;
      goto LABEL_22;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[10].P;
    ++P->TotalAllocates;
    v28 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v28 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[10].L;
      ++L->TotalAllocates;
      v28 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v28 )
      {
        ++L->AllocateMisses;
        v28 = (struct _SLIST_ENTRY *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
      }
    }
    if ( v28 )
      LODWORD(v28->Next) = CurrentPrcb->Number;
    v64 = v28;
    v7 = a4;
LABEL_22:
    if ( !v28 )
      break;
    *((_QWORD *)&v28[1].Next + 1) = p_WaitListHead;
    v28[2].Next = 0LL;
    v28[1].Next = *p_SparePtr;
    *p_SparePtr = v28 + 1;
    v29 = *(struct _SLIST_ENTRY ***)(a7 + 8);
    if ( *v29 != (struct _SLIST_ENTRY *)a7 )
      goto LABEL_24;
    v28->Next = (_SLIST_ENTRY *)a7;
    v63 = (struct _SLIST_ENTRY *)(&v28->Next + 1);
    *((_QWORD *)&v28->Next + 1) = v29;
    *v29 = v28;
    *(_QWORD *)(a7 + 8) = v28;
    CmpCallbackFillObjectContext(a1, a2, &p_WaitListHead[1].Blink);
    v11 = guard_dispatch_icall_no_overrides((__int64)p_WaitListHead[2].Flink, (int)a1);
    v60 = v11;
    if ( a1 == 14 )
    {
      v11 = 0;
      v60 = 0;
    }
    else if ( v11 < 0 )
    {
      Next = v28->Next;
      p_Next = &v63->Next->Next;
      if ( *(&v28->Next->Next + 1) != v28 || *p_Next != v28 )
LABEL_24:
        __fastfail(3u);
      *p_Next = Next;
      *((_QWORD *)&Next->Next + 1) = p_Next;
      if ( *p_SparePtr )
        *p_SparePtr = (*p_SparePtr)->Next;
      if ( LODWORD(CmpCallbackListLock.CycleTime) )
      {
LABEL_34:
        ExFreePoolWithTag(v28, 0);
      }
      else if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v49 = KeGetCurrentPrcb();
        v50 = v49->PPLookasideList[10].P;
        ++v50->TotalFrees;
        if ( LOWORD(v50->ListHead.Alignment) < v50->Depth
          || (++v50->FreeMisses,
              v50 = v49->PPLookasideList[10].L,
              ++v50->TotalFrees,
              LOWORD(v50->ListHead.Alignment) < v50->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v50->ListHead, v28);
        }
        else
        {
          ++v50->FreeMisses;
          guard_dispatch_icall_no_overrides((__int64)v28, (__int64)v49);
        }
      }
      else
      {
        v55 = WheapPfaLock.ExpectedRunTime * KeNumberProcessors_0;
        if ( (unsigned int)(WheapPfaLock.ExpectedRunTime * KeNumberProcessors_0) > 0x40 )
          v55 = 64;
        if ( LOWORD(CmpCallbackContextSList.Alignment) >= v55 )
          goto LABEL_34;
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v28);
      }
      if ( _InterlockedDecrement(v21) == 0x80000000 )
      {
        _InterlockedOr(v57, 0);
        if ( CmpCallbackListLock.QuantumTarget )
          ExfUnblockPushLock((volatile __int64 *)&CmpCallbackListLock.QuantumTarget, 0LL);
      }
      v7 = 0;
      v59 = 1;
      goto LABEL_39;
    }
    CmpCallbackFetchCallContext(a1, a2, v28);
    v58 = 1;
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    v46 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL, 0LL, v44);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock.Header.Lock, 0, v46, &CmpCallbackListLock);
    if ( v46 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v46, v45);
      else
        *((_BYTE *)v46 + 10) = 1;
    }
  }
  if ( _InterlockedDecrement(v21) == 0x80000000 )
  {
    _InterlockedOr(v57, 0);
    if ( CmpCallbackListLock.QuantumTarget )
      ExfUnblockPushLock((volatile __int64 *)&CmpCallbackListLock.QuantumTarget, 0LL);
  }
  v11 = -1073741670;
  v60 = -1073741670;
  v59 = 1;
  v7 = 0;
LABEL_39:
  if ( v58 )
  {
    _m_prefetchw(&CmpCallbackListLock);
    v32 = *(_QWORD *)&CmpCallbackListLock.Header.Lock - 16LL;
    if ( (*(_QWORD *)&CmpCallbackListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v32 = 0LL;
    if ( (CmpCallbackListLock.Header.Type & 2) != 0
      || (v33 = *(_QWORD *)&CmpCallbackListLock.Header.Lock,
          v33 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v32,
                   *(signed __int64 *)&CmpCallbackListLock.Header.Lock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((unsigned __int64)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35);
    v12 = 0LL;
  }
  else
  {
    v12 = v61;
  }
  v8 = a3;
  v9 = a2;
  v10 = a1;
LABEL_46:
  if ( !v7 )
  {
    if ( v59 == 1 )
    {
      v66 = 0LL;
      v67 = 0LL;
      v68 = 0LL;
      v69 = 0LL;
      v12 = &v66;
      v61 = &v66;
      v36 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v66 = a6;
      }
      else
      {
        if ( v11 == -1073740541 )
          v52 = **(_QWORD **)(v9 + 72);
        else
          v52 = 0LL;
        *(_QWORD *)&v66 = v52;
        v12 = v61;
      }
      if ( v11 == -1073740541 )
      {
        v53 = 0;
        if ( ((v10 - 26) & 0xFFFFFFFD) == 0 )
          v53 = *(_DWORD *)(v8 + 12);
      }
      else
      {
        v53 = v11;
      }
      DWORD2(v66) = v53;
      DWORD2(v67) = v53;
      *(_QWORD *)&v67 = v9;
      if ( v8 )
      {
        v65 = &v73;
        *(_QWORD *)&v73 = &v66;
        *((_QWORD *)&v73 + 1) = v8;
      }
    }
    else
    {
      v12 = (__int128 *)v9;
      v61 = (__int128 *)v9;
      v65 = (__int128 *)v8;
      v36 = v10;
    }
    while ( v20->Next != v20 )
    {
      v37 = (struct _SLIST_ENTRY *)*((_QWORD *)&v20->Next + 1);
      v63 = v37;
      v38 = (struct _SLIST_ENTRY **)*((_QWORD *)&v37->Next + 1);
      if ( v37->Next != v20 || *v38 != v37 )
        goto LABEL_24;
      *((_QWORD *)&v20->Next + 1) = v38;
      *v38 = v20;
      v62 = (LIST_ENTRY *)*((_QWORD *)&v37[1].Next + 1);
      v39 = v62;
      *((_QWORD *)v12 + 4) = v37[2].Next;
      CmpCallbackFillObjectContext(v36, v12, &v39[1].Blink);
      v40 = guard_dispatch_icall_no_overrides((__int64)v39[2].Flink, (int)v36);
      v60 = v40;
      v41 = (PVOID *)v72[1].WaitBlock[0].SparePtr;
      if ( v41 )
        v72[1].WaitBlock[0].SparePtr = *v41;
      if ( LODWORD(CmpCallbackListLock.CycleTime) )
      {
LABEL_55:
        ExFreePoolWithTag(v37, 0);
      }
      else if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->PPLookasideList[10].P;
        ++v48->TotalFrees;
        if ( LOWORD(v48->ListHead.Alignment) < v48->Depth
          || (++v48->FreeMisses,
              v48 = v47->PPLookasideList[10].L,
              ++v48->TotalFrees,
              LOWORD(v48->ListHead.Alignment) < v48->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v48->ListHead, v37);
        }
        else
        {
          ++v48->FreeMisses;
          guard_dispatch_icall_no_overrides((__int64)v37, (__int64)v47);
        }
      }
      else
      {
        v54 = WheapPfaLock.ExpectedRunTime * KeNumberProcessors_0;
        if ( (unsigned int)(WheapPfaLock.ExpectedRunTime * KeNumberProcessors_0) > 0x40 )
          v54 = 64;
        if ( LOWORD(CmpCallbackContextSList.Alignment) >= v54 )
          goto LABEL_55;
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v37);
      }
      if ( _InterlockedDecrement((volatile signed __int32 *)&v39[1]) == 0x80000000 )
      {
        _InterlockedOr(v57, 0);
        if ( CmpCallbackListLock.QuantumTarget )
          ExfUnblockPushLock((volatile __int64 *)&CmpCallbackListLock.QuantumTarget, 0LL);
      }
      v12 = v61;
      if ( v40 == -1073740541 )
        *((_DWORD *)v61 + 2) = *((_DWORD *)v61 + 6);
      v11 = 0;
      v60 = 0;
      continue;
    }
  }
  if ( v59 == 1 )
  {
    if ( v12 )
    {
      v11 = *((_DWORD *)v12 + 6);
      if ( v11 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v11;
}
