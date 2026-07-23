/*
 * XREFs of PspInsertThread @ 0x140A7B188
 * Callers:
 *     PspCreateThread @ 0x140A7A214 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140A7C010 (PspCreatePicoThread.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSuspendThread @ 0x140208E28 (KeSuspendThread.c)
 *     KeReadyThread @ 0x140230DB0 (KeReadyThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeRequestTerminationThread @ 0x1403107F4 (KeRequestTerminationThread.c)
 *     KeForceResumeThread @ 0x140310AFC (KeForceResumeThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     ObReferenceObjectExWithTag @ 0x140446820 (ObReferenceObjectExWithTag.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     KeQueryMaximumGroupCount @ 0x1404B4AE0 (KeQueryMaximumGroupCount.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1404CCBF0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     KeRaiseUserException @ 0x14052C3C0 (KeRaiseUserException.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     SeCreateAccessStateEx @ 0x1409463F0 (SeCreateAccessStateEx.c)
 *     MmExitThread @ 0x14094C484 (MmExitThread.c)
 *     PoEnergyContextStart @ 0x1409CA91C (PoEnergyContextStart.c)
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 *     PspCallThreadNotifyRoutines @ 0x1409E7E7C (PspCallThreadNotifyRoutines.c)
 *     PspCallProcessNotifyRoutines @ 0x1409FE474 (PspCallProcessNotifyRoutines.c)
 *     PspDeleteUserStack @ 0x140A04714 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x140A048C4 (MmDeleteTeb.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140A7BC1C (PspRecheckThreadOptionalXStateFeatures.c)
 *     KeUninitThread @ 0x140A7BCB0 (KeUninitThread.c)
 *     PspCreateObjectHandle @ 0x140A7BDE4 (PspCreateObjectHandle.c)
 *     PspRecheckThreadPasidMsrState @ 0x140A7BE9C (PspRecheckThreadPasidMsrState.c)
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 *     PspAssignProcessToJobList @ 0x140AC7750 (PspAssignProcessToJobList.c)
 *     MmCreateThread @ 0x140ADA450 (MmCreateThread.c)
 *     PspChangeProcessExecutionState @ 0x140ADB89C (PspChangeProcessExecutionState.c)
 *     PspCheckForJobAffinityViolation @ 0x140AF6A18 (PspCheckForJobAffinityViolation.c)
 *     PspCreateSecureThread @ 0x140B36748 (PspCreateSecureThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInsertThread(
        ULONG_PTR BugCheckParameter2,
        __int64 BugCheckParameter1,
        __int64 a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        void *a11)
{
  unsigned int v14; // edi
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  struct _KAFFINITY_EX *Pool2; // rbx
  USHORT MaximumGroupCount; // ax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r12
  signed int Thread; // r12d
  __int64 v23; // rdx
  __int64 v24; // rdx
  volatile signed __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  _BYTE *v28; // rbx
  signed int ObjectHandle; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r15
  KPROCESSOR_MODE v35; // dl
  __int64 v36; // rdx
  __int64 v37; // r8
  char v38; // al
  AutoBoost *v39; // rax
  void *v40; // rdx
  AutoBoost *v41; // rcx
  __int64 v42; // r8
  struct _KLOCK_ENTRIES *v43; // r9
  int v44; // ecx
  signed __int8 v45; // cl
  AutoBoost *v46; // rax
  void *v47; // rdx
  AutoBoost *v48; // rbx
  _QWORD *v49; // rcx
  _QWORD *v50; // rdx
  void *v51; // rdx
  int v52; // [rsp+44h] [rbp-D4h]
  char v53; // [rsp+44h] [rbp-D4h]
  int v54; // [rsp+44h] [rbp-D4h]
  char v55; // [rsp+48h] [rbp-D0h]
  unsigned int *v56; // [rsp+50h] [rbp-C8h]
  AutoBoost *v57; // [rsp+58h] [rbp-C0h]
  AutoBoost *v58; // [rsp+58h] [rbp-C0h]
  __int64 v59; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v60; // [rsp+70h] [rbp-A8h]
  struct _KAFFINITY_EX *P; // [rsp+78h] [rbp-A0h]
  _KPROCESS *Process; // [rsp+80h] [rbp-98h]
  ULONG_PTR v63[17]; // [rsp+90h] [rbp-88h] BYREF

  v14 = 0;
  memset_0(v63, 0, 0x48uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v60 = *(_QWORD *)(BugCheckParameter2 + 240);
  v56 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v59 = 0LL;
  if ( (*a4 & 0x20) == 0 )
  {
    v39 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter1 + 456, 0LL, 0LL, v16);
    v41 = v39;
    v58 = v39;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 456), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 456), v39, BugCheckParameter1 + 456);
      v41 = v58;
    }
    if ( v41 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v41, v40);
      else
        *((_BYTE *)v41 + 10) = 1;
    }
  }
  v52 = *(_DWORD *)(BugCheckParameter1 + 500);
  if ( !a7 )
  {
    v57 = 0LL;
    goto LABEL_10;
  }
  v57 = *(AutoBoost **)(a7 + 32);
  if ( (*(_DWORD *)(a7 + 8) & 0x1000LL) != 0 )
  {
    KeQueryMaximumGroupCount();
    Pool2 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x40uLL);
    P = Pool2;
    if ( !Pool2 )
    {
      Thread = -1073741670;
      goto LABEL_14;
    }
    MaximumGroupCount = KeQueryMaximumGroupCount();
    Pool2->Count = 1;
    Pool2->Size = MaximumGroupCount;
    Pool2->Reserved = 0;
    memset_0(&Pool2->8, 0, 8LL * MaximumGroupCount);
    v19 = *(_QWORD *)(a7 + 320);
    v20 = *(unsigned __int16 *)(a7 + 328);
    if ( Pool2->Count <= (unsigned __int16)v20 )
    {
      if ( Pool2->Size <= (unsigned __int16)v20 )
      {
LABEL_7:
        if ( *(_WORD *)(BugCheckParameter1 + 416) != *(_WORD *)(a7 + 328) )
          _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 136), 0xCu);
        goto LABEL_9;
      }
      Pool2->Count = v20 + 1;
    }
    Pool2->Bitmap[v20] |= v19;
    goto LABEL_7;
  }
LABEL_9:
  v56 = (unsigned int *)((a7 + 20) & -(__int64)((*(_DWORD *)(a7 + 8) & 0x4000) != 0LL));
LABEL_10:
  v21 = *(_QWORD *)(BugCheckParameter1 + 672);
  v59 = v21;
  if ( v21 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0 )
    {
      ExInitializeFastOwnerEntry((__int64)v63);
      ExAcquireFastResourceShared((__int64 *)(v21 + 56), (ULONG_PTR)v63, 1);
      v14 = 1;
      if ( Pool2 )
      {
        if ( (int)PspCheckForJobAffinityViolation(v21, Pool2) < 0 )
          v14 = 5;
      }
    }
  }
  if ( v14 >= 4
    || (v52 & 0x4000008) != 0x4000000
    || (v52 & 0x40000000) != 0 && (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0 && (*(_BYTE *)a4 & 2) == 0 )
  {
    Thread = -1073741823;
  }
  else
  {
    Thread = 0;
  }
  if ( Thread >= 0 )
  {
    Thread = MmCreateThread(BugCheckParameter2);
    if ( Thread >= 0 )
    {
      v14 |= 0x10u;
      if ( (*(_BYTE *)(BugCheckParameter1 + 368) & 1) != 0 && (*a4 & 0x400) != 0 )
        Thread = PspCreateSecureThread((PVOID)BugCheckParameter2);
      if ( Thread >= 0 )
      {
        KeStartThread(BugCheckParameter2, Pool2, v56);
        if ( (v14 & 1) != 0 )
        {
          ExReleaseFastResourceShared(v59 + 56, (ULONG_PTR)v63, v42, (__int64)v43);
          LOBYTE(v14) = v14 & 0xFE;
        }
        if ( (v52 & 0x40000000) != 0 && (*a4 & 2) != 0 )
          *(_DWORD *)(BugCheckParameter2 + 1444) |= 0x40u;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        v44 = *(_DWORD *)(BugCheckParameter2 + 1440) ^ ((unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 1440) ^ (*(_DWORD *)(BugCheckParameter1 + 500) >> 18)) & 0xE00;
        *(_DWORD *)(BugCheckParameter2 + 1440) = v44;
        *(_DWORD *)(BugCheckParameter2 + 1440) = v44 ^ (*(_DWORD *)(BugCheckParameter1 + 496) ^ v44) & 0x7000;
        if ( ++*(_DWORD *)(BugCheckParameter1 + 896) > *(_DWORD *)(BugCheckParameter1 + 1496) )
          *(_DWORD *)(BugCheckParameter1 + 1496) = *(_DWORD *)(BugCheckParameter1 + 896);
        v45 = _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 2012), 0);
        if ( *(_DWORD *)(BugCheckParameter1 + 896) != 1 || v45 )
        {
          if ( *(_DWORD *)(BugCheckParameter1 + 896) == 2 && (*(_DWORD *)(BugCheckParameter1 + 496) & 0x8000) == 0 )
            _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 496), 0xFu);
        }
        else
        {
          LOBYTE(v14) = v14 | 2;
        }
        v46 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter1 + 1504, 0LL, 0LL, v43);
        v48 = v46;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 1504), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 1504), v46, BugCheckParameter1 + 1504);
        if ( v48 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v48, v47);
          else
            *((_BYTE *)v48 + 10) = 1;
        }
        v49 = (_QWORD *)(BugCheckParameter2 + 1400);
        v50 = *(_QWORD **)(BugCheckParameter1 + 888);
        if ( *v50 != BugCheckParameter1 + 880 )
          __fastfail(3u);
        *v49 = BugCheckParameter1 + 880;
        *(_QWORD *)(BugCheckParameter2 + 1408) = v50;
        *v50 = v49;
        *(_QWORD *)(BugCheckParameter1 + 888) = v49;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1504), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1504));
        KeAbPostRelease(BugCheckParameter1 + 1504);
        if ( *(_QWORD *)(BugCheckParameter1 + 360) )
          _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x19u);
        if ( *(_QWORD *)(BugCheckParameter1 + 1976) )
          _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x1Du);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 456));
        KeAbPostRelease(BugCheckParameter1 + 456);
        if ( (*a4 & 0x40) != 0 )
          PspChangeProcessExecutionState((PEPROCESS)BugCheckParameter1);
        ObReferenceObjectExWithTag(BugCheckParameter2, 2, 0x746C6644u);
        *(_DWORD *)(BugCheckParameter2 + 1516) = 1;
        if ( (*a4 & 1) != 0 )
        {
          KeSuspendThread((struct _KTHREAD *)BugCheckParameter2, 0LL, 0LL);
          if ( (*(_DWORD *)(BugCheckParameter2 + 1440) & 1) != 0 )
            KeForceResumeThread(BugCheckParameter2, v36, v37);
        }
        if ( (*(_DWORD *)(BugCheckParameter1 + 2008) & 1) != 0 )
          KeEnableCoreIsolationMitigationPolicyThread((struct _KTHREAD *)BugCheckParameter2);
        Thread = PspRecheckThreadOptionalXStateFeatures(BugCheckParameter1, BugCheckParameter2);
        if ( Thread >= 0 )
          Thread = PspRecheckThreadPasidMsrState(BugCheckParameter1, BugCheckParameter2);
        v53 = 0;
        if ( !*(_BYTE *)(a9 + 388) || (*a4 & 0x10) != 0 )
        {
          v24 = BugCheckParameter1;
          v53 = 1;
        }
        else
        {
          v24 = (__int64)Process;
        }
        if ( Thread >= 0
          && (Thread = SeCreateAccessStateEx(
                         0LL,
                         v24,
                         (_QWORD *)a9,
                         (struct _KLOCK_ENTRIES *)(a9 + 160),
                         a5,
                         (_DWORD *)PsThreadType + 19),
              Thread >= 0) )
        {
          Thread = ObInsertObjectEx((char *)BugCheckParameter2, (struct _ACCESS_STATE *)a9, a5, 0, v53, 0LL, 0LL);
          if ( Thread >= 0 )
          {
            ObfDereferenceObject((PVOID)BugCheckParameter2);
            v38 = *(_BYTE *)(a9 + 388);
            v55 = v38;
            if ( v57 )
            {
              if ( v38 )
              {
                RtlWriteULong64ToUser(v57, v60);
                v38 = v55;
              }
              else
              {
                *(_QWORD *)v57 = v60;
              }
            }
            if ( a11 )
            {
              v51 = (void *)(BugCheckParameter2 + 1288);
              if ( v38 )
                RtlCopyToUser(a11, v51, 0x10uLL);
              else
                RtlCopyVolatileMemory(a11, v51, 0x10uLL);
            }
          }
          if ( Thread < 0 )
            SeDeleteAccessState(a9);
        }
        else
        {
          ObfDereferenceObject((PVOID)BugCheckParameter2);
        }
        v25 = (volatile signed __int64 *)(BugCheckParameter2 + 1424);
        if ( Thread < 0 )
        {
          if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v25);
            v25 = (volatile signed __int64 *)(BugCheckParameter2 + 1424);
          }
          KeAbPostRelease((unsigned __int64)v25);
          v26 = (__int64)a4;
          if ( (*a4 & 1) != 0 )
            KeForceResumeThread(BugCheckParameter2, (__int64)a4, v27);
          v28 = a6;
          if ( a6 && *a6 )
            PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v26, a3, a6);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 1440), 2u);
          if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v25);
            v25 = (volatile signed __int64 *)(BugCheckParameter2 + 1424);
          }
          KeAbPostRelease((unsigned __int64)v25);
          v28 = a6;
        }
        v54 = 0;
        if ( (v14 & 2) != 0 )
        {
          if ( (PerfGlobalGroupMask[0] & 1) != 0 )
            EtwTraceProcess((struct _KPROCESS *)BugCheckParameter1, 769);
          if ( *(_QWORD *)(BugCheckParameter1 + 1640) )
            PoEnergyContextStart(BugCheckParameter1);
          if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 1600) )
            v54 = PspCallProcessNotifyRoutines(BugCheckParameter1, a7, 1);
        }
        if ( (PerfGlobalGroupMask[0] & 2) != 0 )
        {
          LOBYTE(v27) = 1;
          EtwTraceThread(BugCheckParameter2, a3, v27);
        }
        if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 1600) )
        {
          LOBYTE(v26) = 1;
          PspCallThreadNotifyRoutines((_QWORD *)BugCheckParameter2, v26, 0);
        }
        if ( Thread < 0 )
          goto LABEL_59;
        ObjectHandle = v54;
        if ( v54 >= 0 )
          ObjectHandle = PspCreateObjectHandle(BugCheckParameter2, a9, PsThreadType);
        Thread = ObjectHandle;
        SeDeleteAccessState(a9);
        if ( Thread >= 0 )
        {
          if ( a7 )
          {
            v33 = *(_QWORD *)(a7 + 368);
            if ( v33 )
              Thread = PspAssignProcessToJobList(BugCheckParameter1, v33, *(unsigned int *)(a7 + 380));
          }
          if ( Thread < 0 )
          {
            v34 = a9;
          }
          else
          {
            v34 = a9;
            if ( *(_BYTE *)(a9 + 388) )
              RtlWriteULong64ToUser(a10, *(_QWORD *)(a9 + 392));
            else
              *a10 = *(_QWORD *)(a9 + 392);
          }
          if ( Thread >= 0 )
            goto LABEL_59;
          if ( (*(_DWORD *)(v34 + 384) & 0x200) != 0
            || (v35 = 1, (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0) )
          {
            v35 = 0;
          }
          ObCloseHandle(*(HANDLE *)(v34 + 392), v35);
          if ( v28 && (*v28 & 1) != 0 )
            KeRaiseUserException(Thread);
        }
        if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 1440), 0) )
          LOBYTE(v14) = v14 | 8;
        if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0 )
        {
          if ( (*a4 & 1) != 0 )
            KeForceResumeThread(BugCheckParameter2, v31, v32);
        }
        else
        {
          if ( (v14 & 8) != 0 )
            *(_DWORD *)(BugCheckParameter2 + 1496) = Thread;
          KeRequestTerminationThread(BugCheckParameter2);
        }
LABEL_59:
        KeReadyThread((LegacyAutoBoost *)BugCheckParameter2);
        return (unsigned int)Thread;
      }
    }
  }
LABEL_14:
  if ( v14 >= 0x10 )
    MmExitThread(BugCheckParameter2, 1, v15, v16);
  if ( (v14 & 1) != 0 )
    ExReleaseFastResourceShared(v59 + 56, (ULONG_PTR)v63, v15, (__int64)v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 456));
  KeAbPostRelease(BugCheckParameter1 + 456);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 1424), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1424));
  KeAbPostRelease(BugCheckParameter2 + 1424);
  KeUninitThread(BugCheckParameter2);
  if ( a6 )
  {
    if ( v60 )
      MmDeleteTeb((struct _KPROCESS *)BugCheckParameter1, v60);
    if ( *a6 )
      PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v23, a3, a6);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000008) != 0 )
    return (unsigned int)-1073741558;
  return (unsigned int)Thread;
}
