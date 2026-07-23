/*
 * XREFs of ObCloseHandleTableEntry2 @ 0x14092AF00
 * Callers:
 *     ObpCloseHandle @ 0x140929C00 (ObpCloseHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ExSweepHandleTable @ 0x1409FE810 (ExSweepHandleTable.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExSweepSingleHandle @ 0x14036A000 (ExSweepSingleHandle.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     KeRaiseUserException @ 0x14052C3C0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ExpUpdateDebugInfo @ 0x140908210 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 *     EtwpTraceHandle @ 0x140A87B14 (EtwpTraceHandle.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 */

__int64 __fastcall ObCloseHandleTableEntry2(
        __int64 a1,
        __int64 *a2,
        struct _KPROCESS *a3,
        ULONG_PTR a4,
        char a5,
        char a6,
        ULONG_PTR a7)
{
  unsigned __int64 HandlePointer; // rbx
  struct _KLOCK_ENTRIES *v12; // r9
  char v13; // r12
  void *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdx
  struct _LIST_ENTRY *v17; // r15
  int v18; // r12d
  __int64 HandleExtraInfo; // rax
  char v20; // r13
  unsigned __int64 v21; // rdi
  AutoBoost *v22; // rax
  void *v23; // rdx
  signed __int8 v24; // cf
  AutoBoost *v25; // rcx
  __int64 v26; // rax
  struct _KLOCK_ENTRIES *v27; // r9
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  signed __int64 v30; // rbp
  char v31; // si
  PRKPROCESS v32; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v36; // rax
  void *v37; // rdx
  AutoBoost *v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  __int64 v43; // rtt
  int v44; // ecx
  __int64 v45; // rax
  signed __int32 v46[8]; // [rsp+0h] [rbp-108h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E8h]
  __int64 v48; // [rsp+28h] [rbp-E0h]
  int v49; // [rsp+30h] [rbp-D8h]
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-D0h]
  AutoBoost *v51; // [rsp+40h] [rbp-C8h]
  AutoBoost *v52; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v53; // [rsp+50h] [rbp-B8h]
  struct _KAPC_STATE SubjectContext; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-80h] BYREF

  v53 = a7;
  PROCESS = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  HandlePointer = ExGetHandlePointer(a2);
  v13 = 0;
  LOBYTE(v49) = 0;
  v14 = (void *)(HandlePointer + 48);
  v15 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  if ( *(_QWORD *)(v15 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KeStackAttachProcess(a3, &ApcState);
      v13 = 1;
      LOBYTE(v49) = 1;
    }
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides((__int64)a3, (__int64)v14) )
    {
      ExUnlockHandleTableEntry(a1, a2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v13 )
        KiUnstackDetachProcess((__int64)&ApcState, 0);
      return 3221226037LL;
    }
  }
  v52 = (AutoBoost *)(*a2 >> 17);
  if ( ((unsigned __int8)v52 & 1) == 0 || a6 )
  {
    if ( (xmmword_140FC0C10 & 0x40) != 0 )
    {
      v16 = a4;
      if ( a3 == PsInitialSystemProcess )
        v16 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v16, v14, v15, BugCheckParameter4, v48, v49, PROCESS, (_DWORD)v51);
    }
    v17 = 0LL;
    if ( a6 )
    {
      v18 = ExSweepSingleHandle(a1, a2);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, (__int64)KeGetCurrentThread(), a4, 2);
      v18 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v46, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      HandleExtraInfo = (unsigned int)a4 & 0xFFFFFFFC;
      v51 = (AutoBoost *)(a4 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = ExpGetHandleExtraInfo((unsigned int *)a1, (__int64)v51);
        if ( HandleExtraInfo )
          *(_QWORD *)HandleExtraInfo = 0LL;
      }
      a2[1] = 0LL;
      v20 = *(_BYTE *)(a1 + 44) & 1;
      if ( v20 )
        HandleExtraInfo = 0LL;
      else
        LODWORD(HandleExtraInfo) = KeGetPcr()->Prcb.Number;
      v21 = ((HandleExtraInfo + 1) << 6) + a1;
      v22 = (AutoBoost *)KeAbPreAcquire(v21, 0LL, 0LL, v12);
      v24 = _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL);
      v25 = v22;
      v51 = v22;
      if ( v24 )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v21, v22, v21);
        v25 = v51;
      }
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, v23);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      if ( v20 )
      {
        v45 = *(_QWORD *)(v21 + 16);
        if ( v45 )
          *(_QWORD *)(v45 + 8) = a2;
        else
          *(_QWORD *)(v21 + 8) = a2;
        *(_QWORD *)(v21 + 16) = a2;
      }
      else
      {
        v26 = *(_QWORD *)(v21 + 8);
        a2[1] = v26;
        if ( !v26 )
          *(_QWORD *)(v21 + 16) = a2;
        *(_QWORD *)(v21 + 8) = a2;
      }
      --*(_DWORD *)(v21 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21);
      KeAbPostRelease(v21);
      v14 = (void *)(HandlePointer + 48);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( ((unsigned __int8)v52 & 4) != 0 )
    {
      memset(&SubjectContext, 0, 32);
      SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext);
      SepAdtCloseObjectAuditAlarm((int)&SeSubsystemName, 1);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext);
    }
    v28 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer);
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v29 = ObTypeIndexTable[v28];
    if ( (*(_BYTE *)(v29 + 66) & 0x10) != 0 || (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v36 = (AutoBoost *)KeAbPreAcquire(HandlePointer + 16, 0LL, 0LL, v27);
      v24 = _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL);
      v38 = v36;
      v52 = v36;
      if ( v24 )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v36, HandlePointer + 16);
        v38 = v52;
      }
      if ( v38 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v38, v37);
        else
          *((_BYTE *)v38 + 10) = 1;
      }
      v30 = *(_QWORD *)(HandlePointer + 8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
        && (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
      {
        *(_QWORD *)(HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x1F]) = 0LL;
      }
      if ( (*(_BYTE *)(v29 + 66) & 0x10) != 0 )
      {
        if ( (*(_BYTE *)(HandlePointer + 26) & 4) != 0 )
          v39 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 7];
        else
          v39 = 0LL;
        if ( (*(_BYTE *)(HandlePointer + 27) & 0x40) != 0 )
        {
          v40 = *(_DWORD *)(v39 + 8) ^ (*(_DWORD *)(v39 + 8) ^ (*(_DWORD *)(v39 + 8) - 1)) & 0xFFFFFF;
LABEL_62:
          *(_DWORD *)(v39 + 8) = v40;
        }
        else
        {
          v44 = **(_DWORD **)v39;
          v39 = *(_QWORD *)v39 + 8LL;
          while ( v44 )
          {
            if ( (*(_DWORD *)(v39 + 8) & 0xFFFFFF) != 0 && *(PRKPROCESS *)v39 == PROCESS )
            {
              v40 = *(_DWORD *)(v39 + 8) ^ (*(_DWORD *)(v39 + 8) ^ (*(_DWORD *)(v39 + 8) - 1)) & 0xFFFFFF;
              goto LABEL_62;
            }
            v39 += 16LL;
            --v44;
          }
        }
        if ( !*(_BYTE *)(v39 + 11) && (*(_DWORD *)(v39 + 8) & 0xFFFFFF) == 0 )
          *(_QWORD *)v39 = 0LL;
      }
      _m_prefetchw((const void *)(HandlePointer + 16));
      v41 = *(_QWORD *)(HandlePointer + 16);
      v42 = v41 - 16;
      if ( (v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v42 = 0LL;
      if ( (v41 & 2) != 0
        || (v43 = *(_QWORD *)(HandlePointer + 16),
            v43 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v42, v41)) )
      {
        ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
      }
      KeAbPostRelease(HandlePointer + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL);
    }
    if ( *(_QWORD *)(v29 + 128) )
    {
      v31 = 0;
      v32 = PROCESS;
      if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
      {
        v31 = 1;
        ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
        v17 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KeStackAttachProcess(PROCESS, &SubjectContext);
        v32 = PROCESS;
      }
      if ( (*(_BYTE *)(v29 + 67) & 4) != 0 )
        BugCheckParameter4 = v53;
      guard_dispatch_icall_no_overrides((__int64)v32, HandlePointer + 48);
      if ( v31 )
      {
        KiUnstackDetachProcess((__int64)&SubjectContext, 0);
        PsDetachSiloFromCurrentThread(v17);
      }
    }
    if ( v30 == 1 )
      ObpDeleteNameCheck(HandlePointer);
    _InterlockedDecrement((volatile signed __int32 *)(v29 + 48));
    if ( (_BYTE)v49 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    if ( v18 )
      _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v18);
    ObfDereferenceObjectWithTag(v14, 0x6E48624Fu);
    return 0LL;
  }
  else
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    ExUnlockHandleTableEntry(a1, a2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( (_BYTE)v49 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    if ( KeGetCurrentThread()->ApcStateIndex == 1
      || (NtGlobalFlag & 0x400000) == 0 && !KeGetCurrentThread()->ApcState.Process[1].UserTime && !*(_QWORD *)(a1 + 96) )
    {
      return 3221226037LL;
    }
    return KeRaiseUserException(0xC0000235);
  }
}
