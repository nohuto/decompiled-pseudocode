/*
 * XREFs of NtDeleteKey @ 0x140AB2390
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409FA110 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB2878 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtDeleteKey(HANDLE Handle, __int64 a2, __int64 a3)
{
  char v4; // r13
  char v5; // r12
  char v6; // si
  char PreviousMode; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  char v13; // di
  int v14; // eax
  struct _KLOCK_ENTRIES *v15; // r9
  SECURITY_IMPERSONATION_LEVEL ProcessAuditId; // ebx
  _QWORD *v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v19; // eax
  LegacyAutoBoost *v20; // rbx
  signed __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rax
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r9d
  GUID *p_TransactionId; // r8
  __int64 v29; // rcx
  char v30; // [rsp+49h] [rbp-BFh]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-80h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B8h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-38h]
  GUID v42[2]; // [rsp+D8h] [rbp-30h] BYREF
  GUID TransactionId; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v44[2]; // [rsp+108h] [rbp+0h] BYREF

  v33 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  LODWORD(v32) = 0;
  v4 = 0;
  memset(v42, 0, sizeof(v42));
  v35 = 0LL;
  v36 = 0LL;
  memset(v44, 0, sizeof(v44));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v44, 0x20000uLL, a3);
    v4 = 1;
  }
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v40);
  Object = 0LL;
  v5 = 0;
  v34[1] = v34;
  v6 = 0;
  v34[0] = v34;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = CmpAcquireShutdownRundown(v9, v8);
  v13 = v30;
  if ( !v30 )
  {
    ProcessAuditId = -1073741431;
    goto LABEL_40;
  }
  LOBYTE(v12) = PreviousMode;
  v14 = CmObReferenceObjectByHandle((_DWORD)Handle, 0x10000, v11, v12, (__int64)&Object, (__int64)&v33);
  ProcessAuditId = v14;
  if ( v14 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( CmpVEEnabled && !CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, (int *)&v32) )
    {
      LOBYTE(v27) = PreviousMode;
      ProcessAuditId = (unsigned int)CmObReferenceObjectByHandle(
                                       (_DWORD)Handle,
                                       131097,
                                       v26,
                                       v27,
                                       (__int64)&Object,
                                       (__int64)&v33);
      if ( ProcessAuditId < SecurityAnonymous )
        goto LABEL_76;
      v17 = Object;
      if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        v6 = 1;
LABEL_6:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() )
        {
          *(_QWORD *)&v42[0].Data1 = v17;
          v19 = CmpCallCallBacksEx(0, (__int64)v42, 0LL, 1, 0xFu, (__int64)v17, (__int64)v34);
          if ( v19 < 0 )
          {
            ProcessAuditId = SecurityAnonymous;
            if ( v19 != -1073740541 )
              ProcessAuditId = v19;
            goto LABEL_28;
          }
          v5 = 1;
        }
        if ( CmpTraceRoutine && v17 )
          v36 = v17[1];
        v20 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink, 0LL, 0LL, v15);
        v21 = 17LL;
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
               17LL,
               0LL) )
        {
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
            0,
            v20,
            (struct _KTHREAD *)&ExpSysDbgLock.ApcStateFill[24]);
          v21 = 17LL;
        }
        if ( v20 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v20, (void *)0x11);
          else
            *((_BYTE *)v20 + 10) = 1;
        }
        ProcessAuditId = SecurityAnonymous;
        if ( ExpSysDbgLock.ApcState.ApcListHead[0].Flink
          && (struct _LIST_ENTRY *)v17[1] == ExpSysDbgLock.ApcState.ApcListHead[0].Flink->Blink
          || ExpSysDbgLock.ApcState.ApcListHead[0].Blink
          && (struct _LIST_ENTRY *)v17[1] == ExpSysDbgLock.ApcState.ApcListHead[0].Blink->Blink )
        {
          if ( v21 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
                        0LL,
                        v21) )
            ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
          KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
          goto LABEL_28;
        }
        if ( v21 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
                      0LL,
                      v21) )
          ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
        KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
        v10 = v17[1];
        if ( (*(_DWORD *)(v10 + 8) & 0x80u) != 0
          || (v23 = *(_QWORD *)(v10 + 72)) != 0 && (*(_DWORD *)(v23 + 8) & 0x80u) != 0 )
        {
          ProcessAuditId = -1073741790;
          goto LABEL_28;
        }
        if ( !v6 )
        {
LABEL_26:
          ProcessAuditId = (unsigned int)CmDeleteKey(v17);
          if ( ProcessAuditId >= SecurityAnonymous && (v33 & 4) != 0 )
          {
            if ( v17[7] || v17[8] )
            {
              TransactionId = 0LL;
              CmpLockRegistry(v10);
              if ( (int)CmpTransSearchAddTransFromKeyBody(v17, &v35) < 0 )
              {
                CmpUnlockRegistry(v29);
                goto LABEL_28;
              }
              TransactionId = *(GUID *)(v35 + 88);
              CmpUnlockRegistry(v29);
              p_TransactionId = &TransactionId;
            }
            else
            {
              p_TransactionId = 0LL;
            }
            SeDeleteObjectAuditAlarmWithTransaction(v17, Handle, p_TransactionId);
          }
LABEL_28:
          if ( !v6 )
          {
            v6 = 1;
            goto LABEL_30;
          }
          goto LABEL_69;
        }
        LOBYTE(v22) = PreviousMode;
        ProcessAuditId = (unsigned int)CmKeyBodyRemapToVirtual(
                                         (unsigned int)&Object,
                                         v22,
                                         0x10000,
                                         (unsigned int)&SubjectContext,
                                         (__int64)&v32);
        if ( ProcessAuditId >= SecurityAnonymous )
        {
          v17 = Object;
          if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
          {
            ProcessAuditId = -1073741790;
LABEL_69:
            v6 = 1;
            goto LABEL_57;
          }
          goto LABEL_26;
        }
        v6 = 1;
LABEL_76:
        v17 = Object;
        goto LABEL_57;
      }
      ProcessAuditId = -1073741790;
    }
    else
    {
      ProcessAuditId = -1073741790;
      v17 = Object;
    }
LABEL_57:
    SeReleaseSubjectContext(&SubjectContext);
LABEL_30:
    if ( v5 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v34[0] != v34 )
    {
      v39 = 0LL;
      SubjectContext.PrimaryToken = v42;
      SubjectContext.ProcessAuditId = (PVOID)(unsigned int)ProcessAuditId;
      *((_DWORD *)&SubjectContext.ImpersonationLevel + 1) = 0;
      v38 = 0LL;
      SubjectContext.ClientToken = v17;
      SubjectContext.ImpersonationLevel = ProcessAuditId;
      CmpCallCallBacksEx(0xFu, (__int64)&SubjectContext, 0LL, 0, 0xFu, (__int64)v17, (__int64)v34);
      ProcessAuditId = (SECURITY_IMPERSONATION_LEVEL)SubjectContext.ProcessAuditId;
    }
    if ( v6 )
      KeLeaveCriticalRegion();
    goto LABEL_37;
  }
  v17 = Object;
  if ( v14 >= 0 )
    goto LABEL_6;
LABEL_37:
  if ( v17 )
    ObfDereferenceObject(v17);
  v13 = v30;
LABEL_40:
  if ( v4 && CmpTraceRoutine )
  {
    v25 = v36;
    LOBYTE(v25) = 12;
    guard_dispatch_icall_no_overrides(v25, (__int64)v44);
  }
  if ( v13 )
    CmpReleaseShutdownRundown(v10);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v40);
  return (unsigned int)ProcessAuditId;
}
