/*
 * XREFs of NtCreateUserProcess @ 0x140B77FE0
 * Callers:
 *     DifNtCreateUserProcessWrapper @ 0x140674DE0 (DifNtCreateUserProcessWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x140494E80 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140615670 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x140726E10 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspDeleteCpuAndMemoryPartitionContext @ 0x14077C3F8 (PspDeleteCpuAndMemoryPartitionContext.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x1408149DC (SeDuplicateTokenWithPredictedClaims.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserProcessEcp @ 0x140903F68 (PspCreateUserProcessEcp.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1409040A0 (FsRtlFreeExtraCreateParameterList.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140985588 (PsTestProtectedProcessIncompatibility.c)
 *     IoCreateFileEx @ 0x1409B37C0 (IoCreateFileEx.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x1409FF750 (PspCreateUserContext.c)
 *     PspDeleteCreateProcessContext @ 0x140A00524 (PspDeleteCreateProcessContext.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x140A0406C (PspCreateObjectHandle.c)
 *     SeQuerySigningPolicy @ 0x140A283BC (SeQuerySigningPolicy.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140A2CFB8 (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeQueryServerSiloToken @ 0x140A3B0D0 (SeQueryServerSiloToken.c)
 *     PsRestoreImpersonation @ 0x140A48260 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x140A64710 (PsDisableImpersonation.c)
 *     PspCaptureProcessParameters @ 0x140A653F0 (PspCaptureProcessParameters.c)
 *     SeCompareSigningLevels @ 0x140A88910 (SeCompareSigningLevels.c)
 *     PspMapThreadCreationFlags @ 0x140AA2B54 (PspMapThreadCreationFlags.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140AAC78C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetCpuAndMemoryPartitionContext @ 0x140AAE864 (PspGetCpuAndMemoryPartitionContext.c)
 *     PspReferenceTokenForNewProcess @ 0x140ADCE18 (PspReferenceTokenForNewProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140ADCEA4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspUpdateCreateInfo @ 0x140AE09B4 (PspUpdateCreateInfo.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE25C4 (PspEstimateNewProcessServerSilo.c)
 *     PspGetProcessParameterOverrides @ 0x140AE80EC (PspGetProcessParameterOverrides.c)
 *     PspIsSiloInSilo @ 0x140AF1B24 (PspIsSiloInSilo.c)
 *     PspCaptureCreateInfo @ 0x140B025D8 (PspCaptureCreateInfo.c)
 *     PspValidateCreateProcessProtection @ 0x140B1B974 (PspValidateCreateProcessProtection.c)
 *     MmCreateSpecialImageSection @ 0x140B7F20C (MmCreateSpecialImageSection.c)
 */

