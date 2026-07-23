/*
 * XREFs of CmpDeleteKeyObject @ 0x1408CFA20
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpWaitForLateUnloadWorker @ 0x140478434 (CmpWaitForLateUnloadWorker.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     CmpDeleteKcbCache @ 0x1408CEA04 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmpFireCleanupNotifications @ 0x1408D1400 (CmpFireCleanupNotifications.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpFreePostBlock @ 0x1408D75E0 (CmpFreePostBlock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r15
  _DWORD *v3; // rbx
  char v4; // r13
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  PVOID ***v9; // rdi
  struct _KTHREAD *v10; // rax
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // r14
  PVOID **v15; // rax
  signed __int64 v16; // rdx
  __int64 v17; // rtt
  PVOID v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  _QWORD *v22; // r14
  AutoBoost *v23; // rax
  void *v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  AutoBoost *v27; // rdi
  __int64 v28; // rdi
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rcx
  char *v32; // rbx
  unsigned int i; // r8d
  signed __int64 v34; // rax
  __int64 v35; // r15
  AutoBoost *v36; // rax
  void *v37; // rdx
  AutoBoost *v38; // rdi
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  struct _PRIVILEGE_SET *v43; // rdi
  ULONG_PTR *p_Attributes; // r15
  __int64 v45; // r12
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  struct _KLOCK_ENTRIES *v49; // r9
  __int64 v50; // rax
  __int128 *v51; // rcx
  _DWORD *v52; // rdi
  __int64 v53; // rcx
  _QWORD *v54; // rax
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  void *v58; // rcx
  PVOID **v60; // rcx
  PVOID *v61; // rcx
  PVOID ***v62; // r8
  bool v63; // zf
  PVOID *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  PVOID **v67; // rdi
  __int64 v68; // r9
  struct _KEVENT *v69; // rcx
  struct _WORK_QUEUE_ITEM *v70; // rcx
  signed __int32 v71[8]; // [rsp+0h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-79h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-71h]
  __int128 v74; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v75[2]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v76; // [rsp+70h] [rbp-49h] BYREF
  __int64 v77; // [rsp+80h] [rbp-39h]
  __int128 v78; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v79[3]; // [rsp+98h] [rbp-21h] BYREF
  int v80; // [rsp+B0h] [rbp-9h]
  __int128 v81; // [rsp+B4h] [rbp-5h]
  __int64 v82; // [rsp+C4h] [rbp+Bh]
  int v83; // [rsp+CCh] [rbp+13h]
  _OWORD v84[4]; // [rsp+D0h] [rbp+17h] BYREF

  v2 = 0;
  v77 = 0LL;
  v3 = 0LL;
  v76 = 0LL;
  v4 = 0;
  v74 = 0LL;
  memset(v84, 0, 32);
  v78 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v76);
  v75[1] = v75;
  v75[0] = v75;
  CmpInitializeDelayDerefContext(&v78);
  if ( (*(_BYTE *)(a1 + 48) & 4) != 0 )
    return CmCleanupThreadInfo((_KAFFINITY_EX **)&v76);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( HIDWORD(WheapPfaLock.StateSaveArea) )
  {
    if ( !(unsigned int)CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v84[0] = a1;
      CmpCallCallBacksEx(14, (unsigned int)v84, 0, 1, 25, a1, (__int64)v75);
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        v9 = (PVOID ***)(a1 + 72);
        if ( *v9 != (PVOID **)v9 )
        {
          CmpFireCleanupNotifications(a1);
          p_P = &P;
          P = &P;
          v10 = KeGetCurrentThread();
          --v10->KernelApcDisable;
          v12 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL, 0LL, v11);
          v14 = v12;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&CmpContextListLock, v12, (__int64)&CmpContextListLock);
          if ( v14 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v14, v13);
            else
              *((_BYTE *)v14 + 10) = 1;
          }
          while ( 1 )
          {
            v15 = *v9;
            if ( *v9 == (PVOID **)v9 )
              break;
            if ( v15[1] != (PVOID *)v9 )
              goto LABEL_101;
            v60 = (PVOID **)*v15;
            if ( (*v15)[1] != v15 )
              goto LABEL_101;
            *v9 = v60;
            v60[1] = (PVOID *)v9;
            v61 = v15[2];
            if ( v61[1] != v15 + 2 )
              goto LABEL_101;
            v62 = (PVOID ***)v15[3];
            if ( *v62 != v15 + 2 )
              goto LABEL_101;
            *v62 = (PVOID **)v61;
            v63 = v62 == (PVOID ***)v61;
            v61[1] = v62;
            v64 = p_P;
            if ( v63 )
              v2 = 1;
            if ( *p_P != &P )
              goto LABEL_101;
            v15[1] = p_P;
            *v15 = &P;
            *v64 = v15;
            p_P = (PVOID *)v15;
          }
          _m_prefetchw(&CmpContextListLock);
          v16 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
          if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v16 = 0LL;
          if ( (CmpContextListLock.Header.Type & 2) != 0
            || (v17 = *(_QWORD *)&CmpContextListLock.Header.Lock,
                v17 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v16,
                         *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((unsigned __int64)&CmpContextListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v2 )
          {
            _InterlockedOr(v71, 0);
            if ( CallbackListDeleteEvent )
              ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
          }
          while ( 1 )
          {
            v18 = P;
            if ( P == &P )
              break;
            if ( *((PVOID **)P + 1) != &P )
              goto LABEL_101;
            v65 = *(_QWORD *)P;
            if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
              goto LABEL_101;
            P = *(PVOID *)P;
            *(_QWORD *)(v65 + 8) = &P;
            ExFreePoolWithTag(v18, 0x63634D43u);
          }
        }
      }
    }
  }
  v19 = *(_QWORD *)(a1 + 56);
  if ( v19 )
    ObfDereferenceObject((PVOID)(v19 & 0xFFFFFFFFFFFFFFFEuLL));
  *((_QWORD *)&v74 + 1) = &v74;
  *(_QWORD *)&v74 = &v74;
  CmpLockRegistry(v19, v5, v6, v7);
  v22 = *(_QWORD **)(a1 + 8);
  if ( v22 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v23 = (AutoBoost *)KeAbPreAcquire((__int64)(v22 + 6), 0LL, 0LL, (struct _KLOCK_ENTRIES *)v21);
        v27 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v22 + 12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v22 + 6, v23, (__int64)(v22 + 6));
        if ( v27 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v27, v24);
          else
            *((_BYTE *)v27 + 10) = 1;
        }
        v22[7] = KeGetCurrentThread();
        if ( *(_QWORD *)(a1 + 16) )
        {
          v28 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
          CmLockHive(v28, (__int64)v24, v25, v26);
          v31 = *(_QWORD *)(a1 + 16);
          if ( !v31 )
            goto LABEL_119;
          if ( *(_QWORD *)(v31 + 16) != v31 + 16 )
            CmpPostNotify(v31, v29, v30, 267, 0, 0LL, (__int64)&v74);
          v32 = *(char **)(a1 + 16);
          if ( v32 )
          {
            SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v32 + 56));
            **((_QWORD **)v32 + 1) = *(_QWORD *)v32;
            if ( *(_QWORD *)v32 )
              *(_QWORD *)(*(_QWORD *)v32 + 8LL) = *((_QWORD *)v32 + 1);
            *(_QWORD *)(a1 + 16) = 0LL;
            CmUnlockHive(v28);
            ExFreePoolWithTag(v32, 0);
          }
          else
          {
LABEL_119:
            CmUnlockHive(v28);
          }
        }
        CmpUnlockKcb((ULONG_PTR)v22);
      }
      LOBYTE(v21) = 0;
      if ( (*(_BYTE *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_40:
        for ( i = 0; i < 4; ++i )
        {
          v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 136), 0LL, a1);
          if ( a1 == v34 )
            goto LABEL_55;
          if ( (unsigned __int64)(v34 - 1) <= 1 )
          {
            CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
            v21 = 1LL;
            goto LABEL_40;
          }
        }
        if ( !(_BYTE)v21 )
        {
          v35 = *(_QWORD *)(a1 + 8);
          v36 = (AutoBoost *)KeAbPreAcquire(v35 + 48, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v21);
          v38 = v36;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v35 + 48), v36, v35 + 48);
          if ( v38 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v38, v37);
            else
              *((_BYTE *)v38 + 10) = 1;
          }
          LOBYTE(v21) = 1;
          *(_QWORD *)(v35 + 56) = KeGetCurrentThread();
        }
        v39 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(v39 + 8) != a1 + 32 || (v40 = *(_QWORD **)(a1 + 40), *v40 != a1 + 32) )
LABEL_101:
          __fastfail(3u);
        *v40 = v39;
        *(_QWORD *)(v39 + 8) = v40;
LABEL_55:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( (_BYTE)v21 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v3 = (_DWORD *)v22[4];
      _m_prefetchw(v3 + 1060);
      v41 = v3[1060];
      if ( v41 )
      {
        do
        {
          v42 = v41;
          v41 = _InterlockedCompareExchange(v3 + 1060, v41 + 1, v41);
        }
        while ( v42 != v41 && v41 );
      }
      if ( *((_BYTE *)v3 + 2952) == 1 )
      {
        v4 = 1;
        v3[(_InterlockedExchangeAdd(v3 + 1061, 1u) & 0x7F) + 1062] = 16;
      }
      v43 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v43 )
      {
        if ( SLOWORD(v43->PrivilegeCount) >= 0 )
        {
          p_Attributes = (ULONG_PTR *)&v43->Privilege[0].Attributes;
          v45 = (unsigned __int16)(LOWORD(v43->PrivilegeCount) + 1);
          do
          {
            if ( *p_Attributes )
              CmpDereferenceKeyControlBlock(*p_Attributes);
            p_Attributes += 3;
            --v45;
          }
          while ( v45 );
        }
        CmSiFreeMemory(v43);
        CmpDrainDelayDerefContext((_QWORD **)&v78);
      }
      if ( (*(_BYTE *)(a1 + 48) & 0x20) != 0 )
      {
        v46 = *(_QWORD *)(a1 + 104);
        MmUnlockPages((PMDL)(v46 + 64));
        MmUnlockPages((PMDL)v46);
        CmSiFreeMemory((PPRIVILEGE_SET)v46);
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_WORD *)(a1 + 48) &= ~0x20u;
      }
    }
    else
    {
      v3 = (_DWORD *)v22[4];
      CmpReferenceHive((__int64)v3);
      if ( *((_BYTE *)v3 + 2952) == 1 )
      {
        v4 = 1;
        v3[(_InterlockedExchangeAdd(v3 + 1061, 1u) & 0x7F) + 1062] = 17;
      }
    }
    CmpDereferenceKeyControlBlock((ULONG_PTR)v22);
  }
  CmpUnlockRegistry(v20);
  while ( 1 )
  {
    v50 = v74;
    v51 = &v74;
    if ( (__int128 *)v74 == &v74 )
      break;
    if ( *(__int128 **)(v74 + 8) != &v74 )
      goto LABEL_101;
    v66 = *(_QWORD *)v74;
    if ( *(_QWORD *)(*(_QWORD *)v74 + 8LL) != (_QWORD)v74 )
      goto LABEL_101;
    *(_QWORD *)&v74 = *(_QWORD *)v74;
    v67 = (PVOID **)(v50 - 16);
    *(_QWORD *)(v66 + 8) = &v74;
    v68 = *(_QWORD *)(v50 - 16 + 64);
    if ( (unsigned __int16)*(_DWORD *)(v50 - 16 + 56) != 3 )
    {
      v69 = *(struct _KEVENT **)v68;
      goto LABEL_109;
    }
    v70 = *(struct _WORK_QUEUE_ITEM **)(v68 + 8);
    if ( v70 )
      ExQueueWorkItem(v70, *(WORK_QUEUE_TYPE *)(v68 + 16));
    v69 = (struct _KEVENT *)*v67[8];
    if ( v69 )
    {
LABEL_109:
      KeSetEvent(v69, 0, 0);
      ObfDereferenceObject(*v67[8]);
      CmpFreePostBlock(v67);
    }
    else
    {
      CmpFreePostBlock(v67);
    }
  }
  if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v75[0] != v75 )
  {
    v79[1] = 0LL;
    v79[2] = v84;
    v82 = 0LL;
    v83 = 0;
    v81 = 0LL;
    v79[0] = 0LL;
    v80 = 0;
    CmpCallCallBacksEx(25, (unsigned int)v79, 0, 0, 25, 0LL, (__int64)v75);
  }
  if ( v4 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker((__int64)v3);
  if ( !v3 || _InterlockedExchangeAdd(v3 + 1060, 0xFFFFFFFF) != 1 )
    goto LABEL_93;
  v52 = v3 + 402;
  if ( *(_DWORD **)v52 == v52 )
    goto LABEL_84;
  CmpLockHiveListExclusive((__int64)v51, v47, v48, v49);
  v53 = *(_QWORD *)v52;
  if ( *(_DWORD **)(*(_QWORD *)v52 + 8LL) != v52 )
    goto LABEL_101;
  v54 = (_QWORD *)*((_QWORD *)v3 + 202);
  if ( (_DWORD *)*v54 != v52 )
    goto LABEL_101;
  *v54 = v53;
  *(_QWORD *)(v53 + 8) = v54;
  CmpUnlockHiveList();
LABEL_84:
  *v3 = -1160724768;
  HvFreeDirtyData((__int64)v3);
  CmpDeleteKcbCache((__int64)v3);
  v55 = (void *)*((_QWORD *)v3 + 232);
  if ( v55 )
    ExFreePoolWithTag(v55, 0x624E4D43u);
  v56 = (void *)*((_QWORD *)v3 + 230);
  if ( v56 )
    ExFreePoolWithTag(v56, 0x20204D43u);
  v57 = (void *)*((_QWORD *)v3 + 234);
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  v58 = (void *)*((_QWORD *)v3 + 603);
  if ( v58 )
    ExFreePoolWithTag(v58, 0);
  CmpReleaseGlobalQuota(0x12E0u);
  ExFreePoolWithTag(v3, 0);
LABEL_93:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v76);
}
