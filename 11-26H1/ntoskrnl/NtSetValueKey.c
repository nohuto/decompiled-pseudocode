/*
 * XREFs of NtSetValueKey @ 0x14093FE40
 * Callers:
 *     DifNtSetValueKeyWrapper @ 0x140692430 (DifNtSetValueKeyWrapper.c)
 *     ExpWatchLicenseInfoWork @ 0x14083D0E0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 *     InitSafeBoot @ 0x140CB1580 (InitSafeBoot.c)
 *     IopStoreSystemPartitionInformation @ 0x140CC441C (IopStoreSystemPartitionInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140CEACDC (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140CEF9D8 (CmpAddDockingInfo.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     CmpCaptureUnicodeString @ 0x140940730 (CmpCaptureUnicodeString.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB0548 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  int v7; // edi
  char v8; // r15
  char PreviousMode; // r13
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  int ProcessAuditId; // edi
  __int64 v16; // r8
  __int64 v17; // rdx
  ULONG v18; // r14d
  ULONG Length; // edi
  ULONG v20; // esi
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  struct _PRIVILEGE_SET *v23; // r13
  struct _PRIVILEGE_SET *v24; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rcx
  volatile unsigned __int64 CycleTime; // r12
  char v27; // r13
  char v28; // r14
  void *v29; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v31; // eax
  PPRIVILEGE_SET v32; // rcx
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // r9d
  bool v37; // zf
  size_t v38; // [rsp+20h] [rbp-1D8h]
  char v39; // [rsp+42h] [rbp-1B6h]
  char v40; // [rsp+44h] [rbp-1B4h]
  char v41; // [rsp+46h] [rbp-1B2h]
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-190h]
  int v45; // [rsp+6Ch] [rbp-18Ch] BYREF
  int v46; // [rsp+70h] [rbp-188h]
  void *Src; // [rsp+78h] [rbp-180h]
  ULONG v48; // [rsp+80h] [rbp-178h]
  __int64 v49; // [rsp+88h] [rbp-170h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-168h]
  _QWORD v51[2]; // [rsp+98h] [rbp-160h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-150h]
  __int64 v53; // [rsp+B0h] [rbp-148h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-140h] BYREF
  __int128 v55; // [rsp+D8h] [rbp-120h]
  __int64 v56; // [rsp+E8h] [rbp-110h]
  struct _PRIVILEGE_SET *v57; // [rsp+F0h] [rbp-108h]
  _BYTE v58[256]; // [rsp+F8h] [rbp-100h] BYREF

  v46 = Type;
  v48 = TitleIndex;
  v7 = (int)KeyHandle;
  v52 = (__int64)KeyHandle;
  Src = Data;
  memset(v58, 0, 24);
  DestinationString = 0LL;
  v49 = 0LL;
  memset(&v58[88], 0, 32);
  v53 = 0LL;
  v40 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)&v58[88], 0x20000uLL, *(__int64 *)&TitleIndex);
    v40 = 1;
  }
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v58);
  Object = 0LL;
  v8 = 0;
  v51[1] = v51;
  v51[0] = v51;
  memset_0(&v58[24], 0, 0x40uLL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v45 = 0;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v41 = CmpAcquireShutdownRundown(v12, v11);
  if ( !v41 )
  {
    ProcessAuditId = -1073741431;
    goto LABEL_108;
  }
  LOBYTE(v14) = PreviousMode;
  ProcessAuditId = CmObReferenceObjectByHandle(v7, 2, v13, v14, (__int64)&Object, (__int64)&v49);
  if ( ProcessAuditId == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v10 = 1;
    if ( !CmpVEEnabled || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, &v45) )
      goto LABEL_111;
    LOBYTE(v36) = PreviousMode;
    ProcessAuditId = CmObReferenceObjectByHandle(v52, 131097, v35, v36, (__int64)&Object, (__int64)&v49);
    if ( ProcessAuditId < 0 )
      goto LABEL_108;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_111:
      ProcessAuditId = -1073741790;
      goto LABEL_108;
    }
    v8 = 1;
  }
  v10 = v8;
  if ( ProcessAuditId < 0 )
  {
LABEL_108:
    v27 = 0;
    v28 = 0;
    goto LABEL_76;
  }
  if ( CmpTraceRoutine && Object )
    v53 = *((_QWORD *)Object + 1);
  LOBYTE(v16) = PreviousMode;
  ProcessAuditId = CmpCaptureUnicodeString(&DestinationString, ValueName, v16);
  if ( ProcessAuditId < 0 )
  {
    v10 = v8;
    v27 = 0;
    v28 = 0;
    goto LABEL_76;
  }
  if ( PreviousMode )
  {
    v18 = DataSize;
  }
  else
  {
    v18 = DataSize;
    if ( DataSize && !MmIsKernelAddress((unsigned __int64)Data) )
    {
      ProcessAuditId = -1073741811;
      v10 = v8;
      v27 = 0;
      v28 = 0;
      goto LABEL_76;
    }
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length > 0x7FFFu || v18 > 0x7FFFF000 )
  {
    ProcessAuditId = -1073741811;
    v10 = v8;
    v27 = 0;
    v28 = 0;
    goto LABEL_76;
  }
  v20 = DestinationString.Length;
  v21 = (DestinationString.Length + 7) & 0xFFFFFFF8;
  v44 = v21;
  v22 = v21 + v18;
  if ( v21 + v18 < v18 )
  {
    ProcessAuditId = -1073741811;
    v10 = v8;
    v27 = 0;
    v28 = 0;
    goto LABEL_76;
  }
  if ( v39 )
    goto LABEL_14;
  CycleTime = CmpFreezeListLock.CycleTime;
  if ( !CmpFreezeListLock.CycleTime )
    goto LABEL_61;
  if ( MmIsUserAddress((unsigned __int64)DestinationString.Buffer) )
  {
LABEL_32:
    v21 = v44;
LABEL_14:
    if ( v22 )
    {
      if ( v22 <= 0x40 )
        goto LABEL_16;
      if ( v18 <= 0x40 )
      {
        if ( (unsigned __int16)Length <= 0x40u && v18 < Length )
          v20 = v18;
      }
      else
      {
        v20 = v22;
        if ( (unsigned __int16)Length <= 0x40u )
          v20 = v18;
      }
      if ( v20 )
      {
        TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
        Privileges = TransientPoolWithQuota;
        if ( !TransientPoolWithQuota )
        {
          ProcessAuditId = -1073741670;
          v10 = v8;
          v27 = 0;
          v28 = 0;
          goto LABEL_76;
        }
        LOWORD(Length) = DestinationString.Length;
      }
      else
      {
        TransientPoolWithQuota = Privileges;
      }
      if ( v20 )
      {
        if ( v20 == v18 )
        {
          v23 = (struct _PRIVILEGE_SET *)&v58[120];
          v24 = TransientPoolWithQuota;
        }
        else
        {
          v23 = TransientPoolWithQuota;
          if ( v20 == (unsigned __int16)Length )
            v24 = (struct _PRIVILEGE_SET *)&v58[120];
          else
            v24 = (struct _PRIVILEGE_SET *)((char *)TransientPoolWithQuota + v21);
        }
      }
      else
      {
LABEL_16:
        v23 = (struct _PRIVILEGE_SET *)&v58[120];
        v24 = (struct _PRIVILEGE_SET *)&v58[v21 + 120];
      }
    }
    else
    {
      v24 = 0LL;
      v23 = 0LL;
    }
    if ( (_WORD)Length )
    {
      if ( v39 && ((__int64)DestinationString.Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v39 )
        RtlCopyFromUser(v23, DestinationString.Buffer, (unsigned __int16)Length);
      else
        RtlCopyVolatileMemory(v23, DestinationString.Buffer, (unsigned __int16)Length);
      DestinationString.Buffer = (wchar_t *)v23;
      LOWORD(Length) = DestinationString.Length;
    }
    else
    {
      DestinationString.Buffer = 0LL;
    }
    if ( v18 )
    {
      if ( v39 )
        RtlCopyFromUser(v24, Src, v18);
      else
        RtlCopyVolatileMemory(v24, Src, v18);
      v29 = v24;
      v57 = v24;
      LOWORD(Length) = DestinationString.Length;
    }
    else
    {
      v29 = 0LL;
      v57 = 0LL;
    }
    goto LABEL_66;
  }
  if ( CycleTime )
  {
    v29 = Src;
    if ( MmIsUserAddress((unsigned __int64)Src) )
      goto LABEL_32;
  }
  else
  {
LABEL_61:
    v29 = Src;
  }
LABEL_66:
  if ( (_WORD)Length )
  {
    do
    {
      if ( DestinationString.Buffer[((unsigned __int64)(unsigned __int16)Length >> 1) - 1] )
        break;
      v37 = (_WORD)Length == 2;
      LOWORD(Length) = Length - 2;
      DestinationString.Length = Length;
    }
    while ( !v37 );
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() )
    {
      v27 = 0;
    }
    else
    {
      *(_QWORD *)&v58[24] = Object;
      *(_QWORD *)&v58[32] = &DestinationString;
      *(_DWORD *)&v58[40] = v48;
      *(_DWORD *)&v58[44] = v46;
      *(_QWORD *)&v58[48] = v29;
      *(_DWORD *)&v58[56] = v18;
      v31 = CmpCallCallBacksEx(1u, (__int64)&v58[24], 0LL, 1, 0x10u, (__int64)Object, (__int64)v51);
      if ( v31 < 0 )
      {
        v10 = v8;
        ProcessAuditId = 0;
        if ( v31 != -1073740541 )
          ProcessAuditId = v31;
        v27 = 0;
        goto LABEL_75;
      }
      v27 = 1;
    }
    if ( !v8
      || (LOBYTE(v17) = v39,
          ProcessAuditId = CmKeyBodyReplicateToVirtual(&Object, v17, 2LL, &SubjectContext, &v45),
          v10 = v8,
          ProcessAuditId >= 0) )
    {
      LODWORD(v38) = v18;
      ProcessAuditId = CmSetValueKey((__int64)Object, &DestinationString, v46, v29, v38, v52, (v49 & 4) != 0);
      v10 = v8;
    }
LABEL_75:
    v28 = 1;
    goto LABEL_76;
  }
  ProcessAuditId = -1073741790;
  v10 = v8;
  v27 = 0;
  v28 = 0;
LABEL_76:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v27
    && HIDWORD(WheapPfaLock.StateSaveArea)
    && !(unsigned int)CmpIsRegistryLockAcquired()
    && (_QWORD *)v51[0] != v51 )
  {
    *((_DWORD *)&SubjectContext.ImpersonationLevel + 1) = 0;
    v55 = 0LL;
    v56 = 0LL;
    SubjectContext.ClientToken = Object;
    SubjectContext.ImpersonationLevel = ProcessAuditId;
    SubjectContext.ProcessAuditId = (PVOID)(unsigned int)ProcessAuditId;
    SubjectContext.PrimaryToken = &v58[24];
    CmpCallCallBacksEx(0x10u, (__int64)&SubjectContext, 0LL, 0, 0x10u, (__int64)Object, (__int64)v51);
    ProcessAuditId = (int)SubjectContext.ProcessAuditId;
  }
  if ( v28 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v40 && CmpTraceRoutine )
  {
    v34 = v53;
    LOBYTE(v34) = 14;
    guard_dispatch_icall_no_overrides(v34, (__int64)&v58[88]);
  }
  v32 = Privileges;
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v41 )
    CmpReleaseShutdownRundown(v32);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v58);
  return ProcessAuditId;
}