__int64 __fastcall NtCreateUserProcess(
        HANDLE *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int *Address,
        volatile void *a6,
        int a7,
        int a8,
        __int64 a9,
        volatile void *a10,
        char *a11)
{
  __int64 Process; // rax
  char PreviousMode; // r15
  unsigned int v14; // r13d
  __int64 result; // rax
  __int64 ULong64FromUser; // rax
  __int64 v17; // rax
  KPROCESSOR_MODE v18; // r14
  unsigned int ULongFromUser; // edx
  __int64 v20; // rdx
  int Info; // esi
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r8
  unsigned __int8 v25; // bl
  __int64 v26; // rcx
  int v27; // eax
  ULONG v28; // eax
  int v29; // ecx
  char v30; // bl
  int v31; // r13d
  int v32; // r9d
  int v33; // eax
  int v34; // ecx
  int v35; // r12d
  int v36; // eax
  int v37; // ecx
  BOOLEAN v38; // bl
  char v39; // r13
  unsigned __int8 v40; // bl
  __int64 v41; // rcx
  char v42; // bl
  int v43; // r9d
  __int64 *v44; // r12
  char v45; // dl
  int v46; // esi
  int v47; // ecx
  int *v48; // r13
  unsigned __int64 v49; // rax
  void *v50; // rsp
  __int64 Root_high; // rax
  __int64 v52; // r8
  struct _KLOCK_ENTRIES *v53; // r9
  __int64 v54; // rax
  __int64 v55; // r8
  struct _KLOCK_ENTRIES *v56; // r9
  __int64 v57; // r13
  unsigned int v58; // r8d
  int v59; // esi
  $BF4C37CC00D15091B422706955D82C12 *v60; // rax
  int inserted; // ebx
  __int64 v62; // rdx
  __int64 v63; // r8
  struct _KLOCK_ENTRIES *v64; // r9
  __int64 ProcessServerSilo; // rax
  KPROCESSOR_MODE v66; // dl
  int v67; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v68; // [rsp+84h] [rbp+4h] BYREF
  unsigned __int8 v69; // [rsp+85h] [rbp+5h] BYREF
  __int16 v70; // [rsp+86h] [rbp+6h]
  char v71; // [rsp+88h] [rbp+8h] BYREF
  char v72; // [rsp+89h] [rbp+9h] BYREF
  unsigned __int8 v73; // [rsp+8Ah] [rbp+Ah]
  int v74[3]; // [rsp+8Ch] [rbp+Ch] BYREF
  char v75; // [rsp+98h] [rbp+18h]
  __int16 v76; // [rsp+9Ch] [rbp+1Ch] BYREF
  char v77[4]; // [rsp+A0h] [rbp+20h] BYREF
  PVOID Thread; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v79; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v80; // [rsp+B8h] [rbp+38h]
  __int64 v81; // [rsp+C0h] [rbp+40h] BYREF
  int v82; // [rsp+C8h] [rbp+48h]
  unsigned int v83; // [rsp+CCh] [rbp+4Ch]
  PVOID Object; // [rsp+D0h] [rbp+50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp+58h]
  void *v86; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v87; // [rsp+E8h] [rbp+68h] BYREF
  PVOID v88; // [rsp+F8h] [rbp+78h] BYREF
  void *v89; // [rsp+100h] [rbp+80h] BYREF
  __int64 v90; // [rsp+108h] [rbp+88h]
  HANDLE *v91; // [rsp+110h] [rbp+90h]
  __int64 v92; // [rsp+118h] [rbp+98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v94; // [rsp+150h] [rbp+D0h]
  unsigned int v95; // [rsp+158h] [rbp+D8h]
  volatile void *v96; // [rsp+160h] [rbp+E0h]
  __int64 v97; // [rsp+168h] [rbp+E8h]
  struct _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+170h] [rbp+F0h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+180h] [rbp+100h] BYREF
  __int64 v100; // [rsp+1A0h] [rbp+120h]
  __int128 v101; // [rsp+1A8h] [rbp+128h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v103[2]; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v104; // [rsp+1D8h] [rbp+158h]
  _BYTE v105[80]; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v106; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v107; // [rsp+238h] [rbp+1B8h]
  char v108; // [rsp+240h] [rbp+1C0h]
  char v109; // [rsp+241h] [rbp+1C1h]
  void *v110; // [rsp+248h] [rbp+1C8h]
  void *v111; // [rsp+258h] [rbp+1D8h]
  __int64 Src; // [rsp+268h] [rbp+1E8h] BYREF
  unsigned int v113; // [rsp+270h] [rbp+1F0h]
  unsigned __int64 v114; // [rsp+278h] [rbp+1F8h]
  __int64 v115; // [rsp+280h] [rbp+200h]
  ULONG_PTR BugCheckParameter1; // [rsp+2B0h] [rbp+230h]
  __int64 v117; // [rsp+2B8h] [rbp+238h]
  HANDLE v118; // [rsp+2C0h] [rbp+240h]
  void *v119; // [rsp+2C8h] [rbp+248h]
  struct _KLOCK_ENTRIES v120; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v121; // [rsp+398h] [rbp+318h]
  __int64 v122; // [rsp+3A0h] [rbp+320h]
  unsigned int v123; // [rsp+3ACh] [rbp+32Ch]
  int v124; // [rsp+3B8h] [rbp+338h]
  unsigned int v125; // [rsp+3BCh] [rbp+33Ch]
  __int64 v126; // [rsp+3C0h] [rbp+340h]
  __int64 v127; // [rsp+3D8h] [rbp+358h]
  struct _ACCESS_STATE v128[2]; // [rsp+430h] [rbp+3B0h] BYREF
  int v129; // [rsp+5B0h] [rbp+530h]
  char v130; // [rsp+5B4h] [rbp+534h]
  HANDLE v131; // [rsp+5B8h] [rbp+538h]
  __int64 v132[48]; // [rsp+5C0h] [rbp+540h] BYREF
  int v133; // [rsp+740h] [rbp+6C0h]
  HANDLE v134; // [rsp+748h] [rbp+6C8h]
  __int64 v135[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v136; // [rsp+760h] [rbp+6E0h]
  char v137; // [rsp+768h] [rbp+6E8h]

  v82 = a4;
  v83 = a3;
  v90 = a2;
  v91 = a1;
  v87 = (__int64)Address;
  v96 = a6;
  v92 = a9;
  v76 = 0;
  memset(v74, 0, sizeof(v74));
  *(_DWORD *)(&DriverContext.Size + 1) = 0;
  *(&DriverContext.Size + 3) = 0;
  IoStatusBlock = 0LL;
  v88 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v79 = 0LL;
  memset_0(v128, 0, 0x190uLL);
  v101 = 0LL;
  v73 = 0;
  v68 = 0;
  v72 = 0;
  v71 = 0;
  *(_OWORD *)v135 = 0LL;
  v136 = 0LL;
  v137 = 0;
  memset_0(v132, 0, 0x190uLL);
  *(_DWORD *)v77 = 0;
  v81 = 0LL;
  *(_OWORD *)v103 = 0LL;
  v104 = 0LL;
  ImpersonationState = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v80 = Process;
  v97 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v75 = PreviousMode;
  v86 = 0LL;
  v89 = 0LL;
  Thread = 0LL;
  LOBYTE(Process) = 0;
  v67 = Process;
  v70 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v100 = 0LL;
  memset_0(v105, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFB17838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v130 = PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    v17 = RtlReadULong64FromUser((volatile void *)v90);
    RtlWriteULong64ToUser((_QWORD *)v90, v17);
  }
  if ( Address )
  {
    v18 = 1;
    if ( PreviousMode )
    {
      v94 = 1LL;
      ProbeForRead(Address, 1uLL, 4u);
      ULongFromUser = RtlReadULongFromUser(Address + 6);
    }
    else
    {
      ULongFromUser = Address[6];
    }
    v95 = ULongFromUser;
    v129 = ULongFromUser & (PreviousMode != 0 ? 7666 : 73714);
  }
  else
  {
    v18 = 1;
  }
  memset_0(&v106, 0, 0x1F8uLL);
  if ( a11 )
  {
    result = PspBuildCreateProcessContext(a11, PreviousMode, 0, (__int64)&v106);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v70) = v121 != 0;
  }
  if ( (a7 & 0x40) != 0 && (v107 & 0x20000) != 0 && !BYTE1(v106) )
  {
    v14 = a7 & 0xFFFFFFBF;
    a7 &= ~0x40u;
    v107 &= ~0x20000uLL;
  }
  if ( (v14 & 4) == 0 && (v107 & 0x800) != 0 || (v107 & 0x20000) != 0 && (v14 & 0x40) == 0 )
    goto LABEL_184;
  Info = PspCaptureCreateInfo(PreviousMode, a10, (__int64)&v106);
  if ( Info < 0 )
    goto LABEL_185;
  if ( (v107 & 1) != 0 )
  {
    Info = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             128LL,
             PsProcessType,
             PreviousMode,
             0x72437350u,
             &v79,
             0LL,
             0LL);
    if ( Info >= 0 )
    {
      v22 = v79;
      v117 = v79;
      v23 = v80;
      goto LABEL_29;
    }
