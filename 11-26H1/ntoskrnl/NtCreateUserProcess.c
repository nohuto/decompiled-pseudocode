/*
 * XREFs of NtCreateUserProcess @ 0x140B7D6F0
 * Callers:
 *     DifNtCreateUserProcessWrapper @ 0x1406789C0 (DifNtCreateUserProcessWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14048E9D0 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140618694 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x14072B9E0 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspDeleteCpuAndMemoryPartitionContext @ 0x14077EEEC (PspDeleteCpuAndMemoryPartitionContext.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x14081AACC (SeDuplicateTokenWithPredictedClaims.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserProcessEcp @ 0x140933EF8 (PspCreateUserProcessEcp.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140934030 (FsRtlFreeExtraCreateParameterList.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140947588 (PsTestProtectedProcessIncompatibility.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     IoCreateFileEx @ 0x140984880 (IoCreateFileEx.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     SeQueryServerSiloToken @ 0x1409F6C30 (SeQueryServerSiloToken.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 *     SeQuerySigningPolicy @ 0x140A3B45C (SeQuerySigningPolicy.c)
 *     PsRestoreImpersonation @ 0x140A51550 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x140A716E0 (PsDisableImpersonation.c)
 *     PspCaptureProcessParameters @ 0x140A723C0 (PspCaptureProcessParameters.c)
 *     PspCreateUserContext @ 0x140A79090 (PspCreateUserContext.c)
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140A79FBC (PspDeleteCreateProcessContext.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x140A7BDE4 (PspCreateObjectHandle.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 *     PspMapThreadCreationFlags @ 0x140AA4624 (PspMapThreadCreationFlags.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140AA9D3C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetCpuAndMemoryPartitionContext @ 0x140AAC4C4 (PspGetCpuAndMemoryPartitionContext.c)
 *     PspReferenceTokenForNewProcess @ 0x140ADA368 (PspReferenceTokenForNewProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140ADA3F4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspUpdateCreateInfo @ 0x140ADDFE4 (PspUpdateCreateInfo.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE0144 (PspEstimateNewProcessServerSilo.c)
 *     PspGetProcessParameterOverrides @ 0x140AE5F9C (PspGetProcessParameterOverrides.c)
 *     PspIsSiloInSilo @ 0x140AF43F4 (PspIsSiloInSilo.c)
 *     PspCaptureCreateInfo @ 0x140B04308 (PspCaptureCreateInfo.c)
 *     PspValidateCreateProcessProtection @ 0x140B1DB84 (PspValidateCreateProcessProtection.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140B2A218 (SeDuplicateTokenAndAddOriginClaim.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 */

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  unsigned __int64 v12; // rax
  char v13; // r15
  ULONG v14; // r13d
  NTSTATUS result; // eax
  __int64 ULong64FromUser; // rax
  __int64 v17; // rax
  KPROCESSOR_MODE v18; // r14
  int ULongFromUser; // edx
  __int64 v20; // rdx
  NTSTATUS Info; // esi
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r8
  unsigned __int8 v25; // bl
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  char P1Home; // bl
  int v31; // r13d
  int v32; // r9d
  int v33; // eax
  int P1Home_low; // ecx
  int v35; // r12d
  int v36; // eax
  int v37; // ecx
  BOOLEAN v38; // bl
  char SegGs; // r13
  unsigned __int8 v40; // bl
  __int64 v41; // rcx
  char P2Home; // bl
  int v43; // r9d
  int v44; // r9d
  __int64 *v45; // r12
  ULONG v46; // esi
  int v47; // ecx
  _CONTEXT *p_Context; // r13
  unsigned __int64 v49; // rax
  void *v50; // rsp
  __int64 High_high; // rax
  __int64 v52; // r8
  struct _KLOCK_ENTRIES *v53; // r9
  __int64 High; // rax
  __int64 v55; // r8
  struct _KLOCK_ENTRIES *v56; // r9
  __int64 v57; // r13
  unsigned int Dr0_high; // r8d
  unsigned int Dr0; // esi
  __int64 v60; // rax
  int inserted; // ebx
  __int64 v62; // rdx
  __int64 v63; // r8
  struct _KLOCK_ENTRIES *v64; // r9
  __int64 ProcessServerSilo; // rax
  KPROCESSOR_MODE v66; // dl
  char ReturnLength; // [rsp+28h] [rbp-58h]
  _CONTEXT Context; // [rsp+80h] [rbp+0h] BYREF
  int v69; // [rsp+5D0h] [rbp+550h]
  char v70; // [rsp+5D4h] [rbp+554h]
  HANDLE Handle; // [rsp+5D8h] [rbp+558h]
  __int64 v72[48]; // [rsp+5E0h] [rbp+560h] BYREF
  int v73; // [rsp+760h] [rbp+6E0h]
  HANDLE v74; // [rsp+768h] [rbp+6E8h]
  __int64 v75[2]; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v76; // [rsp+780h] [rbp+700h]
  char v77; // [rsp+788h] [rbp+708h]

  LODWORD(Context.Dr0) = ThreadDesiredAccess;
  HIDWORD(Context.Dr0) = ProcessDesiredAccess;
  Context.Rdx = (unsigned __int64)ThreadHandle;
  Context.Rbx = (unsigned __int64)ProcessHandle;
  Context.Dr6 = (unsigned __int64)ProcessObjectAttributes;
  Context.R13 = (unsigned __int64)ThreadObjectAttributes;
  Context.Rsp = (unsigned __int64)ProcessParameters;
  WORD2(Context.P4Home) = 0;
  HIDWORD(Context.P2Home) = 0;
  Context.P3Home = 0LL;
  Context.Rax = 0LL;
  memset(&Context.Rbp, 0, 44);
  *(_QWORD *)&Context.ContextFlags = 0LL;
  memset_0(&Context.VectorRegister[13], 0, 0x190uLL);
  BYTE4(Context.P1Home) = 0;
  *(_WORD *)((char *)&Context.P2Home + 1) = 0;
  LOBYTE(Context.P2Home) = 0;
  *(_OWORD *)v75 = 0LL;
  v76 = 0LL;
  v77 = 0;
  memset_0(v72, 0, 0x190uLL);
  LODWORD(Context.P5Home) = 0;
  *(_QWORD *)&Context.SegGs = 0LL;
  memset(&Context.R15, 0, 112);
  Context.Dr2 = (unsigned __int64)KeGetCurrentThread();
  v12 = *(_QWORD *)(Context.Dr2 + 184);
  *(_QWORD *)&Context.SegCs = v12;
  Context.R14 = v12;
  v13 = *(_BYTE *)(Context.Dr2 + 562);
  LOBYTE(Context.P4Home) = v13;
  Context.Dr3 = 0LL;
  Context.Rcx = 0LL;
  Context.P6Home = 0LL;
  LOBYTE(v12) = 0;
  LODWORD(Context.P1Home) = v12;
  HIWORD(Context.P1Home) = 0;
  memset_0(&Context.Legacy[4], 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFF317838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v70 = v13;
  if ( v13 )
  {
    ULong64FromUser = RtlReadULong64FromUser(ProcessHandle);
    RtlWriteULong64ToUser(ProcessHandle, ULong64FromUser);
    v17 = RtlReadULong64FromUser((volatile void *)Context.Rdx);
    RtlWriteULong64ToUser((_QWORD *)Context.Rdx, v17);
  }
  if ( ProcessObjectAttributes )
  {
    v18 = 1;
    if ( v13 )
    {
      Context.R11 = 1LL;
      ProbeForRead(ProcessObjectAttributes, 1uLL, 4u);
      ULongFromUser = RtlReadULongFromUser(&ProcessObjectAttributes->Attributes);
    }
    else
    {
      ULongFromUser = ProcessObjectAttributes->Attributes;
    }
    LODWORD(Context.R12) = ULongFromUser;
    v69 = ULongFromUser & (v13 != 0 ? 7666 : 73714);
  }
  else
  {
    v18 = 1;
  }
  memset_0(&Context.Xmm1, 0, 0x218uLL);
  if ( AttributeList )
  {
    result = PspBuildCreateProcessContext((char *)AttributeList, v13, 0, (__int64)&Context.FltSave.XmmRegisters[1]);
    if ( result < 0 )
      return result;
    BYTE6(Context.P1Home) = Context.VectorRegister[1].High != 0;
  }
  if ( (ProcessFlags & 0x40) != 0 && (Context.FltSave.XmmRegisters[1].High & 0x20000) != 0 && !BYTE1(Context.Xmm1.Low) )
  {
    v14 = ProcessFlags & 0xFFFFFFBF;
    ProcessFlags &= ~0x40u;
    Context.FltSave.XmmRegisters[1].High &= ~0x20000uLL;
  }
  if ( (v14 & 4) == 0 && (Context.Xmm1.High & 0x800) != 0
    || (Context.FltSave.XmmRegisters[1].High & 0x20000) != 0 && (v14 & 0x40) == 0 )
  {
    goto LABEL_184;
  }
  Info = PspCaptureCreateInfo(v13, CreateInfo, (__int64)&Context.FltSave.XmmRegisters[1]);
  if ( Info < 0 )
    goto LABEL_185;
  if ( (Context.Xmm1.High & 1) != 0 )
  {
    Info = ObpReferenceObjectByHandleWithTag(
             Context.FltSave.XmmRegisters[9].Low,
             128,
             (__int64)PsProcessType,
             v13,
             0x72437350u,
             &Context.ContextFlags,
             0LL,
             0LL);
    if ( Info >= 0 )
    {
      v22 = *(_QWORD *)&Context.ContextFlags;
      Context.FltSave.XmmRegisters[9].High = *(_QWORD *)&Context.ContextFlags;
      v23 = *(_QWORD *)&Context.SegCs;
      goto LABEL_29;
    }
LABEL_185:
    P1Home = Context.P1Home;
    goto LABEL_186;
  }
  v23 = *(_QWORD *)&Context.SegCs;
  v22 = *(_QWORD *)&Context.SegCs;
LABEL_29:
  *(_QWORD *)&Context.ContextFlags = v22;
  Context.VectorRegister[5].High = PspEstimateNewProcessServerSilo(
                                     v22,
                                     Context.VectorRegister[2].Low,
                                     HIDWORD(Context.VectorRegister[2].High));
  if ( (BYTE1(Context.Xmm2.Low) & 0xC) == 4 && (v22 != v23 || (*(_DWORD *)(v23 + 1532) & 0x1000) != 0) )
    goto LABEL_184;
  LOBYTE(v24) = v13;
  Info = PspReferenceTokenForNewProcess(
           v22,
           (void *)Context.FltSave.XmmRegisters[10].High,
           v24,
           (struct _KLOCK_ENTRIES *)&Context.Xmm11);
  if ( Info < 0 )
  {
    Context.FltSave.XmmRegisters[11].Low = 0LL;
    goto LABEL_185;
  }
  if ( Context.FltSave.XmmRegisters[10].High
    && (int)SeQueryServerSiloToken(Context.FltSave.XmmRegisters[11].Low, (__int64)&Context.SegGs) >= 0
    && !PspIsSiloInSilo(*(__int64 *)&Context.SegGs, Context.VectorRegister[5].High) )
  {
    goto LABEL_184;
  }
  if ( (Context.Xmm1.High & 0x20) == 0 )
  {
    if ( v22 == *(_QWORD *)&Context.SegCs
      && v13
      && !Context.Rsp
      && (Context.Xmm2.Low & 0xC00) == 0
      && SLOBYTE(Context.Xmm1.High) >= 0
      && (Context.FltSave.XmmRegisters[1].High & 0x20000) == 0
      && (Context.Xmm2.Low & 0x10) == 0 )
    {
      LOBYTE(Context.Xmm2.Low) &= ~4u;
      v40 = *(_BYTE *)(v22 + 1530);
      LOBYTE(Context.P2Home) = *(_BYTE *)(*(_QWORD *)&Context.ContextFlags + 1529LL);
      SegGs = *(_BYTE *)(*(_QWORD *)&Context.ContextFlags + 1528LL);
      if ( (ProcessFlags & 0x40) != 0 && (v40 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_185;
      }
      Info = PspValidateCreateProcessProtection(
               *(__int64 *)&Context.SegCs,
               (__int64)&Context.FltSave.XmmRegisters[1],
               v13,
               ProcessFlags,
               (PS_PROTECTION)v40);
      if ( Info < 0 )
        goto LABEL_185;
      v45 = 0LL;
      LOBYTE(v20) = Context.P2Home;
      goto LABEL_115;
    }
LABEL_184:
    Info = -1073741811;
    goto LABEL_185;
  }
  v25 = (Context.FltSave.XmmRegisters[1].High & 0x20000) != 0 ? BYTE1(Context.Xmm1.Low) : 0;
  BYTE5(Context.P1Home) = v25;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    *(_OWORD *)&Context.Legacy[0].High = *((_OWORD *)&Context.1 + 26);
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &Context.Legacy[0].High, 0x10u, 0LL, 0, 0LL);
  }
  if ( (v14 & 0x400000) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v13) )
    goto LABEL_42;
  Info = SeQuerySigningPolicy(
           (void *)Context.FltSave.XmmRegisters[11].Low,
           (const UNICODE_STRING *)&Context.1 + 26,
           (v14 >> 6) & 1,
           v25,
           (char *)&Context.P1Home + 4,
           (char *)&Context.P2Home + 1,
           (unsigned __int8 *)&Context.P1Home + 5);
  if ( Info < 0 )
    goto LABEL_185;
  LOBYTE(v26) = BYTE4(Context.P1Home);
  if ( (v14 & 0x20000) != 0 )
  {
    LOBYTE(v20) = 8;
    v27 = SeCompareSigningLevels(v26, v20);
    LODWORD(v26) = BYTE4(Context.P1Home);
    if ( !v27 )
      LODWORD(v26) = 8;
  }
  *(_DWORD *)&Context.SegGs = v26;
  LODWORD(Context.Rbp) = 48;
  Context.Rsi = 0LL;
  v28 = 1600;
  if ( v13 != 1 )
    v28 = 576;
  LODWORD(Context.R8) = v28;
  Context.Rdi = (unsigned __int64)(&Context.1 + 1);
  *(_OWORD *)&Context.R9 = 0LL;
  Info = 0;
  if ( ExpPlatformBinaryLock.MutantListHead.Flink )
    Info = guard_dispatch_icall_no_overrides(Context.FltSave.XmmRegisters[11].Low, v20);
  if ( Info < 0 )
    goto LABEL_185;
  Info = PspGetCpuAndMemoryPartitionContext(
           *(__int64 *)&Context.ContextFlags,
           v14,
           Context.VectorRegister[2].Low,
           HIDWORD(Context.VectorRegister[2].High),
           &Context.Dr3,
           &Context.Rcx);
  if ( Info < 0 )
    goto LABEL_185;
  Info = PspCreateUserProcessEcp((__int64)&Context.256, Context.FltSave.XmmRegisters[11].Low);
  if ( Info < 0 )
    goto LABEL_185;
  Info = IoCreateFileEx(
           (PHANDLE)&Context.FltSave.XmmRegisters[12],
           HIDWORD(Context.Xmm11.High) | 0x100020,
           (POBJECT_ATTRIBUTES)&Context.Rbp,
           (PIO_STATUS_BLOCK)&Context.Legacy[1].High,
           0LL,
           0x80u,
           5u,
           1u,
           0x60u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0,
           (PIO_DRIVER_CREATE_CONTEXT)&Context.256);
  if ( Info < 0 && HIDWORD(Context.Xmm11.High) )
    Info = IoCreateFileEx(
             (PHANDLE)&Context.FltSave.XmmRegisters[12],
             0x100020u,
             (POBJECT_ATTRIBUTES)&Context.Rbp,
             (PIO_STATUS_BLOCK)&Context.Legacy[1].High,
             0LL,
             0x80u,
             5u,
             1u,
             0x60u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0,
             (PIO_DRIVER_CREATE_CONTEXT)&Context.256);
  if ( Info < 0 )
  {
    Context.FltSave.XmmRegisters[12].Low = 0LL;
    v29 = 1;
LABEL_59:
    PspUpdateCreateInfo(v29, (__int64)&Context.FltSave.XmmRegisters[1], 0LL);
    goto LABEL_185;
  }
  Context.Dr1 = 0LL;
  Info = ObReferenceObjectByHandle(
           (HANDLE)Context.FltSave.XmmRegisters[12].Low,
           0x100020u,
           (POBJECT_TYPE)IoFileObjectType,
           0,
           (PVOID *)&Context.Dr1,
           0LL);
  Context.FltSave.XmmRegisters[12].High = Context.Dr1;
  if ( Info >= 0 )
  {
    Context.Rdi = 0LL;
    v31 = 4 * BYTE6(Context.P1Home) + 1;
    if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() )
    {
      v36 = SeDuplicateTokenWithPredictedClaims(
              (void *)Context.FltSave.XmmRegisters[11].Low,
              Context.FltSave.XmmRegisters[12].High,
              Context.VectorRegister[3].High,
              Context.VectorRegister[4].Low,
              HIDWORD(Context.VectorRegister[3].High),
              &Context.P6Home);
      Info = v36;
      if ( v36 < 0 )
        goto LABEL_185;
      if ( Context.P6Home )
      {
        LOBYTE(v37) = 1;
        LODWORD(Context.P1Home) = v37;
        HIBYTE(Context.P1Home) = 1;
      }
      else
      {
        LOBYTE(v36) = 0;
        LODWORD(Context.P1Home) = v36;
        HIBYTE(Context.P1Home) = 0;
        Context.P6Home = Context.FltSave.XmmRegisters[11].Low;
      }
      v35 = v31;
      if ( (Context.VectorRegister[3].High & 8) != 0 )
      {
        v38 = PsDisableImpersonation(KeGetCurrentThread(), (PSE_IMPERSONATION_STATE)&Context.R15);
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v13) )
        {
          if ( v38 )
            PsRestoreImpersonation(KeGetCurrentThread(), (PSE_IMPERSONATION_STATE)&Context.R15);
LABEL_42:
          Info = -1073741727;
          goto LABEL_185;
        }
        if ( v38 )
          PsRestoreImpersonation(KeGetCurrentThread(), (PSE_IMPERSONATION_STATE)&Context.R15);
        v35 = v31 | 8;
      }
    }
    else
    {
      if ( Context.VectorRegister[4].Low )
      {
        v33 = SeDuplicateTokenAndAddOriginClaim(
                Context.FltSave.XmmRegisters[11].Low,
                Context.VectorRegister[4].Low,
                HIDWORD(Context.VectorRegister[3].High),
                (PVOID *)&Context.P6Home);
        P1Home_low = LOBYTE(Context.P1Home);
        if ( v33 >= 0 )
          P1Home_low = 1;
        LODWORD(Context.P1Home) = P1Home_low;
        HIBYTE(Context.P1Home) = P1Home_low;
      }
      else
      {
        LOBYTE(P1Home_low) = Context.P1Home;
      }
      v35 = v31;
      if ( !(_BYTE)P1Home_low )
        Context.P6Home = Context.FltSave.XmmRegisters[11].Low;
    }
    SegGs = Context.SegGs;
    LOBYTE(v32) = Context.SegGs;
    Info = MmCreateSpecialImageSection(
             (unsigned int)&Context.Xmm13,
             (unsigned int)&Context.Rbp,
             Context.P6Home,
             v32,
             Context.FltSave.XmmRegisters[12].Low,
             v35);
    if ( Info < 0 )
    {
LABEL_102:
      Context.FltSave.XmmRegisters[13].Low = 0LL;
      v29 = 2;
      goto LABEL_59;
    }
    while ( 1 )
    {
      Context.Dr1 = 0LL;
      Info = ObReferenceObjectByHandle(
               (HANDLE)Context.FltSave.XmmRegisters[13].Low,
               8u,
               MmSectionObjectType,
               0,
               (PVOID *)&Context.Dr1,
               0LL);
      Context.FltSave.XmmRegisters[14].Low = Context.Dr1;
      if ( Info < 0 )
      {
        Context.FltSave.XmmRegisters[14].Low = 0LL;
        goto LABEL_185;
      }
      v40 = BYTE5(Context.P1Home);
      Info = PspGetProcessProtectionRequirementsFromImage(Context.Dr1);
      if ( Info < 0 )
        goto LABEL_185;
      if ( BYTE2(Context.P2Home) == v40 )
        break;
      Info = SeQuerySigningPolicy(
               (void *)Context.FltSave.XmmRegisters[11].Low,
               (const UNICODE_STRING *)&Context.1 + 26,
               1u,
               BYTE2(Context.P2Home),
               (char *)&Context.P2Home,
               (char *)&Context.P2Home + 1,
               (unsigned __int8 *)&Context.P1Home + 5);
      if ( Info < 0 )
        goto LABEL_185;
      P2Home = Context.P2Home;
      if ( LOBYTE(Context.P2Home) == SegGs )
      {
        v40 = BYTE5(Context.P1Home);
        break;
      }
      if ( (SegGs & 0x30) != 0 && (Context.P2Home & 0x30) != (SegGs & 0x30) )
        goto LABEL_184;
      LOBYTE(v20) = SegGs;
      LOBYTE(v41) = Context.P2Home;
      if ( !(unsigned int)SeCompareSigningLevels(v41, v20) )
        goto LABEL_184;
      ObCloseHandle((HANDLE)Context.FltSave.XmmRegisters[13].Low, 0);
      ObfDereferenceObject((PVOID)Context.FltSave.XmmRegisters[14].Low);
      Context.FltSave.XmmRegisters[13].Low = 0LL;
      Context.FltSave.XmmRegisters[14].Low = 0LL;
      SegGs = P2Home;
      LOBYTE(v43) = P2Home;
      Info = MmCreateSpecialImageSection(
               (unsigned int)&Context.Xmm13,
               (unsigned int)&Context.Rbp,
               Context.P6Home,
               v43,
               Context.FltSave.XmmRegisters[12].Low,
               v35);
      if ( Info < 0 )
        goto LABEL_102;
    }
    Info = PspValidateCreateProcessProtection(
             *(__int64 *)&Context.SegCs,
             (__int64)&Context.FltSave.XmmRegisters[1],
             v13,
             ProcessFlags,
             (PS_PROTECTION)v40);
    if ( Info < 0 )
      goto LABEL_185;
    if ( (ProcessFlags & 0x40000) != 0
      || (v40 & 7) != 1
      && PspCheckForInvalidAccessByProtection(v13, *(_BYTE *)(*(_QWORD *)&Context.SegCs + 1530LL), v40) )
    {
      LOBYTE(Context.Xmm2.Low) |= 8u;
    }
    PspGetProcessParameterOverrides((__int64)&Context.FltSave.XmmRegisters[1], Context.Dr3);
    Info = PspCaptureProcessParameters(v13, Context.Rsp, (__int64)&Context.FltSave.XmmRegisters[1]);
    if ( Info < 0 )
    {
      LOBYTE(Context.Xmm2.Low) &= ~4u;
      goto LABEL_185;
    }
    v45 = v75;
    LOBYTE(v20) = BYTE1(Context.P2Home);
