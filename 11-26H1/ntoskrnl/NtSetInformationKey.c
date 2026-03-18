/*
 * XREFs of NtSetInformationKey @ 0x1408B0310
 * Callers:
 *     DifNtSetInformationKeyWrapper @ 0x14068BF90 (DifNtSetInformationKeyWrapper.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x1404D4AF4 (CmDoVirtualTest.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB2878 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtSetInformationKey(void *a1, unsigned int a2, void *a3, int a4)
{
  char v5; // r14
  char v6; // r12
  __int64 *v7; // rdi
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r13
  unsigned __int8 PreviousMode; // r12
  unsigned int v16; // eax
  ACCESS_MASK v17; // edx
  NTSTATUS v18; // ebx
  void *v19; // rax
  unsigned int v20; // r15d
  struct _KTHREAD *CurrentThread; // rax
  int v22; // r9d
  char v23; // r12
  bool v24; // zf
  char v25; // al
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  HANDLE v32; // rax
  HANDLE v33; // rax
  char v34; // [rsp+40h] [rbp-158h]
  char v35; // [rsp+41h] [rbp-157h]
  char v36; // [rsp+42h] [rbp-156h]
  unsigned __int8 v37; // [rsp+43h] [rbp-155h]
  HANDLE Handle; // [rsp+50h] [rbp-148h] BYREF
  __int64 v39; // [rsp+58h] [rbp-140h] BYREF
  void *Src; // [rsp+60h] [rbp-138h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-130h]
  PVOID v42; // [rsp+70h] [rbp-128h] BYREF
  int v43; // [rsp+78h] [rbp-120h]
  int v44; // [rsp+7Ch] [rbp-11Ch] BYREF
  __int64 v45; // [rsp+80h] [rbp-118h]
  _QWORD v46[2]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE SubjectContext[44]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+CCh] [rbp-CCh]
  int v49; // [rsp+D4h] [rbp-C4h]
  __int128 v50; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-A8h]
  __int128 v52; // [rsp+100h] [rbp-98h]
  __int64 v53; // [rsp+110h] [rbp-88h]
  __int128 v54; // [rsp+118h] [rbp-80h] BYREF
  __int64 v55; // [rsp+128h] [rbp-70h]
  _BYTE v56[32]; // [rsp+130h] [rbp-68h] BYREF

  v43 = a4;
  Src = a3;
  v41 = a2;
  Handle = a1;
  v54 = 0LL;
  v55 = 0LL;
  v39 = 0LL;
  memset(v56, 0, sizeof(v56));
  v45 = 0LL;
  v5 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v56, 0x20000uLL, (__int64)a3);
    v5 = 1;
  }
  v6 = 0;
  v35 = 0;
  v34 = 0;
  v7 = 0LL;
  v42 = 0LL;
  v37 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v46[1] = v46;
  v46[0] = v46;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v54);
  v44 = 0;
  v8 = 0;
  memset(SubjectContext, 0, 32);
  v14 = CmpAcquireShutdownRundown(v10, v9);
  if ( !v14 )
  {
    v18 = -1073741431;
    v25 = 0;
    goto LABEL_29;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 == 1 )
    goto LABEL_5;
  v12 = a2;
  if ( a2 )
  {
    v12 = a2 - 2;
    if ( a2 != 2 )
    {
      v12 = a2 - 3;
      if ( a2 != 3 )
      {
        v12 = a2 - 4;
        if ( a2 == 4 )
        {
LABEL_5:
          v36 = 1;
LABEL_6:
          v16 = 4;
          goto LABEL_7;
        }
        if ( a2 != 5 )
        {
          if ( CmpTraceRoutine )
          {
            v32 = Handle;
            if ( Handle )
            {
              Handle = 0LL;
              if ( ObReferenceObjectByHandle(
                     v32,
                     0,
                     (POBJECT_TYPE)CmKeyObjectType,
                     KeGetCurrentThread()->PreviousMode,
                     &Handle,
                     0LL) >= 0 )
              {
                v45 = *((_QWORD *)Handle + 1);
                ObfDereferenceObject(Handle);
              }
            }
          }
          v18 = -1073741821;
          goto LABEL_52;
        }
      }
    }
    v36 = 0;
    goto LABEL_6;
  }
  v16 = 8;
  v36 = 1;
LABEL_7:
  if ( v43 != v16 )
  {
    if ( CmpTraceRoutine )
    {
      v33 = Handle;
      if ( Handle )
      {
        Handle = 0LL;
        if ( ObReferenceObjectByHandle(
               v33,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &Handle,
               0LL) >= 0 )
        {
          v45 = *((_QWORD *)Handle + 1);
          ObfDereferenceObject(Handle);
        }
      }
    }
    v18 = -1073741820;
    v6 = 0;
    v25 = 0;
    goto LABEL_29;
  }
  if ( PreviousMode )
    RtlCopyFromUser(&v39, Src, v16);
  else
    RtlCopyVolatileMemory(&v39, Src, v16);
  Src = 0LL;
  v17 = 0;
  if ( a2 != 5 )
    v17 = 2;
  v18 = ObReferenceObjectByHandle(Handle, v17, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Src, 0LL);
  v7 = (__int64 *)Src;
  v42 = Src;
  v19 = Src;
  if ( v18 == -1073741790 )
  {
    if ( !v36 )
    {
      v18 = -1073741790;
      v6 = 0;
      v25 = 0;
      goto LABEL_29;
    }
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
    v8 = 1;
    v25 = CmDoVirtualTest();
    if ( !v25 )
    {
      v18 = -1073741790;
      v6 = 0;
      goto LABEL_29;
    }
    Src = 0LL;
    v18 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Src, 0LL);
    v7 = (__int64 *)Src;
    v42 = Src;
    if ( v18 < 0 )
    {
LABEL_52:
      v6 = 0;
      v25 = 0;
      goto LABEL_29;
    }
    v25 = CmKeyBodyNeedsVirtualImage(Src);
    if ( !v25 )
    {
      v18 = -1073741790;
      v6 = 0;
      goto LABEL_29;
    }
    v18 = 0;
    v11 = 1LL;
    v37 = 1;
    v19 = v7;
  }
  else
  {
    LOBYTE(v11) = 0;
  }
  v8 = v11;
  if ( v18 < 0 )
    goto LABEL_52;
  if ( CmpTraceRoutine && v19 )
    v45 = v7[1];
  v20 = v41;
  if ( v41 == 5 )
  {
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v34 = 1;
    if ( WheapPfaLock.ExpectedRunTime )
    {
      if ( !(unsigned int)CmpIsRegistryLockAcquired() )
      {
        *(_QWORD *)&v50 = v7;
        DWORD2(v50) = v20;
        *(_QWORD *)&v51 = &v39;
        DWORD2(v51) = v43;
        LOBYTE(v22) = 1;
        v18 = CmpCallCallBacksEx(3, (unsigned int)&v50, 0, v22, 18, (__int64)v7, (__int64)v46);
        if ( v18 < 0 )
        {
          v8 = v37;
          v31 = 0;
          if ( v18 != -1073740541 )
            v31 = v18;
          v18 = v31;
          v6 = 0;
          goto LABEL_28;
        }
        v35 = 1;
      }
      v11 = v37;
    }
    if ( (_BYTE)v11 )
    {
      v18 = CmKeyBodyReplicateToVirtual(&v42, PreviousMode, 2LL, SubjectContext, &v44);
      v23 = v37;
      v8 = v37;
      v7 = (__int64 *)v42;
      if ( v18 < 0 )
        goto LABEL_27;
      v20 = v41;
    }
    else
    {
      v23 = v37;
    }
    v24 = v20 == 5;
    v8 = v23;
    if ( v24 )
    {
      *((_WORD *)v7 + 25) = v39;
      v18 = 0;
    }
    else
    {
      if ( v41 )
      {
        if ( v41 == 1 )
        {
          v28 = (unsigned int)v39;
          v29 = 1LL;
        }
        else if ( v41 == 2 )
        {
          v28 = (unsigned int)v39;
          v29 = 2LL;
        }
        else
        {
          v12 = v41 - 3;
          if ( v41 == 3 )
          {
            v28 = (unsigned int)v39;
            v29 = 3LL;
          }
          else
          {
            if ( v41 != 4 )
              goto LABEL_27;
            v28 = (unsigned int)v39;
            v29 = 4LL;
          }
        }
        v30 = CmSetKeyFlags(v7, v29, v28);
      }
      else
      {
        v30 = CmSetLastWriteTimeKey(v7, &v39);
      }
      v18 = v30;
    }
LABEL_27:
    v6 = v35;
LABEL_28:
    v25 = 1;
    goto LABEL_29;
  }
  v12 = v7[1];
  if ( (*(_DWORD *)(v12 + 8) & 0x80u) != 0 )
  {
    v18 = -1073741790;
    v8 = v11;
    v6 = 0;
    v25 = 0;
  }
  else
  {
    if ( !(unsigned __int8)CmpIsKcbImmutable(v12, v11) )
      goto LABEL_18;
    v18 = -1073741790;
    v8 = v11;
    v6 = 0;
    v25 = 0;
  }
LABEL_29:
  if ( v8 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
    v25 = v34;
  }
  if ( v6 )
  {
    if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v46[0] != v46 )
    {
      *(_OWORD *)&SubjectContext[28] = 0LL;
      v48 = 0LL;
      v49 = 0;
      *(_QWORD *)SubjectContext = v7;
      *(_QWORD *)&SubjectContext[8] = (unsigned int)v18;
      *(_DWORD *)&SubjectContext[24] = v18;
      *(_QWORD *)&SubjectContext[16] = &v50;
      CmpCallCallBacksEx(18, (unsigned int)SubjectContext, 0, 0, 18, (__int64)v7, (__int64)v46);
      v18 = *(_DWORD *)&SubjectContext[24];
    }
    v25 = v34;
  }
  if ( v25 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v5 && CmpTraceRoutine )
  {
    v27 = v45;
    LOBYTE(v27) = 20;
    guard_dispatch_icall_no_overrides(v27, (__int64)v56);
  }
  if ( v14 )
    CmpReleaseShutdownRundown(v12);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v54);
  return (unsigned int)v18;
}