LABEL_185:
    v30 = v67;
    goto LABEL_186;
  }
  v23 = v80;
  v22 = v80;
LABEL_29:
  v79 = v22;
  v127 = PspEstimateNewProcessServerSilo(v22, v122, v123);
  if ( (v109 & 0xC) == 4 && (v22 != v23 || (*(_DWORD *)(v23 + 1532) & 0x1000) != 0) )
    goto LABEL_184;
  LOBYTE(v24) = PreviousMode;
  Info = PspReferenceTokenForNewProcess(v22, v119, v24, &v120);
  if ( Info < 0 )
  {
    v120.Thread = 0LL;
    goto LABEL_185;
  }
  if ( v119 && (int)SeQueryServerSiloToken((__int64)v120.Thread, (__int64)&v81) >= 0 && !PspIsSiloInSilo(v81, v127) )
    goto LABEL_184;
  if ( (v107 & 0x20) == 0 )
  {
    if ( v22 == v80
      && PreviousMode
      && !v92
      && (v109 & 0xC) == 0
      && (v107 & 0x80u) == 0LL
      && (v107 & 0x20000) == 0
      && (v108 & 0x10) == 0 )
    {
      v108 &= ~4u;
      v40 = *(_BYTE *)(v22 + 1530);
      v71 = *(_BYTE *)(v79 + 1529);
      v39 = *(_BYTE *)(v79 + 1528);
      if ( (a7 & 0x40) != 0 && (v40 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_185;
      }
      Info = PspValidateCreateProcessProtection(v80, (__int64)&v106, PreviousMode, a7, v40);
      if ( Info < 0 )
        goto LABEL_185;
      v44 = 0LL;
      v45 = v71;
      goto LABEL_115;
    }
LABEL_184:
    Info = -1073741811;
    goto LABEL_185;
  }
  v25 = (v107 & 0x20000) != 0 ? BYTE1(v106) : 0;
  v69 = v25;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    v101 = *(_OWORD *)&v120.Entries[0].WaiterTree.0;
    ZwSystemDebugControl(38LL, (__int64)&v101);
  }
  if ( (v14 & 0x400000) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    goto LABEL_42;
  Info = SeQuerySigningPolicy(
           (int)v120.Thread,
           (const UNICODE_STRING *)&v120.Entries[0].WaiterTree.8,
           (v14 >> 6) & 1,
           v25,
           (char *)&v68,
           &v72,
           &v69);
  if ( Info < 0 )
    goto LABEL_185;
  LOBYTE(v26) = v68;
  if ( (v14 & 0x20000) != 0 )
  {
    LOBYTE(v20) = 8;
    v27 = SeCompareSigningLevels(v26, v20);
    LODWORD(v26) = v68;
    if ( !v27 )
      LODWORD(v26) = 8;
  }
  LODWORD(v81) = v26;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v28 = 1600;
  if ( PreviousMode != 1 )
    v28 = 576;
  ObjectAttributes.Attributes = v28;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v120.Entries[0].WaiterTree.8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Info = 0;
  if ( ExpPlatformBinaryLock.ThreadListEntry.Flink )
    Info = guard_dispatch_icall_no_overrides((__int64)v120.Thread, v20);
  if ( Info < 0 )
    goto LABEL_185;
  Info = PspGetCpuAndMemoryPartitionContext(v79, v14, v122, v123, &v86, &v89);
  if ( Info < 0 )
    goto LABEL_185;
  Info = PspCreateUserProcessEcp((__int64)&DriverContext, (__int64)v120.Thread);
  if ( Info < 0 )
    goto LABEL_185;
  Info = IoCreateFileEx(
           (PHANDLE)v120.Entries,
           *(_DWORD *)&v120.EntryCount | 0x100020,
           &ObjectAttributes,
           &IoStatusBlock,
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
           &DriverContext);
  if ( Info < 0 && *(_DWORD *)&v120.EntryCount )
    Info = IoCreateFileEx(
             (PHANDLE)v120.Entries,
             0x100020u,
             &ObjectAttributes,
             &IoStatusBlock,
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
             &DriverContext);
  if ( Info < 0 )
  {
    v120.Entries[0].LockState.0 = 0LL;
    v29 = 1;
LABEL_59:
    PspUpdateCreateInfo(v29, (__int64)&v106, 0LL);
    goto LABEL_185;
  }
  Object = 0LL;
  Info = ObReferenceObjectByHandle(
           v120.Entries[0].LockState.LockState,
           0x100020u,
           (POBJECT_TYPE)IoFileObjectType,
           0,
           &Object,
           0LL);
  *(_QWORD *)&v120.Entries[0].EntryFlags = Object;
  if ( Info >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    v31 = 4 * (unsigned __int8)v70 + 1;
    if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() )
    {
      v36 = SeDuplicateTokenWithPredictedClaims(
              (__int64)v120.Thread,
              *(__int64 *)&v120.Entries[0].EntryFlags,
              v124,
              v126,
              v125,
              &Thread);
      Info = v36;
      if ( v36 < 0 )
        goto LABEL_185;
      if ( Thread )
      {
        LOBYTE(v37) = 1;
        v67 = v37;
        HIBYTE(v70) = 1;
      }
      else
      {
        LOBYTE(v36) = 0;
        v67 = v36;
        HIBYTE(v70) = 0;
        Thread = v120.Thread;
      }
      v35 = v31;
      if ( (v124 & 8) != 0 )
      {
        v38 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( v38 )
            PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
LABEL_42:
          Info = -1073741727;
          goto LABEL_185;
        }
        if ( v38 )
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
        v35 = v31 | 8;
      }
    }
    else
    {
      if ( v126 )
      {
        v33 = SeDuplicateTokenAndAddOriginClaim((__int64)v120.Thread, v126, v125, &Thread);
        v34 = (unsigned __int8)v67;
        if ( v33 >= 0 )
          v34 = 1;
        v67 = v34;
        HIBYTE(v70) = v34;
      }
      else
      {
        LOBYTE(v34) = v67;
      }
      v35 = v31;
      if ( !(_BYTE)v34 )
        Thread = v120.Thread;
    }
    v39 = v81;
    LOBYTE(v32) = v81;
    Info = MmCreateSpecialImageSection(
             (unsigned int)&v120.Entries[0].TreeNode,
             (unsigned int)&ObjectAttributes,
             (_DWORD)Thread,
             v32,
             (__int64)v120.Entries[0].LockState.LockState,
             v35);
    if ( Info < 0 )
    {
LABEL_102:
      v120.Entries[0].TreeNode.Children[0] = 0LL;
      v29 = 2;
      goto LABEL_59;
    }
    while ( 1 )
    {
      Object = 0LL;
      Info = ObReferenceObjectByHandle(v120.Entries[0].TreeNode.Children[0], 8u, MmSectionObjectType, 0, &Object, 0LL);
      v120.Entries[0].TreeNode.ParentValue = (unsigned __int64)Object;
      if ( Info < 0 )
      {
        v120.Entries[0].TreeNode.ParentValue = 0LL;
        goto LABEL_185;
      }
      v40 = v69;
      Info = PspGetProcessProtectionRequirementsFromImage((__int64)Object);
      if ( Info < 0 )
        goto LABEL_185;
      if ( v73 == v40 )
        break;
      Info = SeQuerySigningPolicy(
               (int)v120.Thread,
               (const UNICODE_STRING *)&v120.Entries[0].WaiterTree.8,
               1u,
               v73,
               &v71,
               &v72,
               &v69);
      if ( Info < 0 )
        goto LABEL_185;
      v42 = v71;
      if ( v71 == v39 )
      {
        v40 = v69;
        break;
      }
      if ( (v39 & 0x30) != 0 && (v71 & 0x30) != (v39 & 0x30) )
        goto LABEL_184;
      LOBYTE(v20) = v39;
      LOBYTE(v41) = v71;
      if ( !(unsigned int)SeCompareSigningLevels(v41, v20) )
        goto LABEL_184;
      ObCloseHandle(v120.Entries[0].TreeNode.Children[0], 0);
      ObfDereferenceObject((PVOID)v120.Entries[0].TreeNode.ParentValue);
      v120.Entries[0].TreeNode.Children[0] = 0LL;
      v120.Entries[0].TreeNode.ParentValue = 0LL;
      v39 = v42;
      LOBYTE(v43) = v42;
      Info = MmCreateSpecialImageSection(
               (unsigned int)&v120.Entries[0].TreeNode,
               (unsigned int)&ObjectAttributes,
               (_DWORD)Thread,
               v43,
               (__int64)v120.Entries[0].LockState.LockState,
               v35);
      if ( Info < 0 )
        goto LABEL_102;
    }
    Info = PspValidateCreateProcessProtection(v80, (__int64)&v106, PreviousMode, a7, v40);
    if ( Info < 0 )
      goto LABEL_185;
    if ( (a7 & 0x40000) != 0
      || (v40 & 7) != 1 && PspCheckForInvalidAccessByProtection(PreviousMode, *(_BYTE *)(v80 + 1530), v40) )
    {
      v108 |= 8u;
    }
    PspGetProcessParameterOverrides((__int64)&v106, (__int64)v86);
    Info = PspCaptureProcessParameters(PreviousMode, v92, (__int64)&v106);
    if ( Info < 0 )
    {
      v108 &= ~4u;
      goto LABEL_185;
    }
    v44 = v135;
    v45 = v72;