LABEL_115:
    ReturnLength = v20;
    LOBYTE(v44) = v40;
    LOBYTE(v20) = v13;
    Info = PspAllocateProcess(
             Context.ContextFlags,
             v20,
             Context.Dr6,
             v44,
             SegGs,
             ReturnLength,
             Context.FltSave.XmmRegisters[14].Low,
             Context.FltSave.XmmRegisters[11].Low,
             ProcessFlags,
             0,
             (__int64)&Context.FltSave.XmmRegisters[1],
             Context.FltSave.XmmRegisters[10].High != 0,
             Context.Dr3,
             Context.Rcx,
             (__int64)&Context.P4Home + 4,
             (__int64)&Context.P3Home);
    if ( Info < 0 )
      goto LABEL_185;
    v46 = Context.FltSave.XmmRegisters[14].Low != 0 ? 1048587 : 1048603;
    v47 = *(_DWORD *)(Context.P3Home + 1876) & 0x4000;
    if ( v47 )
      v46 |= 0x100040u;
    Context.Dr6 = v47 != 0 ? 0x800 : 0;
    RtlGetExtendedContextLength2(v46, (PULONG)&Context.P5Home, Context.Dr6);
    p_Context = 0LL;
    if ( BYTE6(Context.P1Home) )
    {
      v45 = 0LL;
    }
    else
    {
      v49 = LODWORD(Context.P5Home) + 15LL;
      if ( v49 <= LODWORD(Context.P5Home) )
        v49 = 0xFFFFFFFFFFFFFF0LL;
      v50 = alloca(v49 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Context = &Context;
      memset_0(&Context, 0, LODWORD(Context.P5Home));
      RtlInitializeExtendedContext2(&Context, v46, (PCONTEXT_EX *)&Context.Dr6, Context.Dr6);
      if ( Context.FltSave.XmmRegisters[14].Low )
      {
        if ( *(_QWORD *)(Context.P3Home + 784) )
          High_high = HIDWORD(Context.Xmm15.High);
        else
          High_high = *(_QWORD *)(Context.P3Home + 736);
        PspCreateUserContext(
          (__int64)&Context,
          1,
          stru_140FC11F0.TracingPrivate[0],
          Context.FltSave.XmmRegisters[4].High,
          High_high);
      }
      else
      {
        Info = PspGetContextThreadInternal(Context.Dr2, (__int64)&Context, 0, 1, 1);
        if ( Info < 0 )
        {
          PspUnlockProcessExclusive(Context.P3Home, Context.Dr2);
          PspRundownSingleProcess((PRKPROCESS)Context.P3Home, 0, v52, v53);
          goto LABEL_185;
        }
        Context.Rax = 297LL;
      }
      Context.FltSave.FloatRegisters[2].High = (__int64)&Context.FltSave.FloatRegisters[4];
    }
    ObfReferenceObjectWithTag((PVOID)Context.P3Home, 0x72437350u);
    if ( v45 )
    {
      *(_BYTE *)v45 = 0;
      High = Context.FltSave.XmmRegisters[5].High;
      if ( Context.FltSave.XmmRegisters[5].High < 0x40000uLL )
        High = 0x40000LL;
      v45[3] = High;
      v45[2] = Context.FltSave.XmmRegisters[6].Low;
      v45[1] = LODWORD(Context.Xmm5.Low);
    }
    LODWORD(Context.P5Home) = 0;
    PspMapThreadCreationFlags(ThreadFlags, (int *)&Context.P2Home + 1);
    if ( BYTE4(Context.P4Home) )
    {
      LODWORD(Context.P5Home) = 2;
      HIDWORD(Context.P2Home) |= 0x10u;
    }
    if ( BYTE5(Context.P4Home) )
      ProcessFlags |= 0x400u;
    if ( BYTE6(Context.P1Home) )
      HIDWORD(Context.P2Home) |= 0x400u;
    HIDWORD(Context.P2Home) |= 0x60u;
    Info = PspAllocateThread(
             Context.P3Home,
             (unsigned int *)Context.R13,
             v13,
             (__int64)&Context.FltSave.XmmRegisters[1],
             (__int64)p_Context,
             (void **)&Context.FltSave.FloatRegisters[2].High,
             0LL,
             0LL,
             (int *)&Context.P2Home + 1,
             &Context.Rax,
             v45,
             (__int64)v72);
    if ( Info < 0 )
    {
      PspUnlockProcessExclusive(Context.P3Home, Context.Dr2);
      PspRundownSingleProcess((PRKPROCESS)Context.P3Home, 0, v55, v56);
      P1Home = Context.P1Home;
LABEL_165:
      ObfDereferenceObjectWithTag((PVOID)Context.P3Home, 0x72437350u);
LABEL_186:
      if ( Context.FltSave.XmmRegisters[12].High && *(_QWORD *)&SepRmCapTableLock.Spare36 )
        guard_dispatch_icall_no_overrides(Context.FltSave.XmmRegisters[12].High, v20);
      goto LABEL_189;
    }
    v57 = *(_QWORD *)&Context.SegCs;
    if ( PsTestProtectedProcessIncompatibility(v13, *(__int64 *)&Context.SegCs, Context.P3Home) )
    {
      Feature_ID51912085__private_IsEnabledPreCheck();
      Dr0_high = HIDWORD(Context.Dr0);
      if ( (Context.Dr0 & 0x200000000000000LL) != 0 )
      {
        Dr0_high = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v40 >> 4) + 4] & 0x1FFFFF | HIDWORD(Context.Dr0) & 0xFDFFFFFF;
        if ( !Context.FltSave.XmmRegisters[9].High || v57 == Context.FltSave.XmmRegisters[9].High )
          Dr0_high |= 1u;
      }
      Dr0 = Context.Dr0;
      if ( (Context.Dr0 & 0x2000000) != 0 )
      {
        Dr0 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v40 >> 4) + 8] & 0x1FFFFF | Context.Dr0 & 0xFDFFFFFF;
        if ( !Context.FltSave.XmmRegisters[9].High || v57 == Context.FltSave.XmmRegisters[9].High )
          Dr0 |= 1u;
      }
    }
    else
    {
      Dr0 = Context.Dr0;
      Dr0_high = HIDWORD(Context.Dr0);
    }
    if ( Context.FltSave.XmmRegisters[14].High )
      v60 = Context.FltSave.XmmRegisters[14].High + 112;
    else
      v60 = 0LL;
    inserted = PspInsertProcess(
                 (char *)Context.P3Home,
                 *(struct _KPROCESS **)&Context.ContextFlags,
                 Dr0_high,
                 ProcessFlags,
                 (HANDLE)Context.FltSave.XmmRegisters[10].Low,
                 Context.P5Home,
                 v60,
                 (struct _ACCESS_STATE *)&Context.VectorRegister[13]);
    Info = PspInsertThread(
             Context.Rax,
             Context.P3Home,
             (__int64)&Context.FltSave.FloatRegisters[4],
             (_DWORD *)&Context.P2Home + 1,
             Dr0,
             v45,
             (__int64)&Context.FltSave.XmmRegisters[1],
             0LL,
             (__int64)v72,
             (_QWORD *)Context.Rdx,
             (void *)Context.FltSave.XmmRegisters[2].High);
    KiLeaveCriticalRegionUnsafe(Context.Dr2, v62);
    if ( inserted < 0 )
    {
      PspRundownSingleProcess((PRKPROCESS)Context.P3Home, 0, v63, v64);
      Info = inserted;
      P1Home = Context.P1Home;
LABEL_164:
      ObfDereferenceObject((PVOID)Context.Rax);
      goto LABEL_165;
    }
    if ( Info >= 0 )
    {
      ProcessServerSilo = PsGetProcessServerSilo(Context.P3Home);
      if ( ProcessServerSilo == Context.VectorRegister[5].High )
      {
        Info = PspCreateObjectHandle(
                 (void *)Context.P3Home,
                 (__int64)&Context.VectorRegister[13],
                 (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          P1Home = Context.P1Home;
        }
        else
        {
          if ( Context.FltSave.XmmRegisters[3].High )
          {
            if ( v13 )
              RtlCopyToUser((void *)Context.FltSave.XmmRegisters[3].High, &Context.Xmm4.High, 0x40uLL);
            else
              RtlCopyVolatileMemory((void *)Context.FltSave.XmmRegisters[3].High, &Context.Xmm4.High, 0x40uLL);
          }
          if ( v13 )
            RtlWriteULong64ToUser((_QWORD *)Context.Rbx, (__int64)Handle);
          else
            *(_QWORD *)Context.Rbx = Handle;
          P1Home = Context.P1Home;
          Info = PspUpdateCreateInfo(6, (__int64)&Context.FltSave.XmmRegisters[1], Context.P3Home);
          if ( Info >= 0 )
            goto LABEL_162;
          if ( (v69 & 0x200) != 0 || (v66 = 1, (*(_DWORD *)(v57 + 1532) & 0x1000) != 0) )
            v66 = 0;
          ObCloseHandle(Handle, v66);
        }
        if ( (v73 & 0x200) != 0 || (*(_DWORD *)(v57 + 1532) & 0x1000) != 0 )
          v18 = 0;
        ObCloseHandle(v74, v18);
LABEL_162:
        SeDeleteAccessState((__int64)&Context.VectorRegister[13]);
        if ( Info < 0 )
          PsTerminateProcess((struct _KPROCESS *)Context.P3Home);
        goto LABEL_164;
      }
      Info = -1073741267;
    }
    P1Home = Context.P1Home;
    goto LABEL_162;
  }
  Context.FltSave.XmmRegisters[12].High = 0LL;
  P1Home = Context.P1Home;
LABEL_189:
  PspDeleteCpuAndMemoryPartitionContext((void *)Context.Dr3, (void *)Context.Rcx);
  PspDeleteCreateProcessContext((__int64)&Context.FltSave.XmmRegisters[1]);
  if ( Context.Header[0].High )
    FsRtlFreeExtraCreateParameterList((PECP_LIST)Context.Header[0].High);
  if ( P1Home )
    ObfDereferenceObject((PVOID)Context.P6Home);
  return Info;
}
