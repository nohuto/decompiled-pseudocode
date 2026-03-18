/*
 * XREFs of NtDeleteValueKey @ 0x14097CD00
 * Callers:
 *     DifNtDeleteValueKeyWrapper @ 0x140675CB0 (DifNtDeleteValueKeyWrapper.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     CmpCaptureUnicodeStringBuffer @ 0x1408F2650 (CmpCaptureUnicodeStringBuffer.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x14097DDF0 (CmpDoesBufferRequireCapturing.c)
 *     CmpCaptureUnicodeString @ 0x14097E720 (CmpCaptureUnicodeString.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB2878 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtDeleteValueKey(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  struct _PRIVILEGE_SET *v5; // r12
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PreviousMode; // r15d
  char v9; // si
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  SECURITY_IMPERSONATION_LEVEL ProcessAuditId; // edi
  __int64 v14; // r8
  unsigned __int16 v15; // di
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  char v17; // r13
  char v18; // r14
  _WORD *i; // rdx
  struct _KTHREAD *v20; // rax
  int v21; // eax
  PVOID v22; // rcx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rcx
  char v27; // [rsp+43h] [rbp-145h]
  char v28; // [rsp+46h] [rbp-142h]
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  __int128 v30; // [rsp+50h] [rbp-138h] BYREF
  int v31; // [rsp+60h] [rbp-128h] BYREF
  int v32; // [rsp+64h] [rbp-124h]
  __int64 v33; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v34[2]; // [rsp+78h] [rbp-110h] BYREF
  __int64 v35; // [rsp+88h] [rbp-100h]
  struct _PRIVILEGE_SET *v36; // [rsp+90h] [rbp-F8h]
  __int64 v37; // [rsp+98h] [rbp-F0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-C8h]
  __int64 v40; // [rsp+D0h] [rbp-B8h]
  _OWORD v41[2]; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-90h]
  __int128 v43; // [rsp+100h] [rbp-88h] BYREF
  __int64 v44; // [rsp+110h] [rbp-78h]
  __int128 v45; // [rsp+120h] [rbp-68h] BYREF
  _BYTE v46[32]; // [rsp+130h] [rbp-58h] BYREF

  v4 = a1;
  v35 = a1;
  v43 = 0LL;
  v44 = 0LL;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  v6 = 0;
  v31 = 0;
  memset(v46, 0, sizeof(v46));
  v37 = 0LL;
  v27 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v46, 0x20000uLL, a3);
    v27 = 1;
  }
  Object = 0LL;
  v34[1] = v34;
  v34[0] = v34;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v43);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v28 = CmpAcquireShutdownRundown(CurrentThread, v10);
  if ( !v28 )
  {
    ProcessAuditId = -1073741431;
    goto LABEL_49;
  }
  LOBYTE(v12) = PreviousMode;
  ProcessAuditId = (unsigned int)CmObReferenceObjectByHandle(v4, 2, v11, v12, (__int64)&Object, (__int64)&v33);
  if ( ProcessAuditId == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v9 = 1;
    if ( !CmpVEEnabled || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, &v31) )
      goto LABEL_48;
    LOBYTE(v25) = PreviousMode;
    ProcessAuditId = (unsigned int)CmObReferenceObjectByHandle(v35, 131097, v24, v25, (__int64)&Object, (__int64)&v33);
    if ( ProcessAuditId < SecurityAnonymous )
      goto LABEL_49;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_48:
      ProcessAuditId = -1073741790;
      goto LABEL_49;
    }
    v6 = 1;
  }
  v9 = v6;
  if ( ProcessAuditId < SecurityAnonymous )
  {
LABEL_49:
    v17 = 0;
    v18 = 0;
    goto LABEL_26;
  }
  if ( CmpTraceRoutine && Object )
    v37 = *((_QWORD *)Object + 1);
  LOBYTE(v14) = PreviousMode;
  ProcessAuditId = (unsigned int)CmpCaptureUnicodeString(&v30, a2, v14);
  v32 = ProcessAuditId;
  if ( ProcessAuditId < SecurityAnonymous )
  {
    v9 = v6;
    v17 = 0;
    v18 = 0;
    goto LABEL_26;
  }
  v15 = v30;
  if ( (_WORD)v30 && (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, *((_QWORD *)&v30 + 1)) )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
    v5 = TransientPoolWithQuota;
    v36 = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      ProcessAuditId = -1073741670;
      v32 = -1073741670;
      v9 = v6;
      v17 = 0;
      v18 = 0;
      goto LABEL_26;
    }
    CmpCaptureUnicodeStringBuffer((unsigned __int16 *)&v30, TransientPoolWithQuota, PreviousMode);
    v15 = v30;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
  {
    for ( i = (_WORD *)(*((_QWORD *)&v30 + 1) - 2LL + 2 * ((unsigned __int64)v15 >> 1)); v15 && !*i; --i )
    {
      v15 -= 2;
      LOWORD(v30) = v15;
    }
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    if ( !WheapPfaLock.ExpectedRunTime || (unsigned int)CmpIsRegistryLockAcquired() )
    {
      v17 = 0;
    }
    else
    {
      *(_QWORD *)&v41[0] = Object;
      *((_QWORD *)&v41[0] + 1) = &v30;
      v21 = CmpCallCallBacksEx(2u, (__int64)v41, 0LL, 1, 0x11u, (__int64)Object, (__int64)v34);
      if ( v21 < 0 )
      {
        ProcessAuditId = SecurityAnonymous;
        if ( v21 != -1073740541 )
          ProcessAuditId = v21;
        v17 = 0;
        goto LABEL_24;
      }
      v17 = 1;
    }
    if ( !v6 )
      goto LABEL_23;
    LOBYTE(i) = PreviousMode;
    ProcessAuditId = (unsigned int)CmKeyBodyRemapToVirtual(
                                     (unsigned int)&Object,
                                     (_DWORD)i,
                                     2,
                                     (unsigned int)&SubjectContext,
                                     (__int64)&v31);
    v9 = v6;
    if ( ProcessAuditId < SecurityAnonymous )
      goto LABEL_25;
    if ( CmpVEEnabled && (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) != 0 )
    {
LABEL_23:
      v45 = v30;
      ProcessAuditId = (unsigned int)CmDeleteValueKey((__int64)Object, &v45, v35, (v33 & 4) != 0);
    }
    else
    {
      ProcessAuditId = -1073741790;
    }
LABEL_24:
    v9 = v6;
LABEL_25:
    v18 = 1;
    goto LABEL_26;
  }
  ProcessAuditId = -1073741790;
  v9 = v6;
  v17 = 0;
  v18 = 0;
LABEL_26:
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v17 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v34[0] != v34 )
  {
    *((_DWORD *)&SubjectContext.ImpersonationLevel + 1) = 0;
    v39 = 0LL;
    v40 = 0LL;
    SubjectContext.ClientToken = Object;
    SubjectContext.ImpersonationLevel = ProcessAuditId;
    SubjectContext.ProcessAuditId = (PVOID)(unsigned int)ProcessAuditId;
    SubjectContext.PrimaryToken = v41;
    CmpCallCallBacksEx(0x11u, (__int64)&SubjectContext, 0LL, 0, 0x11u, (__int64)Object, (__int64)v34);
    ProcessAuditId = (SECURITY_IMPERSONATION_LEVEL)SubjectContext.ProcessAuditId;
  }
  if ( v18 )
    KeLeaveCriticalRegion();
  v22 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v27 && CmpTraceRoutine )
  {
    v26 = v37;
    LOBYTE(v26) = 15;
    guard_dispatch_icall_no_overrides(v26, (__int64)v46);
  }
  if ( v5 )
    CmSiFreeMemory(v5);
  if ( v28 )
    CmpReleaseShutdownRundown(v22);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v43);
  return (unsigned int)ProcessAuditId;
}