LABEL_115:
    Info = PspAllocateProcess(
             v79,
             PreviousMode,
             v87,
             v40,
             v39,
             v45,
             (void *)v120.Entries[0].TreeNode.ParentValue,
             v120.Thread,
             a7,
             0,
             (__int64)&v106,
             v119 != 0LL,
             v86,
             (__int64)v89,
             (__int64)&v76,
             &v74[1]);
    if ( Info < 0 )
      goto LABEL_185;
    v46 = v120.Entries[0].TreeNode.ParentValue != 0 ? 1048587 : 1048603;
    v47 = *(_DWORD *)(*(_QWORD *)&v74[1] + 1876LL) & 0x4000;
    if ( v47 )
      v46 |= 0x100040u;
    v87 = v47 != 0 ? 0x800 : 0;
    RtlGetExtendedContextLength2(v46, v77, v87);
    v48 = 0LL;
    if ( (_BYTE)v70 )
    {
      v44 = 0LL;
    }
    else
    {
      v49 = *(unsigned int *)v77 + 15LL;
      if ( v49 <= *(unsigned int *)v77 )
        v49 = 0xFFFFFFFFFFFFFF0LL;
      v50 = alloca(v49 & 0xFFFFFFFFFFFFFFF0uLL);
      v48 = &v67;
      memset_0(&v67, 0, *(unsigned int *)v77);
      RtlInitializeExtendedContext2((__int64)&v67, v46, &v87, v87);
      if ( v120.Entries[0].TreeNode.ParentValue )
      {
        if ( *(_QWORD *)(*(_QWORD *)&v74[1] + 784LL) )
          Root_high = HIDWORD(v120.Entries[0].WaiterTree.Root);
        else
          Root_high = *(_QWORD *)(*(_QWORD *)&v74[1] + 736LL);
        PspCreateUserContext((__int64)&v67, 1, stru_140FC01F0.TracingPrivate[0], Src, Root_high);
      }
      else
      {
        Info = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)&v67, 0, 1, 1);
        if ( Info < 0 )
        {
          PspUnlockProcessExclusive(*(__int64 *)&v74[1], (__int64)CurrentThread);
          PspRundownSingleProcess(*(PRKPROCESS *)&v74[1], 0, v52, v53);
          goto LABEL_185;
        }
        v88 = (PVOID)297;
      }
      v103[0] = (__int64)v105;
    }
    ObfReferenceObjectWithTag(*(PVOID *)&v74[1], 0x72437350u);
    if ( v44 )
    {
      *(_BYTE *)v44 = 0;
      v54 = v114;
      if ( v114 < 0x40000 )
        v54 = 0x40000LL;
      v44[3] = v54;
      v44[2] = v115;
      v44[1] = v113;
    }
    *(_DWORD *)v77 = 0;
    PspMapThreadCreationFlags(a8, v74);
    if ( (_BYTE)v76 )
    {
      *(_DWORD *)v77 = 2;
      v74[0] |= 0x10u;
    }
    if ( HIBYTE(v76) )
      a7 |= 0x400u;
    if ( (_BYTE)v70 )
      v74[0] |= 0x400u;
    v74[0] |= 0x60u;
    Info = PspAllocateThread(
             *(ULONG_PTR *)&v74[1],
             (unsigned int *)v96,
             PreviousMode,
             (__int64)&v106,
             (__int64)v48,
             (void **)v103,
             0LL,
             0LL,
             v74,
             &v88,
             v44,
             (__int64)v132);
    if ( Info < 0 )
    {
      PspUnlockProcessExclusive(*(__int64 *)&v74[1], (__int64)CurrentThread);
      PspRundownSingleProcess(*(PRKPROCESS *)&v74[1], 0, v55, v56);
      v30 = v67;
LABEL_165:
      ObfDereferenceObjectWithTag(*(PVOID *)&v74[1], 0x72437350u);
LABEL_186:
      if ( *(_QWORD *)&v120.Entries[0].EntryFlags && SepRmCapTableLock.ExtendedFeatureDisableMask )
        guard_dispatch_icall_no_overrides(*(__int64 *)&v120.Entries[0].EntryFlags, v20);
      goto LABEL_189;
    }
    v57 = v80;
    if ( PsTestProtectedProcessIncompatibility(PreviousMode, v80, *(__int64 *)&v74[1]) )
    {
      Feature_ID51912085__private_IsEnabledPreCheck();
      v58 = v83;
      if ( (v83 & 0x2000000) != 0 )
      {
        v58 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v40 >> 4) + 4] & 0x1FFFFF | v83 & 0xFDFFFFFF;
        if ( !v117 || v57 == v117 )
          v58 |= 1u;
      }
      v59 = v82;
      if ( (v82 & 0x2000000) != 0 )
      {
        v59 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v40 >> 4) + 8] & 0x1FFFFF | v82 & 0xFDFFFFFF;
        if ( !v117 || v57 == v117 )
          v59 |= 1u;
      }
    }
    else
    {
      v59 = v82;
      v58 = v83;
    }
    if ( v120.Entries[0].OwnerTree.Root )
      v60 = &v120.Entries[0].OwnerTree.Root[4].16;
    else
      v60 = 0LL;
    inserted = PspInsertProcess(*(char **)&v74[1], (struct _KPROCESS *)v79, v58, a7, v118, v77[0], (__int64)v60, v128);
    Info = PspInsertThread(
             (ULONG_PTR)v88,
             *(__int64 *)&v74[1],
             (__int64)v105,
             v74,
             v59,
             v44,
             (__int64)&v106,
             0LL,
             (__int64)v132,
             (_QWORD *)v90,
             v110);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v62);
    if ( inserted < 0 )
    {
      PspRundownSingleProcess(*(PRKPROCESS *)&v74[1], 0, v63, v64);
      Info = inserted;
      v30 = v67;
LABEL_164:
      ObfDereferenceObject(v88);
      goto LABEL_165;
    }
    if ( Info >= 0 )
    {
      ProcessServerSilo = PsGetProcessServerSilo(*(__int64 *)&v74[1]);
      if ( ProcessServerSilo == v127 )
      {
        Info = PspCreateObjectHandle(*(void **)&v74[1], (__int64)v128, (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          v30 = v67;
        }
        else
        {
          if ( v111 )
          {
            if ( PreviousMode )
              RtlCopyToUser(v111, &Src, 0x40uLL);
            else
              RtlCopyVolatileMemory(v111, &Src, 0x40uLL);
          }
          if ( PreviousMode )
            RtlWriteULong64ToUser(v91, (__int64)v131);
          else
            *v91 = v131;
          v30 = v67;
          Info = PspUpdateCreateInfo(6, (__int64)&v106, *(__int64 *)&v74[1]);
          if ( Info >= 0 )
            goto LABEL_162;
          if ( (v129 & 0x200) != 0 || (v66 = 1, (*(_DWORD *)(v57 + 1532) & 0x1000) != 0) )
            v66 = 0;
          ObCloseHandle(v131, v66);
        }
        if ( (v133 & 0x200) != 0 || (*(_DWORD *)(v57 + 1532) & 0x1000) != 0 )
          v18 = 0;
        ObCloseHandle(v134, v18);
LABEL_162:
        SeDeleteAccessState((__int64)v128);
        if ( Info < 0 )
          PsTerminateProcess(*(struct _KPROCESS **)&v74[1]);
        goto LABEL_164;
      }
      Info = -1073741267;
    }
    v30 = v67;
    goto LABEL_162;
  }
  *(_QWORD *)&v120.Entries[0].EntryFlags = 0LL;
  v30 = v67;
LABEL_189:
  PspDeleteCpuAndMemoryPartitionContext(v86, v89);
  PspDeleteCreateProcessContext((__int64)&v106);
  if ( DriverContext.ExtraCreateParameter )
    FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
  if ( v30 )
    ObfDereferenceObject(Thread);
  return (unsigned int)Info;
}
