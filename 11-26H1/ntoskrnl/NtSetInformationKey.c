/*
 * XREFs of NtSetInformationKey @ 0x1408B6800
 * Callers:
 *     DifNtSetInformationKeyWrapper @ 0x14068FB70 (DifNtSetInformationKeyWrapper.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x1404CE364 (CmDoVirtualTest.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB0548 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v5; // r14
  char v6; // r12
  __int64 *v7; // rdi
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // r13
  unsigned __int8 PreviousMode; // r12
  unsigned int v14; // eax
  ACCESS_MASK v15; // edx
  __int64 v16; // rdx
  int v17; // ebx
  void *v18; // rax
  KEY_SET_INFORMATION_CLASS v19; // r15d
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  char v22; // r12
  bool v23; // zf
  char v24; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  HANDLE v31; // rax
  HANDLE v32; // rax
  char v33; // [rsp+40h] [rbp-158h]
  char v34; // [rsp+41h] [rbp-157h]
  char v35; // [rsp+42h] [rbp-156h]
  char v36; // [rsp+43h] [rbp-155h]
  HANDLE Handle; // [rsp+50h] [rbp-148h] BYREF
  __int64 v38; // [rsp+58h] [rbp-140h] BYREF
  void *Src; // [rsp+60h] [rbp-138h] BYREF
  KEY_SET_INFORMATION_CLASS v40; // [rsp+68h] [rbp-130h]
  PVOID v41; // [rsp+70h] [rbp-128h] BYREF
  ULONG v42; // [rsp+78h] [rbp-120h]
  int v43; // [rsp+7Ch] [rbp-11Ch] BYREF
  __int64 v44; // [rsp+80h] [rbp-118h]
  _QWORD v45[2]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE SubjectContext[44]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+CCh] [rbp-CCh]
  int v48; // [rsp+D4h] [rbp-C4h]
  __int128 v49; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-A8h]
  __int128 v51; // [rsp+100h] [rbp-98h]
  __int64 v52; // [rsp+110h] [rbp-88h]
  __int128 v53; // [rsp+118h] [rbp-80h] BYREF
  __int64 v54; // [rsp+128h] [rbp-70h]
  _BYTE v55[32]; // [rsp+130h] [rbp-68h] BYREF

  v42 = KeySetInformationLength;
  Src = KeySetInformation;
  v40 = KeySetInformationClass;
  Handle = KeyHandle;
  v53 = 0LL;
  v54 = 0LL;
  v38 = 0LL;
  memset(v55, 0, sizeof(v55));
  v44 = 0LL;
  v5 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v55, 0x20000uLL, (__int64)KeySetInformation);
    v5 = 1;
  }
  v6 = 0;
  v34 = 0;
  v33 = 0;
  v7 = 0LL;
  v41 = 0LL;
  v36 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v45[1] = v45;
  v45[0] = v45;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v53);
  v43 = 0;
  v8 = 0;
  memset(SubjectContext, 0, 32);
  v12 = CmpAcquireShutdownRundown(v10, v9);
  if ( !v12 )
  {
    v17 = -1073741431;
    v24 = 0;
    goto LABEL_29;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( KeySetInformationClass == KeyWow64FlagsInformation )
    goto LABEL_5;
  v11 = (unsigned int)KeySetInformationClass;
  if ( KeySetInformationClass )
  {
    v11 = (unsigned int)(KeySetInformationClass - 2);
    if ( KeySetInformationClass != KeyControlFlagsInformation )
    {
      v11 = (unsigned int)(KeySetInformationClass - 3);
      if ( KeySetInformationClass != KeySetVirtualizationInformation )
      {
        v11 = (unsigned int)(KeySetInformationClass - 4);
        if ( KeySetInformationClass == KeySetDebugInformation )
        {
LABEL_5:
          v35 = 1;
LABEL_6:
          v14 = 4;
          goto LABEL_7;
        }
        if ( KeySetInformationClass != KeySetHandleTagsInformation )
        {
          if ( CmpTraceRoutine )
          {
            v31 = Handle;
            if ( Handle )
            {
              Handle = 0LL;
              if ( ObReferenceObjectByHandle(
                     v31,
                     0,
                     (POBJECT_TYPE)CmKeyObjectType,
                     KeGetCurrentThread()->PreviousMode,
                     &Handle,
                     0LL) >= 0 )
              {
                v44 = *((_QWORD *)Handle + 1);
                ObfDereferenceObject(Handle);
              }
            }
          }
          v17 = -1073741821;
          goto LABEL_52;
        }
      }
    }
    v35 = 0;
    goto LABEL_6;
  }
  v14 = 8;
  v35 = 1;
LABEL_7:
  if ( v42 != v14 )
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
          v44 = *((_QWORD *)Handle + 1);
          ObfDereferenceObject(Handle);
        }
      }
    }
    v17 = -1073741820;
    v6 = 0;
    v24 = 0;
    goto LABEL_29;
  }
  if ( PreviousMode )
    RtlCopyFromUser(&v38, Src, v14);
  else
    RtlCopyVolatileMemory(&v38, Src, v14);
  Src = 0LL;
  v15 = 0;
  if ( KeySetInformationClass != KeySetHandleTagsInformation )
    v15 = 2;
  v17 = ObReferenceObjectByHandle(Handle, v15, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Src, 0LL);
  v7 = (__int64 *)Src;
  v41 = Src;
  v18 = Src;
  if ( v17 == -1073741790 )
  {
    if ( !v35 )
    {
      v17 = -1073741790;
      v6 = 0;
      v24 = 0;
      goto LABEL_29;
    }
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
    v8 = 1;
    v24 = CmDoVirtualTest();
    if ( !v24 )
    {
      v17 = -1073741790;
      v6 = 0;
      goto LABEL_29;
    }
    Src = 0LL;
    v17 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Src, 0LL);
    v7 = (__int64 *)Src;
    v41 = Src;
    if ( v17 < 0 )
    {
LABEL_52:
      v6 = 0;
      v24 = 0;
      goto LABEL_29;
    }
    v24 = CmKeyBodyNeedsVirtualImage(Src);
    if ( !v24 )
    {
      v17 = -1073741790;
      v6 = 0;
      goto LABEL_29;
    }
    v17 = 0;
    v16 = 1LL;
    v36 = 1;
    v18 = v7;
  }
  else
  {
    LOBYTE(v16) = 0;
  }
  v8 = v16;
  if ( v17 < 0 )
    goto LABEL_52;
  if ( CmpTraceRoutine && v18 )
    v44 = v7[1];
  v19 = v40;
  if ( v40 == KeySetHandleTagsInformation )
  {
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v33 = 1;
    if ( HIDWORD(WheapPfaLock.StateSaveArea) )
    {
      if ( !(unsigned int)CmpIsRegistryLockAcquired() )
      {
        *(_QWORD *)&v49 = v7;
        DWORD2(v49) = v19;
        *(_QWORD *)&v50 = &v38;
        DWORD2(v50) = v42;
        LOBYTE(v21) = 1;
        v17 = CmpCallCallBacksEx(3, (unsigned int)&v49, 0, v21, 18, (__int64)v7, (__int64)v45);
        if ( v17 < 0 )
        {
          v8 = v36;
          v30 = 0;
          if ( v17 != -1073740541 )
            v30 = v17;
          v17 = v30;
          v6 = 0;
          goto LABEL_28;
        }
        v34 = 1;
      }
      LOBYTE(v16) = v36;
    }
    if ( (_BYTE)v16 )
    {
      v17 = CmKeyBodyReplicateToVirtual(&v41, PreviousMode, 2LL, SubjectContext, &v43);
      v22 = v36;
      v8 = v36;
      v7 = (__int64 *)v41;
      if ( v17 < 0 )
        goto LABEL_27;
      v19 = v40;
    }
    else
    {
      v22 = v36;
    }
    v23 = v19 == KeySetHandleTagsInformation;
    v8 = v22;
    if ( v23 )
    {
      *((_WORD *)v7 + 25) = v38;
      v17 = 0;
    }
    else
    {
      if ( v40 )
      {
        if ( v40 == KeyWow64FlagsInformation )
        {
          v27 = (unsigned int)v38;
          v28 = 1LL;
        }
        else if ( v40 == KeyControlFlagsInformation )
        {
          v27 = (unsigned int)v38;
          v28 = 2LL;
        }
        else
        {
          v11 = (unsigned int)(v40 - 3);
          if ( v40 == KeySetVirtualizationInformation )
          {
            v27 = (unsigned int)v38;
            v28 = 3LL;
          }
          else
          {
            if ( v40 != KeySetDebugInformation )
              goto LABEL_27;
            v27 = (unsigned int)v38;
            v28 = 4LL;
          }
        }
        v29 = CmSetKeyFlags(v7, v28, v27);
      }
      else
      {
        v29 = CmSetLastWriteTimeKey(v7, &v38);
      }
      v17 = v29;
    }
LABEL_27:
    v6 = v34;
LABEL_28:
    v24 = 1;
    goto LABEL_29;
  }
  v11 = v7[1];
  if ( (*(_DWORD *)(v11 + 8) & 0x80u) != 0 )
  {
    v17 = -1073741790;
    v8 = v16;
    v6 = 0;
    v24 = 0;
  }
  else
  {
    if ( !(unsigned __int8)CmpIsKcbImmutable(v11, v16) )
      goto LABEL_18;
    v17 = -1073741790;
    v8 = v16;
    v6 = 0;
    v24 = 0;
  }
LABEL_29:
  if ( v8 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
    v24 = v33;
  }
  if ( v6 )
  {
    if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v45[0] != v45 )
    {
      *(_OWORD *)&SubjectContext[28] = 0LL;
      v47 = 0LL;
      v48 = 0;
      *(_QWORD *)SubjectContext = v7;
      *(_QWORD *)&SubjectContext[8] = (unsigned int)v17;
      *(_DWORD *)&SubjectContext[24] = v17;
      *(_QWORD *)&SubjectContext[16] = &v49;
      CmpCallCallBacksEx(18, (unsigned int)SubjectContext, 0, 0, 18, (__int64)v7, (__int64)v45);
      v17 = *(_DWORD *)&SubjectContext[24];
    }
    v24 = v33;
  }
  if ( v24 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v5 && CmpTraceRoutine )
  {
    v26 = v44;
    LOBYTE(v26) = 20;
    guard_dispatch_icall_no_overrides(v26, (__int64)v55);
  }
  if ( v12 )
    CmpReleaseShutdownRundown(v11);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v53);
  return v17;
}
