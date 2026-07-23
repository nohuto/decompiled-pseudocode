/*
 * XREFs of NtDeleteKey @ 0x140AB0060
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14091ED10 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB0548 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4DB2C (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // r8
  char v3; // r13
  char v4; // r12
  char v5; // si
  char PreviousMode; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  char v12; // di
  int v13; // eax
  struct _KLOCK_ENTRIES *v14; // r9
  int ProcessAuditId; // ebx
  _QWORD *v16; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v18; // eax
  LegacyAutoBoost *v19; // rbx
  signed __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  GUID *p_TransactionId; // r8
  __int64 v31; // rcx
  char v32; // [rsp+49h] [rbp-BFh]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-88h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-80h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B8h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-38h]
  GUID v44[2]; // [rsp+D8h] [rbp-30h] BYREF
  GUID TransactionId; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v46[2]; // [rsp+108h] [rbp+0h] BYREF

  v35 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  LODWORD(v34) = 0;
  v3 = 0;
  memset(v44, 0, sizeof(v44));
  v37 = 0LL;
  v38 = 0LL;
  memset(v46, 0, sizeof(v46));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v46, 0x20000uLL, v1);
    v3 = 1;
  }
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v42);
  Object = 0LL;
  v4 = 0;
  v36[1] = v36;
  v5 = 0;
  v36[0] = v36;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = CmpAcquireShutdownRundown(v8, v7);
  v12 = v32;
  if ( !v32 )
  {
    ProcessAuditId = -1073741431;
    goto LABEL_40;
  }
  LOBYTE(v11) = PreviousMode;
  v13 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 0x10000, v10, v11, (__int64)&Object, (__int64)&v35);
  ProcessAuditId = v13;
  if ( v13 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( CmpVEEnabled && !CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, (int *)&v34) )
    {
      LOBYTE(v29) = PreviousMode;
      ProcessAuditId = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v28, v29, (__int64)&Object, (__int64)&v35);
      if ( ProcessAuditId < 0 )
        goto LABEL_76;
      v16 = Object;
      if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        v5 = 1;
LABEL_6:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() )
        {
          *(_QWORD *)&v44[0].Data1 = v16;
          v18 = CmpCallCallBacksEx(0, (__int64)v44, 0LL, 1, 0xFu, (__int64)v16, (__int64)v36);
          if ( v18 < 0 )
          {
            ProcessAuditId = 0;
            if ( v18 != -1073740541 )
              ProcessAuditId = v18;
            goto LABEL_28;
          }
          v4 = 1;
        }
        if ( CmpTraceRoutine && v16 )
          v38 = v16[1];
        v19 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink, 0LL, 0LL, v14);
        v20 = 17LL;
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
               17LL,
               0LL) )
        {
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
            0,
            v19,
            (struct _KTHREAD *)&ExpSysDbgLock.ApcStateFill[24]);
          v20 = 17LL;
        }
        if ( v19 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v19, (void *)0x11);
          else
            *((_BYTE *)v19 + 10) = 1;
        }
        ProcessAuditId = 0;
        if ( *(_QWORD *)&ExpSysDbgLock.ApcStateFill[40]
          && v16[1] == *(_QWORD *)(*(_QWORD *)&ExpSysDbgLock.ApcStateFill[40] + 8LL)
          || ExpSysDbgLock.WaitStatus && v16[1] == *(_QWORD *)(ExpSysDbgLock.WaitStatus + 8) )
        {
          if ( v20 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
                        0LL,
                        v20) )
            ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
          KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
          goto LABEL_28;
        }
        if ( v20 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
                      0LL,
                      v20) )
          ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
        KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
        v9 = v16[1];
        if ( (*(_DWORD *)(v9 + 8) & 0x80u) != 0
          || (v22 = *(_QWORD *)(v9 + 72)) != 0 && (*(_DWORD *)(v22 + 8) & 0x80u) != 0 )
        {
          ProcessAuditId = -1073741790;
          goto LABEL_28;
        }
        if ( !v5 )
        {
LABEL_26:
          ProcessAuditId = CmDeleteKey(v16);
          if ( ProcessAuditId >= 0 && (v35 & 4) != 0 )
          {
            if ( v16[7] || v16[8] )
            {
              TransactionId = 0LL;
              CmpLockRegistry(v9, v23, v24, v25);
              if ( (int)CmpTransSearchAddTransFromKeyBody(v16, &v37) < 0 )
              {
                CmpUnlockRegistry(v31);
                goto LABEL_28;
              }
              TransactionId = *(GUID *)(v37 + 88);
              CmpUnlockRegistry(v31);
              p_TransactionId = &TransactionId;
            }
            else
            {
              p_TransactionId = 0LL;
            }
            SeDeleteObjectAuditAlarmWithTransaction(v16, KeyHandle, p_TransactionId);
          }
LABEL_28:
          if ( !v5 )
          {
            v5 = 1;
            goto LABEL_30;
          }
          goto LABEL_69;
        }
        LOBYTE(v21) = PreviousMode;
        ProcessAuditId = CmKeyBodyRemapToVirtual(
                           (unsigned int)&Object,
                           v21,
                           0x10000,
                           (unsigned int)&SubjectContext,
                           (__int64)&v34);
        if ( ProcessAuditId >= 0 )
        {
          v16 = Object;
          if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
          {
            ProcessAuditId = -1073741790;
LABEL_69:
            v5 = 1;
            goto LABEL_57;
          }
          goto LABEL_26;
        }
        v5 = 1;
LABEL_76:
        v16 = Object;
        goto LABEL_57;
      }
      ProcessAuditId = -1073741790;
    }
    else
    {
      ProcessAuditId = -1073741790;
      v16 = Object;
    }
LABEL_57:
    SeReleaseSubjectContext(&SubjectContext);
LABEL_30:
    if ( v4
      && HIDWORD(WheapPfaLock.StateSaveArea)
      && !(unsigned int)CmpIsRegistryLockAcquired()
      && (_QWORD *)v36[0] != v36 )
    {
      v41 = 0LL;
      SubjectContext.PrimaryToken = v44;
      SubjectContext.ProcessAuditId = (PVOID)(unsigned int)ProcessAuditId;
      *((_DWORD *)&SubjectContext.ImpersonationLevel + 1) = 0;
      v40 = 0LL;
      SubjectContext.ClientToken = v16;
      SubjectContext.ImpersonationLevel = ProcessAuditId;
      CmpCallCallBacksEx(0xFu, (__int64)&SubjectContext, 0LL, 0, 0xFu, (__int64)v16, (__int64)v36);
      ProcessAuditId = (int)SubjectContext.ProcessAuditId;
    }
    if ( v5 )
      KeLeaveCriticalRegion();
    goto LABEL_37;
  }
  v16 = Object;
  if ( v13 >= 0 )
    goto LABEL_6;
LABEL_37:
  if ( v16 )
    ObfDereferenceObject(v16);
  v12 = v32;
LABEL_40:
  if ( v3 && CmpTraceRoutine )
  {
    v27 = v38;
    LOBYTE(v27) = 12;
    guard_dispatch_icall_no_overrides(v27, (__int64)v46);
  }
  if ( v12 )
    CmpReleaseShutdownRundown(v9);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v42);
  return ProcessAuditId;
}
