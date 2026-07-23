/*
 * XREFs of IopXxxControlFile @ 0x140925E30
 * Callers:
 *     NtFsControlFile @ 0x140925D50 (NtFsControlFile.c)
 *     NtDeviceIoControlFile @ 0x140925DC0 (NtDeviceIoControlFile.c)
 *     PfpVolumePrefetchMetadata @ 0x14097F124 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14097F5AC (PfpPrefetchDirectoryStream.c)
 *     PfSnPrefetchFileMetadata @ 0x140989940 (PfSnPrefetchFileMetadata.c)
 *     PfSnGetSectionObject @ 0x14098A718 (PfSnGetSectionObject.c)
 *     PfpPrefetchEntireDirectory @ 0x140A58878 (PfpPrefetchEntireDirectory.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x140266A90 (IoSetIoCompletionEx2.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     IopSetFileObjectExtensionFlag @ 0x140462F80 (IopSetFileObjectExtensionFlag.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x140463E10 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopIsStandardFsctlIoControlCode @ 0x140467430 (IopIsStandardFsctlIoControlCode.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     IopDecrementCompletionContextUsageCount @ 0x140476A68 (IopDecrementCompletionContextUsageCount.c)
 *     FsRtlGetSupportedFeatures @ 0x14049C3B0 (FsRtlGetSupportedFeatures.c)
 *     MmUpdateMdlTracker @ 0x1404D9B5C (MmUpdateMdlTracker.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     AstLogIoctl @ 0x140927010 (AstLogIoctl.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x140B1E7A8 (EtwTimLogProhibitFsctlSystemCalls.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopXxxControlFile(
        HANDLE Handle,
        void *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int *Src,
        size_t Size,
        char *Address,
        unsigned int a10,
        char a11)
{
  unsigned int v12; // r12d
  int v13; // r13d
  KPROCESSOR_MODE PreviousMode; // r14
  int ULongFromUser; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdi
  char UCharFromUser; // al
  unsigned __int64 v19; // rbx
  char *v20; // rcx
  struct _KLOCK_ENTRIES *v21; // r9
  int SupportedFeatures; // r13d
  struct _FILE_OBJECT *v23; // rdi
  PVOID v24; // r14
  unsigned __int8 v25; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  unsigned int v29; // esi
  __int64 v30; // rcx
  ULONG_PTR v31; // r14
  void *v32; // rbx
  char v33; // si
  __int64 Irp; // rax
  IRP *v35; // rbx
  struct _KTHREAD *v36; // rsi
  char v37; // r8
  ULONG v38; // ecx
  ULONG v39; // r9d
  PMDL *v40; // r14
  PVOID *v41; // r12
  int v42; // edx
  ULONG_PTR v43; // rcx
  void *Pool2; // r14
  unsigned int *v45; // r15
  _DWORD *v46; // rax
  bool v47; // bl
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v49; // rax
  void *v50; // rdx
  unsigned __int8 v51; // si
  _KPROCESS *Process; // rdx
  __int16 v54; // ax
  unsigned __int64 v55; // rbx
  int v56; // eax
  PVOID v57; // rbx
  _DWORD *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r8
  _DWORD *v61; // rsi
  PVOID v62; // rsi
  unsigned __int64 v63; // rbx
  char *v64; // rsi
  unsigned __int64 v65; // rsi
  char v66; // al
  PDEVICE_OBJECT AttachedDevice; // rax
  bool v68; // sf
  unsigned int v69; // edx
  __int64 v70; // rdx
  char v71; // bl
  char v72; // al
  char v73; // bl
  ULONG_PTR v74; // rcx
  void *v75; // rax
  int v76; // r12d
  PMDL Mdl; // r12
  __int64 Lock; // r14
  __int64 v79; // rax
  int v80; // eax
  int v81; // ecx
  _BOOL8 v82; // r8
  struct _KPROCESS *v83; // rax
  unsigned int *v84; // rcx
  int v85; // eax
  _DWORD *p_ThreadListEntry; // rax
  struct _DRIVER_OBJECT *v87; // rbx
  unsigned __int8 Length; // [rsp+50h] [rbp-E8h]
  unsigned __int8 Length_1; // [rsp+51h] [rbp-E7h] BYREF
  bool Length_2; // [rsp+52h] [rbp-E6h]
  KPROCESSOR_MODE Length_3; // [rsp+53h] [rbp-E5h]
  unsigned int Length_4; // [rsp+54h] [rbp-E4h]
  int v93; // [rsp+58h] [rbp-E0h]
  char v94; // [rsp+5Ch] [rbp-DCh]
  int v95; // [rsp+60h] [rbp-D8h]
  PVOID v96; // [rsp+68h] [rbp-D0h]
  PVOID v97; // [rsp+70h] [rbp-C8h] BYREF
  PVOID P; // [rsp+78h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+80h] [rbp-B8h] BYREF
  void *v100; // [rsp+88h] [rbp-B0h]
  __int64 v101; // [rsp+90h] [rbp-A8h]
  int v102; // [rsp+98h] [rbp-A0h]
  void *p_Flags; // [rsp+A0h] [rbp-98h]
  __int128 v104; // [rsp+A8h] [rbp-90h] BYREF
  PETHREAD Thread; // [rsp+B8h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-60h] BYREF

  v101 = a3;
  v96 = 0LL;
  HandleInformation = 0LL;
  v104 = 0LL;
  v12 = a6;
  v13 = a6 & 3;
  v95 = v13;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  Length = PreviousMode;
  Length_3 = PreviousMode;
  if ( !PreviousMode )
  {
    v16 = a10;
    Length_4 = a10;
    v100 = a5;
    goto LABEL_19;
  }
  if ( !a11 && !IopIsStandardFsctlIoControlCode(a6) )
  {
    v71 = *(_DWORD *)(*(_QWORD *)(v70 + 184) + 2008LL);
    v72 = v71 & 4;
    v73 = v71 & 2;
    if ( v73 || v72 )
    {
      EtwTimLogProhibitFsctlSystemCalls((unsigned int)(v73 != 0) + 1);
      if ( v73 )
        return 3221225506LL;
    }
  }
  v100 = a5;
  ULongFromUser = RtlReadULongFromUser(a5);
  RtlWriteULongToUser(a5, ULongFromUser);
  if ( v13 )
  {
    v16 = a10;
  }
  else
  {
    if ( Address )
    {
      Length_4 = a10;
      if ( a10 )
      {
        v19 = (unsigned __int64)Address;
        v20 = &Address[a10];
        if ( v20 <= Address || (unsigned __int64)v20 > 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v17 = ((unsigned __int64)(v20 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          UCharFromUser = RtlReadUCharFromUser((volatile void *)v19);
          RtlWriteUCharToUser((_BYTE *)v19, UCharFromUser);
          v19 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v19 != v17 );
        v16 = Length_4;
      }
      else
      {
        v16 = 0;
      }
      goto LABEL_6;
    }
    v16 = 0;
    a10 = 0;
  }
  Length_4 = v16;
LABEL_6:
  if ( v13 != 3 && !Src )
    LODWORD(Size) = 0;
LABEL_19:
  Object = 0LL;
  SupportedFeatures = ObReferenceObjectByHandle(
                        Handle,
                        0,
                        (POBJECT_TYPE)IoFileObjectType,
                        PreviousMode,
                        &Object,
                        &HandleInformation);
  v93 = SupportedFeatures;
  v23 = (struct _FILE_OBJECT *)Object;
  if ( SupportedFeatures >= 0 )
  {
    v46 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v46 )
    {
      if ( (*v46 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      {
        ObfDereferenceObject(v23);
        SupportedFeatures = -1073739504;
        v93 = -1073739504;
      }
    }
  }
  if ( SupportedFeatures < 0 )
    return (unsigned int)SupportedFeatures;
  if ( v23->CompletionContext && (v101 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v23);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)v12 >> 14
    && (((unsigned __int16)v12 >> 14) & HandleInformation.GrantedAccess) != (unsigned __int16)v12 >> 14 )
  {
    ObfDereferenceObject(v23);
    return 3221225506LL;
  }
  if ( v12 == 606820 || v12 == 623208 )
  {
    LODWORD(P) = 0;
    if ( (v23->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v23->DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(v23);
    SupportedFeatures = FsRtlGetSupportedFeatures((__int64)AttachedDevice, &P);
    v93 = SupportedFeatures;
    if ( SupportedFeatures < 0 )
      goto LABEL_126;
    if ( v12 == 606820 )
    {
      if ( ((unsigned __int8)P & 1) != 0 )
      {
LABEL_126:
        v68 = SupportedFeatures < 0;
        goto LABEL_127;
      }
      SupportedFeatures = -1073700191;
    }
    else if ( ((unsigned __int8)P & 2) == 0 )
    {
      SupportedFeatures = -1073700190;
    }
    v93 = SupportedFeatures;
    goto LABEL_126;
  }
  if ( v12 != 590892 )
    goto LABEL_27;
  SupportedFeatures = IopSetFileObjectExtensionFlag((__int64)v23, 0x10u);
  v93 = SupportedFeatures;
  v68 = SupportedFeatures < 0;
LABEL_127:
  if ( v68 )
    goto LABEL_208;
LABEL_27:
  if ( a2 )
  {
    v97 = 0LL;
    SupportedFeatures = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v97, 0LL);
    v93 = SupportedFeatures;
    v96 = v97;
    if ( SupportedFeatures >= 0 )
    {
      KeResetEvent((PRKEVENT)v97);
      goto LABEL_30;
    }
LABEL_208:
    ObfDereferenceObject(v23);
    return (unsigned int)SupportedFeatures;
  }
LABEL_30:
  v24 = 0LL;
  P = 0LL;
  Length_2 = 0;
  v94 = 0;
  if ( Length && (v12 == 589988 && (unsigned int)Size >= 4 || v12 == 590860 && (unsigned int)Size >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v83 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v83, &SubjectContext);
    Length_2 = RtlIsSandboxedToken(&SubjectContext, Length);
    SeReleaseSubjectContext(&SubjectContext);
    if ( Length_2 )
    {
      v102 = 0;
      v84 = Src;
      if ( v12 == 590860 )
        v84 = Src + 8;
      v85 = RtlReadULongFromUser(v84);
      v102 = v85;
      if ( SupportedFeatures < 0 )
        goto LABEL_206;
      if ( v85 == -1610612733 )
      {
        v94 = 1;
        SupportedFeatures = IopValidateJunctionTarget(v12, Src, (unsigned int)Size, v16, &P, &Size);
        v93 = SupportedFeatures;
        v24 = P;
      }
      if ( SupportedFeatures < 0 )
      {
LABEL_206:
        if ( v96 )
          ObfDereferenceObject(v96);
        goto LABEL_208;
      }
    }
  }
  p_Flags = &v23->Flags;
  if ( (v23->Flags & 2) != 0 )
  {
    v47 = (v23->Flags & 4) != 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v49 = (AutoBoost *)KeAbPreAcquire((__int64)&v23->Lock, 0LL, 0LL, v21);
    v51 = 0;
    Length_1 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v23->Busy, 1) )
    {
      v82 = v47;
      v25 = Length;
      SupportedFeatures = IopWaitAndAcquireFileObjectLock(v23, Length, v82, v49, &Length_1);
      v51 = Length_1;
    }
    else
    {
      if ( v49 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v49, v50);
        else
          *((_BYTE *)v49 + 10) = 1;
      }
      PsReferenceSiloContext(v23);
      SupportedFeatures = 0;
      v25 = Length;
    }
    v93 = SupportedFeatures;
    if ( v51 )
    {
      if ( v96 )
        ObfDereferenceObject(v96);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      ObfDereferenceObject(v23);
      return (unsigned int)SupportedFeatures;
    }
    Length_1 = 1;
  }
  else
  {
    Length_1 = 0;
    if ( Length )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].ReadyTime )
      {
        v54 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v54 == 332 || v54 == 452 )
        {
          v101 |= 1uLL;
          v55 = (unsigned int)RtlReadULongFromUser((unsigned int *)v100);
          v100 = (void *)v55;
          v56 = RtlReadULongFromUser((unsigned int *)v55);
          RtlWriteULongToUser((_DWORD *)(unsigned int)v55, v56);
        }
      }
      v25 = Length;
    }
    else
    {
      v25 = 0;
    }
  }
  if ( (v23->Flags & 0x800) != 0 )
    RelatedDeviceObject = IoGetAttachedDevice(v23->DeviceObject);
  else
    RelatedDeviceObject = IoGetRelatedDeviceObject(v23);
  v28 = (__int64)RelatedDeviceObject;
  v97 = RelatedDeviceObject;
  v29 = a6;
  if ( !a11 )
    goto LABEL_51;
  AstLogIoctl(RelatedDeviceObject, a6);
  if ( Length_2 )
    goto LABEL_51;
  v30 = *(_QWORD *)(*(_QWORD *)(v28 + 8) + 80LL);
  if ( !v30 )
    goto LABEL_51;
  v31 = *(_QWORD *)(v30 + 80);
  if ( !v31 )
    goto LABEL_51;
  if ( v25 && Address )
  {
    if ( v95 == 1 )
    {
      ProbeForRead(Address, Length_4, 1u);
    }
    else if ( v95 == 2 && Length_4 )
    {
      v63 = (unsigned __int64)Address;
      v64 = &Address[Length_4];
      if ( v64 <= Address || (unsigned __int64)v64 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v65 = ((unsigned __int64)(v64 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        v66 = RtlReadUCharFromUser((volatile void *)v63);
        RtlWriteUCharToUser((_BYTE *)v63, v66);
        v63 = (v63 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v63 != v65 );
    }
    v29 = a6;
  }
  if ( v29 == 589856 )
    _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
  if ( (MmVerifierData & 0x10) != 0 && (v87 = *(struct _DRIVER_OBJECT **)(v28 + 8), MmIsDriverVerifying(v87)) )
    v32 = (void *)VfFastIoSnapState(v87);
  else
    v32 = 0LL;
  LOBYTE(v27) = 1;
  v33 = guard_dispatch_icall_no_overrides((__int64)v23, v27);
  if ( v32 )
    VfFastIoCheckState(v32, v31);
  if ( v33 )
  {
    v57 = 0LL;
    v97 = 0LL;
    HandleInformation = 0LL;
    LOBYTE(a6) = 0;
    if ( (v101 & 1) != 0 )
    {
      v58 = v100;
      RtlWriteULongToUser((_DWORD *)v100 + 1, SDWORD2(v104));
      RtlWriteULongToUser(v58, v104);
    }
    else if ( Length )
    {
      RtlCopyToUser(v100, &v104, 0x10uLL);
    }
    else
    {
      RtlCopyVolatileMemory(v100, &v104, 0x10uLL);
    }
    v61 = p_Flags;
    if ( v23->CompletionContext
      && ((*(_DWORD *)p_Flags & 0x2000000) == 0 || (v104 & 0xC0000000) == 0x80000000)
      && (v104 & 0xC0000000) != 0xC0000000 )
    {
      IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v23, &a6, &v97, &HandleInformation);
      v57 = v97;
    }
    if ( a2 )
    {
      if ( (*v61 & 0x8000000) == 0 || v57 && (v104 & 0xC0000000) == 0x80000000 )
      {
        v62 = v96;
        KeSetEvent((PRKEVENT)v96, 0, 0);
      }
      else
      {
        v62 = v96;
      }
      ObfDereferenceObject(v62);
    }
    if ( Length_1 )
      IopReleaseFileObjectLock((ULONG_PTR)v23, v59, v60);
    if ( v57 && a4 )
    {
      v80 = IoSetIoCompletionEx2(
              (__int64)v57,
              *(_QWORD *)&HandleInformation,
              a4,
              v104,
              *((__int64 *)&v104 + 1),
              1u,
              0LL,
              (int)&v104);
      v81 = v104;
      if ( v80 < 0 )
        v81 = -1073741670;
      if ( (v81 & 0xC0000000) == 0x80000000 )
        v81 = 259;
      LODWORD(v104) = v81;
    }
    if ( (_BYTE)a6 )
      IopDecrementCompletionContextUsageCount((ULONG_PTR)v23);
    ObfDereferenceObject(v23);
    return (unsigned int)v104;
  }
  else
  {
LABEL_51:
    IopResetEvent((__int64)v23, v27);
    Irp = IopAllocateIrpExReturn(v28, *(unsigned __int8 *)(v28 + 76), Length_1 ^ 1u);
    v35 = (IRP *)Irp;
    v107 = Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v23;
      *(_QWORD *)(Irp + 152) = Thread;
      *(_QWORD *)(Irp + 160) = 0LL;
      *(_BYTE *)(Irp + 64) = Length;
      *(_BYTE *)(Irp + 65) = 0;
      *(_BYTE *)(Irp + 68) = 0;
      *(_QWORD *)(Irp + 104) = 0LL;
      *(_QWORD *)(Irp + 80) = v96;
      *(_QWORD *)(Irp + 72) = v100;
      *(_QWORD *)(Irp + 88) = v101;
      *(_QWORD *)(Irp + 96) = a4;
      v36 = (struct _KTHREAD *)(*(_QWORD *)(Irp + 184) - 72LL);
      Thread = v36;
      v37 = a11;
      v36->Header.LockNV = (a11 != 0) + 13;
      v36->StackLimit = v23;
      v38 = Length_4;
      LODWORD(v36->Header.WaitListHead.Flink) = Length_4;
      v39 = Size;
      LODWORD(v36->Header.WaitListHead.Blink) = Size;
      LODWORD(v36->SListFaultAddress) = a6;
      v40 = (PMDL *)(Irp + 8);
      v100 = (void *)(Irp + 8);
      *(_QWORD *)(Irp + 8) = 0LL;
      v41 = (PVOID *)(Irp + 24);
      p_Flags = (void *)(Irp + 24);
      *(_QWORD *)(Irp + 24) = 0LL;
      v42 = v95;
      if ( (*((_DWORD *)v97 + 12) & 0x80000) != 0 )
      {
        if ( !Length_2 )
          v42 = 3;
        v95 = v42;
      }
      if ( !v42 )
      {
        v36->QuantumTarget = 0LL;
        if ( !v39 && !v38 )
        {
          *(_DWORD *)(Irp + 16) = 0;
          *(_QWORD *)(Irp + 112) = 0LL;
LABEL_135:
          if ( v39 < v38 )
            memset_0((char *)*v41 + v39, 0, v38 - v39);
          goto LABEL_137;
        }
        if ( P )
        {
          *v41 = P;
          goto LABEL_133;
        }
        v43 = 73LL;
        if ( !v37 )
          v43 = 65LL;
        Pool2 = (void *)ExAllocatePool2(v43);
        *v41 = Pool2;
        if ( Pool2 )
        {
          if ( SupportedFeatures >= 0 && (v45 = Src) != 0LL )
          {
            if ( MmIsKernelAddress((unsigned __int64)Src) )
              RtlCopyVolatileMemory(Pool2, v45, (unsigned int)Size);
            else
              RtlCopyFromUser(Pool2, v45, (unsigned int)Size);
            v38 = Length_4;
          }
          else
          {
            v38 = Length_4;
          }
          if ( SupportedFeatures < 0 )
            goto LABEL_82;
          v39 = Size;
LABEL_133:
          v35->Flags = 48;
          v35->UserBuffer = Address;
          if ( v38 )
            v35->Flags = 112;
          goto LABEL_135;
        }
        goto LABEL_187;
      }
      if ( v42 != 1 && v42 != 2 )
      {
        if ( v42 == 3 )
        {
          *(_DWORD *)(Irp + 16) = 0;
          *(_QWORD *)(Irp + 112) = Address;
          v36->QuantumTarget = (unsigned __int64)Src;
        }
        goto LABEL_137;
      }
      v101 = Irp + 16;
      *(_DWORD *)(Irp + 16) = 0;
      v36->QuantumTarget = 0LL;
      if ( v39 && Src )
      {
        v74 = 75LL;
        if ( !v37 )
          v74 = 67LL;
        v75 = (void *)ExAllocatePool2(v74);
        p_Flags = v75;
        *v41 = v75;
        if ( !v75 )
          goto LABEL_187;
        v76 = v93;
        if ( v93 < 0 )
        {
          v38 = Length_4;
        }
        else
        {
          if ( MmIsKernelAddress((unsigned __int64)Src) )
            RtlCopyVolatileMemory(p_Flags, Src, (unsigned int)Size);
          else
            RtlCopyFromUser(p_Flags, Src, (unsigned int)Size);
          v38 = Length_4;
        }
        if ( v76 >= 0 )
          v35->Flags = 48;
      }
      SupportedFeatures = v93;
      if ( v93 < 0 )
        goto LABEL_82;
      if ( !v38 )
      {
LABEL_175:
        if ( SupportedFeatures >= 0 )
        {
LABEL_137:
          v36->Header.Size |= HandleInformation.GrantedAccess & 1 | (unsigned __int8)(2
                                                                                    * (HandleInformation.GrantedAccess & 2));
          if ( !a11 )
            v35->Flags |= 0x800u;
          v69 = a6;
          if ( a6 == 589856 )
            _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
          if ( !Length_2 || v94 )
            return IopSynchronousServiceTail((PDEVICE_OBJECT)v97, v35, (ULONG_PTR)v23, Length, Length_1, 2);
          p_ThreadListEntry = &v35->AssociatedIrp.MasterIrp->ThreadListEntry;
          if ( v69 != 590860 )
            p_ThreadListEntry = &v35->AssociatedIrp.MasterIrp->Type;
          if ( *p_ThreadListEntry != -1610612733 )
            return IopSynchronousServiceTail((PDEVICE_OBJECT)v97, v35, (ULONG_PTR)v23, Length, Length_1, 2);
          IopExceptionCleanupEx((ULONG_PTR)v23, v35, v96, 0LL, (v23->Flags & 2) != 0);
          return 3221225485LL;
        }
LABEL_82:
        IopExceptionCleanupEx((ULONG_PTR)v23, v35, v96, 0LL, (v23->Flags & 2) != 0);
        return (unsigned int)SupportedFeatures;
      }
      Mdl = IoAllocateMdl(Address, v38, 0, 1u, v35);
      *v40 = Mdl;
      if ( Mdl )
      {
        Lock = (unsigned int)v36->Header.Lock;
        v79 = 0LL;
        if ( v95 != 1 )
          v79 = 2LL;
        SupportedFeatures = MmProbeAndLockPagesEx((__int64)Mdl, v79 | Length & 1);
        if ( SupportedFeatures >= 0 )
        {
          if ( (MmTrackLockedPages & 1) != 0 )
            MmUpdateMdlTracker(
              (unsigned __int64)Mdl,
              *(struct _LIST_ENTRY **)(*((_QWORD *)v97 + 1) + 8 * Lock + 112),
              (struct _LIST_ENTRY *)v97);
          SupportedFeatures = 0;
        }
        goto LABEL_175;
      }
LABEL_187:
      SupportedFeatures = -1073741670;
      goto LABEL_82;
    }
    IopAllocateIrpCleanup((ULONG_PTR)v23, v96);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
}
