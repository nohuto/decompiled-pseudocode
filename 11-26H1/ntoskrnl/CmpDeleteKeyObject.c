/*
 * XREFs of CmpDeleteKeyObject @ 0x1408C9470
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpWaitForLateUnloadWorker @ 0x14047EAC4 (CmpWaitForLateUnloadWorker.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmpDeleteKcbCache @ 0x1408C8450 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408C84C8 (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408C8530 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408C8574 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmLockHive @ 0x1408C8694 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408C86FC (CmUnlockHive.c)
 *     CmpReferenceHive @ 0x1408C8740 (CmpReferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpFireCleanupNotifications @ 0x1408CAE50 (CmpFireCleanupNotifications.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpFreePostBlock @ 0x1408D1020 (CmpFreePostBlock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r15
  _DWORD *v3; // rbx
  char v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  PVOID ***v6; // rdi
  struct _KTHREAD *v7; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // r14
  PVOID **v12; // rax
  char *v13; // rdx
  void *SListFaultAddress; // rtt
  __int64 v15; // rdx
  __int64 v16; // r8
  PVOID v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  _QWORD *v21; // r14
  AutoBoost *v22; // rax
  void *v23; // rdx
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  AutoBoost *v26; // rdi
  __int64 v27; // rdi
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rcx
  char *v31; // rbx
  unsigned int i; // r8d
  signed __int64 v33; // rax
  __int64 v34; // r15
  AutoBoost *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // rdi
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  struct _PRIVILEGE_SET *v42; // rdi
  ULONG_PTR *p_Attributes; // r15
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  struct _KLOCK_ENTRIES *v48; // r9
  __int64 v49; // rax
  __int128 *v50; // rcx
  _DWORD *v51; // rdi
  __int64 v52; // rcx
  _QWORD *v53; // rax
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  PVOID **v59; // rcx
  PVOID *v60; // rcx
  PVOID ***v61; // r8
  bool v62; // zf
  PVOID *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  PVOID **v66; // rdi
  __int64 v67; // r9
  struct _KEVENT *v68; // rcx
  struct _WORK_QUEUE_ITEM *v69; // rcx
  signed __int32 v70[8]; // [rsp+0h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-79h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-71h]
  __int128 v73; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v74[2]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v75; // [rsp+70h] [rbp-49h] BYREF
  __int64 v76; // [rsp+80h] [rbp-39h]
  __int128 v77; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v78[3]; // [rsp+98h] [rbp-21h] BYREF
  int v79; // [rsp+B0h] [rbp-9h]
  __int128 v80; // [rsp+B4h] [rbp-5h]
  __int64 v81; // [rsp+C4h] [rbp+Bh]
  int v82; // [rsp+CCh] [rbp+13h]
  _OWORD v83[4]; // [rsp+D0h] [rbp+17h] BYREF

  v2 = 0;
  v76 = 0LL;
  v3 = 0LL;
  v75 = 0LL;
  v4 = 0;
  v73 = 0LL;
  memset(v83, 0, 32);
  v77 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v75);
  v74[1] = v74;
  v74[0] = v74;
  CmpInitializeDelayDerefContext(&v77);
  if ( (*(_BYTE *)(a1 + 48) & 4) != 0 )
    return CmCleanupThreadInfo((_KAFFINITY_EX **)&v75);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( WheapPfaLock.ExpectedRunTime )
  {
    if ( !(unsigned int)CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v83[0] = a1;
      CmpCallCallBacksEx(14, (unsigned int)v83, 0, 1, 25, a1, (__int64)v74);
      if ( *(_DWORD *)a1 == 1803104306 )
      {
        v6 = (PVOID ***)(a1 + 72);
        if ( *v6 != (PVOID **)v6 )
        {
          CmpFireCleanupNotifications(a1);
          p_P = &P;
          P = &P;
          v7 = KeGetCurrentThread();
          --v7->KernelApcDisable;
          v9 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.SListFaultAddress, 0LL, 0LL, v8);
          v11 = v9;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock.SListFaultAddress, 0LL) )
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&CmpCallbackListLock.SListFaultAddress,
              v9,
              (__int64)&CmpCallbackListLock.SListFaultAddress);
          if ( v11 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v11, v10);
            else
              *((_BYTE *)v11 + 10) = 1;
          }
          while ( 1 )
          {
            v12 = *v6;
            if ( *v6 == (PVOID **)v6 )
              break;
            if ( v12[1] != (PVOID *)v6 )
              goto LABEL_101;
            v59 = (PVOID **)*v12;
            if ( (*v12)[1] != v12 )
              goto LABEL_101;
            *v6 = v59;
            v59[1] = (PVOID *)v6;
            v60 = v12[2];
            if ( v60[1] != v12 + 2 )
              goto LABEL_101;
            v61 = (PVOID ***)v12[3];
            if ( *v61 != v12 + 2 )
              goto LABEL_101;
            *v61 = (PVOID **)v60;
            v62 = v61 == (PVOID ***)v60;
            v60[1] = v61;
            v63 = p_P;
            if ( v62 )
              v2 = 1;
            if ( *p_P != &P )
              goto LABEL_101;
            v12[1] = p_P;
            *v12 = &P;
            *v63 = v12;
            p_P = (PVOID *)v12;
          }
          _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
          v13 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
          if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v13 = 0LL;
          if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
            || (SListFaultAddress = CmpCallbackListLock.SListFaultAddress,
                SListFaultAddress != (void *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                                               (signed __int64)v13,
                                               (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
          {
            ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
          }
          KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16);
          if ( v2 )
          {
            _InterlockedOr(v70, 0);
            if ( CmpCallbackListLock.QuantumTarget )
              ExfUnblockPushLock((volatile __int64 *)&CmpCallbackListLock.QuantumTarget, 0LL);
          }
          while ( 1 )
          {
            v17 = P;
            if ( P == &P )
              break;
            if ( *((PVOID **)P + 1) != &P )
              goto LABEL_101;
            v64 = *(_QWORD *)P;
            if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
              goto LABEL_101;
            P = *(PVOID *)P;
            *(_QWORD *)(v64 + 8) = &P;
            ExFreePoolWithTag(v17, 0x63634D43u);
          }
        }
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
    ObfDereferenceObject((PVOID)(v18 & 0xFFFFFFFFFFFFFFFEuLL));
  *((_QWORD *)&v73 + 1) = &v73;
  *(_QWORD *)&v73 = &v73;
  CmpLockRegistry(v18);
  v21 = *(_QWORD **)(a1 + 8);
  if ( v21 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v22 = (AutoBoost *)KeAbPreAcquire((__int64)(v21 + 6), 0LL, 0LL, (struct _KLOCK_ENTRIES *)v20);
        v26 = v22;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v21 + 12, 0LL) )
          ExfAcquirePushLockExclusiveEx(v21 + 6, v22, (__int64)(v21 + 6));
        if ( v26 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v26, v23);
          else
            *((_BYTE *)v26 + 10) = 1;
        }
        v21[7] = KeGetCurrentThread();
        if ( *(_QWORD *)(a1 + 16) )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
          CmLockHive(v27, (__int64)v23, v24, v25);
          v30 = *(_QWORD *)(a1 + 16);
          if ( !v30 )
            goto LABEL_119;
          if ( *(_QWORD *)(v30 + 16) != v30 + 16 )
            CmpPostNotify(v30, v28, v29, 267, 0, 0LL, (__int64)&v73);
          v31 = *(char **)(a1 + 16);
          if ( v31 )
          {
            SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v31 + 56));
            **((_QWORD **)v31 + 1) = *(_QWORD *)v31;
            if ( *(_QWORD *)v31 )
              *(_QWORD *)(*(_QWORD *)v31 + 8LL) = *((_QWORD *)v31 + 1);
            *(_QWORD *)(a1 + 16) = 0LL;
            CmUnlockHive(v27);
            ExFreePoolWithTag(v31, 0);
          }
          else
          {
LABEL_119:
            CmUnlockHive(v27);
          }
        }
        CmpUnlockKcb((ULONG_PTR)v21);
      }
      LOBYTE(v20) = 0;
      if ( (*(_BYTE *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_40:
        for ( i = 0; i < 4; ++i )
        {
          v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 136), 0LL, a1);
          if ( a1 == v33 )
            goto LABEL_55;
          if ( (unsigned __int64)(v33 - 1) <= 1 )
          {
            CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
            v20 = 1LL;
            goto LABEL_40;
          }
        }
        if ( !(_BYTE)v20 )
        {
          v34 = *(_QWORD *)(a1 + 8);
          v35 = (AutoBoost *)KeAbPreAcquire(v34 + 48, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v20);
          v37 = v35;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v34 + 48), v35, v34 + 48);
          if ( v37 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v37, v36);
            else
              *((_BYTE *)v37 + 10) = 1;
          }
          LOBYTE(v20) = 1;
          *(_QWORD *)(v34 + 56) = KeGetCurrentThread();
        }
        v38 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(v38 + 8) != a1 + 32 || (v39 = *(_QWORD **)(a1 + 40), *v39 != a1 + 32) )
LABEL_101:
          __fastfail(3u);
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
LABEL_55:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( (_BYTE)v20 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v3 = (_DWORD *)v21[4];
      _m_prefetchw(v3 + 1060);
      v40 = v3[1060];
      if ( v40 )
      {
        do
        {
          v41 = v40;
          v40 = _InterlockedCompareExchange(v3 + 1060, v40 + 1, v40);
        }
        while ( v41 != v40 && v40 );
      }
      if ( *((_BYTE *)v3 + 2952) == 1 )
      {
        v4 = 1;
        v3[(_InterlockedExchangeAdd(v3 + 1061, 1u) & 0x7F) + 1062] = 16;
      }
      v42 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v42 )
      {
        if ( SLOWORD(v42->PrivilegeCount) >= 0 )
        {
          p_Attributes = (ULONG_PTR *)&v42->Privilege[0].Attributes;
          v44 = (unsigned __int16)(LOWORD(v42->PrivilegeCount) + 1);
          do
          {
            if ( *p_Attributes )
              CmpDereferenceKeyControlBlock(*p_Attributes);
            p_Attributes += 3;
            --v44;
          }
          while ( v44 );
        }
        CmSiFreeMemory(v42);
        CmpDrainDelayDerefContext((_QWORD **)&v77);
      }
      if ( (*(_BYTE *)(a1 + 48) & 0x20) != 0 )
      {
        v45 = *(_QWORD *)(a1 + 104);
        MmUnlockPages((PMDL)(v45 + 64));
        MmUnlockPages((PMDL)v45);
        CmSiFreeMemory((PPRIVILEGE_SET)v45);
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_WORD *)(a1 + 48) &= ~0x20u;
      }
    }
    else
    {
      v3 = (_DWORD *)v21[4];
      CmpReferenceHive((__int64)v3);
      if ( *((_BYTE *)v3 + 2952) == 1 )
      {
        v4 = 1;
        v3[(_InterlockedExchangeAdd(v3 + 1061, 1u) & 0x7F) + 1062] = 17;
      }
    }
    CmpDereferenceKeyControlBlock((ULONG_PTR)v21);
  }
  CmpUnlockRegistry(v19);
  while ( 1 )
  {
    v49 = v73;
    v50 = &v73;
    if ( (__int128 *)v73 == &v73 )
      break;
    if ( *(__int128 **)(v73 + 8) != &v73 )
      goto LABEL_101;
    v65 = *(_QWORD *)v73;
    if ( *(_QWORD *)(*(_QWORD *)v73 + 8LL) != (_QWORD)v73 )
      goto LABEL_101;
    *(_QWORD *)&v73 = *(_QWORD *)v73;
    v66 = (PVOID **)(v49 - 16);
    *(_QWORD *)(v65 + 8) = &v73;
    v67 = *(_QWORD *)(v49 - 16 + 64);
    if ( (unsigned __int16)*(_DWORD *)(v49 - 16 + 56) != 3 )
    {
      v68 = *(struct _KEVENT **)v67;
      goto LABEL_109;
    }
    v69 = *(struct _WORK_QUEUE_ITEM **)(v67 + 8);
    if ( v69 )
      ExQueueWorkItem(v69, *(WORK_QUEUE_TYPE *)(v67 + 16));
    v68 = (struct _KEVENT *)*v66[8];
    if ( v68 )
    {
LABEL_109:
      KeSetEvent(v68, 0, 0);
      ObfDereferenceObject(*v66[8]);
      CmpFreePostBlock(v66);
    }
    else
    {
      CmpFreePostBlock(v66);
    }
  }
  if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v74[0] != v74 )
  {
    v78[1] = 0LL;
    v78[2] = v83;
    v81 = 0LL;
    v82 = 0;
    v80 = 0LL;
    v78[0] = 0LL;
    v79 = 0;
    CmpCallCallBacksEx(25, (unsigned int)v78, 0, 0, 25, 0LL, (__int64)v74);
  }
  if ( v4 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker((__int64)v3);
  if ( !v3 || _InterlockedExchangeAdd(v3 + 1060, 0xFFFFFFFF) != 1 )
    goto LABEL_93;
  v51 = v3 + 402;
  if ( *(_DWORD **)v51 == v51 )
    goto LABEL_84;
  CmpLockHiveListExclusive((__int64)v50, v46, v47, v48);
  v52 = *(_QWORD *)v51;
  if ( *(_DWORD **)(*(_QWORD *)v51 + 8LL) != v51 )
    goto LABEL_101;
  v53 = (_QWORD *)*((_QWORD *)v3 + 202);
  if ( (_DWORD *)*v53 != v51 )
    goto LABEL_101;
  *v53 = v52;
  *(_QWORD *)(v52 + 8) = v53;
  CmpUnlockHiveList();
LABEL_84:
  *v3 = -1160724768;
  HvFreeDirtyData((__int64)v3);
  CmpDeleteKcbCache((__int64)v3);
  v54 = (void *)*((_QWORD *)v3 + 232);
  if ( v54 )
    ExFreePoolWithTag(v54, 0x624E4D43u);
  v55 = (void *)*((_QWORD *)v3 + 230);
  if ( v55 )
    ExFreePoolWithTag(v55, 0x20204D43u);
  v56 = (void *)*((_QWORD *)v3 + 234);
  if ( v56 )
    ExFreePoolWithTag(v56, 0);
  v57 = (void *)*((_QWORD *)v3 + 603);
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  CmpReleaseGlobalQuota(0x12E0u);
  ExFreePoolWithTag(v3, 0);
LABEL_93:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v46, v47);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v75);
}
