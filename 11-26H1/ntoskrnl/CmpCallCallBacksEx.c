/*
 * XREFs of CmpCallCallBacksEx @ 0x1408D03F0
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140856030 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x1408564A0 (NtSaveMergedKeys.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x1408CF960 (CmPostCallbackNotification.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpCallCallBacks @ 0x1408D02C0 (CmpCallCallBacks.c)
 *     CmPostCallbackNotificationEx @ 0x1408D0300 (CmPostCallbackNotificationEx.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     CmpSecurityMethod @ 0x1408F39C0 (CmpSecurityMethod.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtSaveKeyEx @ 0x140A7E1F0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A7FCE0 (NtRestoreKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallbackFatalFilter @ 0x140856C80 (CmpCallbackFatalFilter.c)
 *     CmpCallbackFillObjectContext @ 0x1408D0DB0 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFetchCallContext @ 0x1408D12D0 (CmpCallbackFetchCallContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _KTHREAD *v17; // rax
  void *v18; // rdx
  LegacyAutoBoost *v19; // rbx
  _SLIST_ENTRY *v20; // rdi
  volatile signed __int32 *v21; // r15
  struct _LIST_ENTRY *v22; // rdx
  struct _LIST_ENTRY *Flink; // rtt
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // r14
  _SLIST_ENTRY *v26; // rbx
  _SLIST_ENTRY **v27; // rcx
  _SLIST_ENTRY *Next; // rdx
  _SLIST_ENTRY **p_Next; // rcx
  struct _LIST_ENTRY *v30; // rdx
  struct _LIST_ENTRY *v31; // rtt
  unsigned int v32; // r15d
  _SLIST_ENTRY *v33; // rbx
  _SLIST_ENTRY **v34; // rax
  struct _LIST_ENTRY **v35; // rsi
  int v36; // r14d
  PVOID *v37; // rax
  struct _KTHREAD *v39; // rax
  struct _KLOCK_ENTRIES *v40; // r9
  void *v41; // rdx
  LegacyAutoBoost *v42; // rbx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  _GENERAL_LOOKASIDE *L; // r14
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  PSLIST_ENTRY Pool2; // rax
  signed __int32 v53[8]; // [rsp+0h] [rbp-E8h] BYREF
  char v54; // [rsp+20h] [rbp-C8h]
  char v55; // [rsp+21h] [rbp-C7h]
  int v56; // [rsp+24h] [rbp-C4h]
  __int128 *v57; // [rsp+28h] [rbp-C0h]
  struct _LIST_ENTRY **v58; // [rsp+30h] [rbp-B8h]
  _SLIST_ENTRY *v59; // [rsp+38h] [rbp-B0h]
  PSLIST_ENTRY v60; // [rsp+40h] [rbp-A8h]
  __int128 *v61; // [rsp+48h] [rbp-A0h]
  __int128 v62; // [rsp+50h] [rbp-98h] BYREF
  __int128 v63; // [rsp+60h] [rbp-88h]
  __int128 v64; // [rsp+70h] [rbp-78h]
  __int64 v65; // [rsp+80h] [rbp-68h]
  struct _LIST_ENTRY **v66; // [rsp+88h] [rbp-60h]
  unsigned __int8 *v67; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *v68; // [rsp+98h] [rbp-50h]
  __int128 v69; // [rsp+A0h] [rbp-48h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = 0;
  v56 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v69 = 0LL;
  v12 = 0LL;
  v57 = 0LL;
  v61 = 0LL;
  v55 = 0;
  CurrentThread = KeGetCurrentThread();
  v68 = CurrentThread;
  if ( v7 != 1 )
  {
    v20 = (_SLIST_ENTRY *)a7;
    goto LABEL_46;
  }
  p_SparePtr = (_SLIST_ENTRY **)&CurrentThread[1].WaitBlock[0].SparePtr;
  v67 = &CurrentThread[1].WaitBlockFill5[40];
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  if ( SparePtr )
    p_Blink = (struct _LIST_ENTRY **)*((_QWORD *)SparePtr + 1);
  else
    p_Blink = &CmpContextListLock.Header.WaitListHead.Blink;
  v54 = 1;
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v19 = (LegacyAutoBoost *)KeAbPreAcquire(
                             (__int64)&CmpContextListLock.Header.WaitListHead,
                             0LL,
                             0LL,
                             (struct _KLOCK_ENTRIES *)v8);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CmpContextListLock.Header.WaitListHead,
      0,
      v19,
      (struct _KTHREAD *)&CmpContextListLock.Header.WaitListHead);
  }
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
      p_Blink = (struct _LIST_ENTRY **)*p_Blink;
      v58 = p_Blink;
      if ( p_Blink == &CmpContextListLock.Header.WaitListHead.Blink )
        goto LABEL_39;
      v21 = (volatile signed __int32 *)(p_Blink + 2);
      v66 = p_Blink + 2;
    }
    while ( *((int *)p_Blink + 4) < 0 );
    _InterlockedIncrement(v21);
    _m_prefetchw(&CmpContextListLock.Header.WaitListHead);
    v22 = CmpContextListLock.Header.WaitListHead.Flink - 1;
    if ( ((unsigned __int64)CmpContextListLock.Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( ((__int64)CmpContextListLock.Header.WaitListHead.Flink & 2) != 0
      || (Flink = CmpContextListLock.Header.WaitListHead.Flink,
          Flink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
                                           (signed __int64)v22,
                                           (signed __int64)CmpContextListLock.Header.WaitListHead.Flink)) )
    {
      ExfReleasePushLock(&CmpContextListLock.Header.WaitListHead.Flink);
    }
    KeAbPostRelease((unsigned __int64)&CmpContextListLock.Header.WaitListHead);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v54 = 0;
    if ( LODWORD(CmpContextListLock.ThreadLock) )
      goto LABEL_116;
    if ( !CmpAllocateCallbackMemoryFromPerProcLookaside )
    {
      Pool2 = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      v26 = Pool2;
      if ( !Pool2 )
      {
LABEL_116:
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x100uLL);
        v26 = Pool2;
      }
      v60 = Pool2;
      goto LABEL_22;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[10].P;
    ++P->TotalAllocates;
    v26 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v26 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[10].L;
      ++L->TotalAllocates;
      v26 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v26 )
      {
        ++L->AllocateMisses;
        v26 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
      }
    }
    if ( v26 )
      LODWORD(v26->Next) = CurrentPrcb->Number;
    v60 = v26;
    v7 = a4;
LABEL_22:
    if ( !v26 )
      break;
    *((_QWORD *)&v26[1].Next + 1) = p_Blink;
    v26[2].Next = 0LL;
    v26[1].Next = *p_SparePtr;
    *p_SparePtr = v26 + 1;
    v27 = *(_SLIST_ENTRY ***)(a7 + 8);
    if ( *v27 != (_SLIST_ENTRY *)a7 )
      goto LABEL_24;
    v26->Next = (_SLIST_ENTRY *)a7;
    v59 = (_SLIST_ENTRY *)(&v26->Next + 1);
    *((_QWORD *)&v26->Next + 1) = v27;
    *v27 = v26;
    *(_QWORD *)(a7 + 8) = v26;
    CmpCallbackFillObjectContext(a1, a2, p_Blink + 3);
    v11 = guard_dispatch_icall_no_overrides((__int64)p_Blink[4], (int)a1);
    v56 = v11;
    if ( a1 == 14 )
    {
      v11 = 0;
      v56 = 0;
    }
    else if ( v11 < 0 )
    {
      Next = v26->Next;
      p_Next = &v59->Next->Next;
      if ( *(&v26->Next->Next + 1) != v26 || *p_Next != v26 )
LABEL_24:
        __fastfail(3u);
      *p_Next = Next;
      *((_QWORD *)&Next->Next + 1) = p_Next;
      if ( *p_SparePtr )
        *p_SparePtr = (*p_SparePtr)->Next;
      if ( LODWORD(CmpContextListLock.ThreadLock) )
      {
LABEL_34:
        ExFreePoolWithTag(v26, 0);
      }
      else if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->PPLookasideList[10].P;
        ++v46->TotalFrees;
        if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
          || (++v46->FreeMisses,
              v46 = v45->PPLookasideList[10].L,
              ++v46->TotalFrees,
              LOWORD(v46->ListHead.Alignment) < v46->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v46->ListHead, v26);
        }
        else
        {
          ++v46->FreeMisses;
          guard_dispatch_icall_no_overrides((__int64)v26, (__int64)v45);
        }
      }
      else
      {
        v51 = HIDWORD(WheapPfaLock.StateSaveArea) * KeNumberProcessors_0;
        if ( (unsigned int)(HIDWORD(WheapPfaLock.StateSaveArea) * KeNumberProcessors_0) > 0x40 )
          v51 = 64;
        if ( LOWORD(CmpCallbackContextSList.Alignment) >= v51 )
          goto LABEL_34;
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v26);
      }
      if ( _InterlockedDecrement(v21) == 0x80000000 )
      {
        _InterlockedOr(v53, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      v7 = 0;
      v55 = 1;
      goto LABEL_39;
    }
    CmpCallbackFetchCallContext(a1, a2, v26);
    v54 = 1;
    v39 = KeGetCurrentThread();
    --v39->KernelApcDisable;
    v42 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock.Header.WaitListHead, 0LL, 0LL, v40);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CmpContextListLock.Header.WaitListHead,
        0,
        v42,
        (struct _KTHREAD *)&CmpContextListLock.Header.WaitListHead);
    }
    if ( v42 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v42, v41);
      else
        *((_BYTE *)v42 + 10) = 1;
    }
  }
  if ( _InterlockedDecrement(v21) == 0x80000000 )
  {
    _InterlockedOr(v53, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  v11 = -1073741670;
  v56 = -1073741670;
  v55 = 1;
  v7 = 0;
LABEL_39:
  if ( v54 )
  {
    _m_prefetchw(&CmpContextListLock.Header.WaitListHead);
    v30 = CmpContextListLock.Header.WaitListHead.Flink - 1;
    if ( ((unsigned __int64)CmpContextListLock.Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v30 = 0LL;
    if ( ((__int64)CmpContextListLock.Header.WaitListHead.Flink & 2) != 0
      || (v31 = CmpContextListLock.Header.WaitListHead.Flink,
          v31 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
                                         (signed __int64)v30,
                                         (signed __int64)CmpContextListLock.Header.WaitListHead.Flink)) )
    {
      ExfReleasePushLock(&CmpContextListLock.Header.WaitListHead.Flink);
    }
    KeAbPostRelease((unsigned __int64)&CmpContextListLock.Header.WaitListHead);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = 0LL;
  }
  else
  {
    v12 = v57;
  }
  v8 = a3;
  v9 = a2;
  v10 = a1;
LABEL_46:
  if ( !v7 )
  {
    if ( v55 == 1 )
    {
      v62 = 0LL;
      v63 = 0LL;
      v64 = 0LL;
      v65 = 0LL;
      v12 = &v62;
      v57 = &v62;
      v32 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v62 = a6;
      }
      else
      {
        if ( v11 == -1073740541 )
          v48 = **(_QWORD **)(v9 + 72);
        else
          v48 = 0LL;
        *(_QWORD *)&v62 = v48;
        v12 = v57;
      }
      if ( v11 == -1073740541 )
      {
        v49 = 0;
        if ( ((v10 - 26) & 0xFFFFFFFD) == 0 )
          v49 = *(_DWORD *)(v8 + 12);
      }
      else
      {
        v49 = v11;
      }
      DWORD2(v62) = v49;
      DWORD2(v63) = v49;
      *(_QWORD *)&v63 = v9;
      if ( v8 )
      {
        v61 = &v69;
        *(_QWORD *)&v69 = &v62;
        *((_QWORD *)&v69 + 1) = v8;
      }
    }
    else
    {
      v12 = (__int128 *)v9;
      v57 = (__int128 *)v9;
      v61 = (__int128 *)v8;
      v32 = v10;
    }
    while ( v20->Next != v20 )
    {
      v33 = (_SLIST_ENTRY *)*((_QWORD *)&v20->Next + 1);
      v59 = v33;
      v34 = (_SLIST_ENTRY **)*((_QWORD *)&v33->Next + 1);
      if ( v33->Next != v20 || *v34 != v33 )
        goto LABEL_24;
      *((_QWORD *)&v20->Next + 1) = v34;
      *v34 = v20;
      v58 = (struct _LIST_ENTRY **)*((_QWORD *)&v33[1].Next + 1);
      v35 = v58;
      *((_QWORD *)v12 + 4) = v33[2].Next;
      CmpCallbackFillObjectContext(v32, v12, v35 + 3);
      v36 = guard_dispatch_icall_no_overrides((__int64)v35[4], (int)v32);
      v56 = v36;
      v37 = (PVOID *)v68[1].WaitBlock[0].SparePtr;
      if ( v37 )
        v68[1].WaitBlock[0].SparePtr = *v37;
      if ( LODWORD(CmpContextListLock.ThreadLock) )
      {
LABEL_55:
        ExFreePoolWithTag(v33, 0);
      }
      else if ( CmpAllocateCallbackMemoryFromPerProcLookaside )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->PPLookasideList[10].P;
        ++v44->TotalFrees;
        if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
          || (++v44->FreeMisses,
              v44 = v43->PPLookasideList[10].L,
              ++v44->TotalFrees,
              LOWORD(v44->ListHead.Alignment) < v44->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v44->ListHead, v33);
        }
        else
        {
          ++v44->FreeMisses;
          guard_dispatch_icall_no_overrides((__int64)v33, (__int64)v43);
        }
      }
      else
      {
        v50 = HIDWORD(WheapPfaLock.StateSaveArea) * KeNumberProcessors_0;
        if ( (unsigned int)(HIDWORD(WheapPfaLock.StateSaveArea) * KeNumberProcessors_0) > 0x40 )
          v50 = 64;
        if ( LOWORD(CmpCallbackContextSList.Alignment) >= v50 )
          goto LABEL_55;
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v33);
      }
      if ( _InterlockedDecrement((volatile signed __int32 *)v35 + 4) == 0x80000000 )
      {
        _InterlockedOr(v53, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      v12 = v57;
      if ( v36 == -1073740541 )
        *((_DWORD *)v57 + 2) = *((_DWORD *)v57 + 6);
      v11 = 0;
      v56 = 0;
      continue;
    }
  }
  if ( v55 == 1 )
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
