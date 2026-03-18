/*
 * XREFs of ObCloseHandleTableEntry2 @ 0x1408FAF70
 * Callers:
 *     ObpCloseHandle @ 0x1408F9C70 (ObpCloseHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ExSweepHandleTable @ 0x140958F4C (ExSweepHandleTable.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExSweepSingleHandle @ 0x140368260 (ExSweepSingleHandle.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     KeRaiseUserException @ 0x140529EA0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ObpDeleteNameCheck @ 0x1408FC8F0 (ObpDeleteNameCheck.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     ExUnlockHandleTableEntry @ 0x140A33080 (ExUnlockHandleTableEntry.c)
 *     EtwpTraceHandle @ 0x140A81CA4 (EtwpTraceHandle.c)
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
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  signed __int64 v32; // rbp
  char v33; // si
  PRKPROCESS v34; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // rcx
  __int64 v41; // rdx
  int v42; // eax
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  __int64 v45; // rtt
  __int64 v46; // rdx
  __int64 v47; // r8
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  signed __int32 v54[8]; // [rsp+0h] [rbp-108h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E8h]
  char v56; // [rsp+30h] [rbp-D8h]
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-D0h]
  AutoBoost *v58; // [rsp+40h] [rbp-C8h]
  AutoBoost *v59; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v60; // [rsp+50h] [rbp-B8h]
  struct _KAPC_STATE SubjectContext; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-80h] BYREF

  v60 = a7;
  PROCESS = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  HandlePointer = ExGetHandlePointer(a2);
  v13 = 0;
  v56 = 0;
  v14 = (void *)(HandlePointer + 48);
  v15 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  if ( *(_QWORD *)(v15 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a3 )
    {
      KeStackAttachProcess(a3, &ApcState);
      v13 = 1;
      v56 = 1;
    }
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides((__int64)a3, (__int64)v14) )
    {
      ExUnlockHandleTableEntry(a1, a2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v49, v50);
      if ( v13 )
        KiUnstackDetachProcess((__int64)&ApcState, 0);
      return 3221226037LL;
    }
  }
  v59 = (AutoBoost *)(*a2 >> 17);
  if ( ((unsigned __int8)v59 & 1) == 0 || a6 )
  {
    if ( (xmmword_140FBFC10 & 0x40) != 0 )
    {
      v16 = a4;
      if ( a3 == PsInitialSystemProcess )
        v16 = a4 | 0x80000000;
      EtwpTraceHandle(4385LL, v16, v14, v15);
    }
    v17 = 0LL;
    if ( a6 )
    {
      v18 = ExSweepSingleHandle(a1, a2);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a4, 2LL);
      v18 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
      *a2 = 0LL;
      _InterlockedOr(v54, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      HandleExtraInfo = (unsigned int)a4 & 0xFFFFFFFC;
      v58 = (AutoBoost *)(a4 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( *(_DWORD *)(a1 + 4) )
      {
        HandleExtraInfo = ExpGetHandleExtraInfo(a1, v58);
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
      v58 = v22;
      if ( v24 )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v21, v22, v21);
        v25 = v58;
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
        v51 = *(_QWORD *)(v21 + 16);
        if ( v51 )
          *(_QWORD *)(v51 + 8) = a2;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28);
    if ( ((unsigned __int8)v59 & 4) != 0 )
    {
      memset(&SubjectContext, 0, 32);
      SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext);
      SepAdtCloseObjectAuditAlarm((int)&SeSubsystemName, 1);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext);
    }
    v30 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer);
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v31 = ObTypeIndexTable[v30];
    if ( (*(_BYTE *)(v31 + 66) & 0x10) != 0 || (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v38 = (AutoBoost *)KeAbPreAcquire(HandlePointer + 16, 0LL, 0LL, v29);
      v24 = _interlockedbittestandset64((volatile signed __int32 *)(HandlePointer + 16), 0LL);
      v40 = v38;
      v59 = v38;
      if ( v24 )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(HandlePointer + 16), v38, HandlePointer + 16);
        v40 = v59;
      }
      if ( v40 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v40, v39);
        else
          *((_BYTE *)v40 + 10) = 1;
      }
      v32 = *(_QWORD *)(HandlePointer + 8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
        && (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
      {
        *(_QWORD *)(HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x1F]) = 0LL;
      }
      if ( (*(_BYTE *)(v31 + 66) & 0x10) != 0 )
      {
        if ( (*(_BYTE *)(HandlePointer + 26) & 4) != 0 )
          v41 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 7];
        else
          v41 = 0LL;
        if ( (*(_BYTE *)(HandlePointer + 27) & 0x40) != 0 )
        {
          v42 = *(_DWORD *)(v41 + 8) ^ (*(_DWORD *)(v41 + 8) ^ (*(_DWORD *)(v41 + 8) - 1)) & 0xFFFFFF;
LABEL_62:
          *(_DWORD *)(v41 + 8) = v42;
        }
        else
        {
          v48 = **(_DWORD **)v41;
          v41 = *(_QWORD *)v41 + 8LL;
          while ( v48 )
          {
            if ( (*(_DWORD *)(v41 + 8) & 0xFFFFFF) != 0 && *(PRKPROCESS *)v41 == PROCESS )
            {
              v42 = *(_DWORD *)(v41 + 8) ^ (*(_DWORD *)(v41 + 8) ^ (*(_DWORD *)(v41 + 8) - 1)) & 0xFFFFFF;
              goto LABEL_62;
            }
            v41 += 16LL;
            --v48;
          }
        }
        if ( !*(_BYTE *)(v41 + 11) && (*(_DWORD *)(v41 + 8) & 0xFFFFFF) == 0 )
          *(_QWORD *)v41 = 0LL;
      }
      _m_prefetchw((const void *)(HandlePointer + 16));
      v43 = *(_QWORD *)(HandlePointer + 16);
      v44 = v43 - 16;
      if ( (v43 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v44 = 0LL;
      if ( (v43 & 2) != 0
        || (v45 = *(_QWORD *)(HandlePointer + 16),
            v45 != _InterlockedCompareExchange64((volatile signed __int64 *)(HandlePointer + 16), v44, v43)) )
      {
        ExfReleasePushLock((_QWORD *)(HandlePointer + 16));
      }
      KeAbPostRelease(HandlePointer + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v46, v47);
    }
    else
    {
      v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL);
    }
    if ( *(_QWORD *)(v31 + 128) )
    {
      v33 = 0;
      v34 = PROCESS;
      if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
      {
        v33 = 1;
        ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
        v17 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        KeStackAttachProcess(PROCESS, &SubjectContext);
        v34 = PROCESS;
      }
      if ( (*(_BYTE *)(v31 + 67) & 4) != 0 )
        BugCheckParameter4 = v60;
      guard_dispatch_icall_no_overrides((__int64)v34, HandlePointer + 48);
      if ( v33 )
      {
        KiUnstackDetachProcess((__int64)&SubjectContext, 0);
        PsDetachSiloFromCurrentThread(v17);
      }
    }
    if ( v32 == 1 )
      ObpDeleteNameCheck(HandlePointer);
    _InterlockedDecrement((volatile signed __int32 *)(v31 + 48));
    if ( v56 )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v52, v53);
    if ( v56 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    if ( KeGetCurrentThread()->ApcStateIndex == 1
      || (NtGlobalFlag & 0x400000) == 0 && !KeGetCurrentThread()->ApcState.Process[1].UserTime && !*(_QWORD *)(a1 + 96) )
    {
      return 3221226037LL;
    }
    return KeRaiseUserException(0xC0000235);
  }
}
