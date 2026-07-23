/*
 * XREFs of PspAllocateProcess @ 0x140B7E8A8
 * Callers:
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryAffinityProcess @ 0x1404626E0 (KeQueryAffinityProcess.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     KeQuerySystemTimeUnsafe @ 0x1404AC5F4 (KeQuerySystemTimeUnsafe.c)
 *     KeSelectNodeForAffinity @ 0x1404ADF48 (KeSelectNodeForAffinity.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     PspDetachSession @ 0x1404B05B0 (PspDetachSession.c)
 *     KeQueryMaximumGroupCount @ 0x1404B4AE0 (KeQueryMaximumGroupCount.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x1404CB0E4 (AppModelPolicy_GetPolicy_Internal.c)
 *     PspWow64PickBestNtdll @ 0x1404CEE90 (PspWow64PickBestNtdll.c)
 *     KeIsUserCetAllowed @ 0x1404D034C (KeIsUserCetAllowed.c)
 *     KeSizeOfKProcessExtension @ 0x1404D18B0 (KeSizeOfKProcessExtension.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x1404D3AD8 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     KeCopyXfdMaskToPeb @ 0x1404E1928 (KeCopyXfdMaskToPeb.c)
 *     KeGetIdealNodeNumberProcess @ 0x1404E9DE4 (KeGetIdealNodeNumberProcess.c)
 *     KeSetCpuSetsProcess @ 0x14052FE54 (KeSetCpuSetsProcess.c)
 *     KeSecureProcess @ 0x1405E82A0 (KeSecureProcess.c)
 *     KeSelectGroupFromNode @ 0x1405F13CC (KeSelectGroupFromNode.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspApplyIFEOPerfOptions @ 0x14077BC3C (PspApplyIFEOPerfOptions.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PspSelectNodeForProcess @ 0x1407F8950 (PspSelectNodeForProcess.c)
 *     MmMapApiSetView @ 0x14086A2B4 (MmMapApiSetView.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     RtlAcquirePrivilege @ 0x1409A2FF0 (RtlAcquirePrivilege.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     PsQueryProcessAttributes @ 0x1409DD970 (PsQueryProcessAttributes.c)
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409E5658 (PspPrepareSystemDllInitBlock.c)
 *     PspUpdatePebForAffinityChange @ 0x1409E5A34 (PspUpdatePebForAffinityChange.c)
 *     PspMapSiloSharedDataView @ 0x1409E6308 (PspMapSiloSharedDataView.c)
 *     PsWow64GetProcessNtdllType @ 0x1409E6F4C (PsWow64GetProcessNtdllType.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140A08068 (MmInitializeHandBuiltProcess2.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     ObRetagReferences @ 0x140A68380 (ObRetagReferences.c)
 *     PspReadIFEOPerfOptions @ 0x140A77A84 (PspReadIFEOPerfOptions.c)
 *     PspReadIFEONodeOptions @ 0x140A78470 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140A78518 (PspReadIFEOMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140A7859C (PspReadIFEOMitigationOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140A786C0 (RtlQueryImageFileKeyOption.c)
 *     SeQuerySessionIdToken @ 0x140A87F60 (SeQuerySessionIdToken.c)
 *     PspInheritMitigationOptions @ 0x140A8F644 (PspInheritMitigationOptions.c)
 *     PspInheritMitigationAuditOptions @ 0x140A8F8D4 (PspInheritMitigationAuditOptions.c)
 *     PspSelectMachineForProcess @ 0x140A9629C (PspSelectMachineForProcess.c)
 *     PspInitializeFullProcessImageName @ 0x140AA6F44 (PspInitializeFullProcessImageName.c)
 *     MmSecureVirtualMemory @ 0x140AADF70 (MmSecureVirtualMemory.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140AB60E8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     PspComputeQuantumAndPriority @ 0x140AB8340 (PspComputeQuantumAndPriority.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 *     MmInitializeHandBuiltProcess @ 0x140ABF810 (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 *     PspSetupReservedUserMappings @ 0x140ADB07C (PspSetupReservedUserMappings.c)
 *     SmProcessCreateNotification @ 0x140ADC1FC (SmProcessCreateNotification.c)
 *     PspUpdateCreateInfo @ 0x140ADDFE4 (PspUpdateCreateInfo.c)
 *     RtlReleasePrivilege @ 0x140AEEEDC (RtlReleasePrivilege.c)
 *     PoEnergyContextInitialize @ 0x140AF6908 (PoEnergyContextInitialize.c)
 *     PsGetSessionSchedulingGroupByProcess @ 0x140AF6E00 (PsGetSessionSchedulingGroupByProcess.c)
 *     PspInheritQuota @ 0x140AFBD0C (PspInheritQuota.c)
 *     PspSetProcessAffinitySafe @ 0x140AFE330 (PspSetProcessAffinitySafe.c)
 *     PspHardenMitigationOptions @ 0x140AFECC0 (PspHardenMitigationOptions.c)
 *     PspApplyWin32kFilterOptions @ 0x140B04138 (PspApplyWin32kFilterOptions.c)
 *     PspSetProcessPriorityClass @ 0x140B11C80 (PspSetProcessPriorityClass.c)
 *     PspIsSessionLeaderProcess @ 0x140B165C4 (PspIsSessionLeaderProcess.c)
 *     KeInitializeProcessUserCetLogging @ 0x140B20190 (KeInitializeProcessUserCetLogging.c)
 *     PspAttachSession @ 0x140B23AC8 (PspAttachSession.c)
 *     PspApplyMitigationOptions @ 0x140B4F59C (PspApplyMitigationOptions.c)
 *     MmGetSectionStrongImageReference @ 0x140B569E8 (MmGetSectionStrongImageReference.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        ULONG_PTR a1,
        char a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        __int64 a15,
        _QWORD *a16)
{
  __int64 v18; // r15
  unsigned int v19; // r14d
  __int64 result; // rax
  int v21; // ecx
  int v22; // esi
  USHORT MaximumGroupCount; // ax
  unsigned int v24; // r12d
  __int64 v25; // rcx
  int v26; // r8d
  ULONG v27; // r13d
  __int64 v28; // rdx
  char *v29; // rsi
  int v30; // eax
  char *v31; // rcx
  char v32; // cl
  __int16 v33; // cx
  __int64 Flink; // rax
  char *v35; // rcx
  int v36; // eax
  ULONG_PTR v37; // r12
  int v38; // ecx
  int DefaultPagePriority; // edx
  __int64 v40; // r8
  struct _KLOCK_ENTRIES *v41; // r9
  int SectionInformation; // ebx
  PVOID v43; // rdx
  PVOID v44; // rcx
  void *v45; // rax
  __int64 v46; // rax
  int v47; // eax
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // eax
  void *v52; // rcx
  NTSTATUS v53; // eax
  NTSTATUS v54; // eax
  int v55; // r12d
  unsigned int v56; // ebx
  _DWORD *Pool2; // rax
  __int64 v58; // r10
  int v59; // eax
  __int16 v60; // r11
  _QWORD *v61; // rax
  ULONG v62; // r10d
  KPROCESSOR_MODE v63; // al
  int v64; // ecx
  BOOL IsSessionLeaderProcess; // eax
  bool v66; // sf
  __int64 v67; // rdx
  __int64 v68; // rbx
  unsigned __int16 v69; // r12
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // ebx
  char v73; // r13
  BOOLEAN v74; // al
  __int64 v75; // r8
  struct _KLOCK_ENTRIES *v76; // r9
  unsigned int v77; // ecx
  unsigned int v78; // r12d
  int v79; // r14d
  int v80; // eax
  __int64 v81; // rdx
  ULONG_PTR v82; // rdx
  char v83; // r9
  unsigned __int64 v84; // r8
  _KPROCESS *v85; // rbx
  __int64 v86; // rcx
  int v87; // r8d
  int v88; // ecx
  _DWORD *v89; // rbx
  int v90; // r12d
  __int64 v91; // rcx
  _DWORD *v92; // rcx
  __int64 v93; // rax
  ULONG_PTR v94; // r12
  __int64 v95; // rdx
  char v96; // al
  __int64 v97; // r9
  int v98; // r8d
  int inited; // eax
  int v100; // ebx
  __int16 v101; // r12
  unsigned __int64 v102; // rax
  ULONG_PTR v103; // r12
  __int64 v104; // rdx
  int v105; // ecx
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rax
  char v109; // cl
  __int64 v110; // r12
  void *v111; // rax
  size_t v112; // r8
  void *v113; // r12
  void **v114; // r12
  __int16 v115; // ax
  bool v116; // zf
  char v117; // al
  void *v118; // r12
  struct _KTHREAD *v119; // r13
  __int64 v120; // rbx
  int ProcessNtdllType; // eax
  __int64 v122; // rcx
  __int64 v123; // [rsp+20h] [rbp-748h]
  int v124; // [rsp+48h] [rbp-720h]
  int v126; // [rsp+88h] [rbp-6E0h] BYREF
  int v127; // [rsp+8Ch] [rbp-6DCh]
  ULONG v128; // [rsp+90h] [rbp-6D8h] BYREF
  _WORD v129[2]; // [rsp+94h] [rbp-6D4h] BYREF
  unsigned int v130; // [rsp+98h] [rbp-6D0h] BYREF
  __int16 v131; // [rsp+9Ch] [rbp-6CCh]
  int v132; // [rsp+A0h] [rbp-6C8h] BYREF
  int v133; // [rsp+A4h] [rbp-6C4h]
  ULONG_PTR v134; // [rsp+A8h] [rbp-6C0h]
  int v135; // [rsp+B0h] [rbp-6B8h]
  int v136; // [rsp+B4h] [rbp-6B4h]
  ULONG SessionId; // [rsp+B8h] [rbp-6B0h] BYREF
  ULONG v138; // [rsp+BCh] [rbp-6ACh]
  _KPROCESS *v139; // [rsp+C0h] [rbp-6A8h]
  int v140; // [rsp+C8h] [rbp-6A0h] BYREF
  int v141; // [rsp+CCh] [rbp-69Ch]
  int v142; // [rsp+D0h] [rbp-698h]
  int v143; // [rsp+D4h] [rbp-694h]
  PVOID TokenInformation; // [rsp+D8h] [rbp-690h] BYREF
  _KPROCESS *Process; // [rsp+E0h] [rbp-688h]
  PVOID v146; // [rsp+E8h] [rbp-680h]
  _KPROCESS *v147; // [rsp+F0h] [rbp-678h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-670h]
  PACCESS_TOKEN Token; // [rsp+100h] [rbp-668h]
  __int64 v150; // [rsp+108h] [rbp-660h]
  int v151; // [rsp+110h] [rbp-658h]
  int v152; // [rsp+114h] [rbp-654h]
  int v153; // [rsp+118h] [rbp-650h]
  int v154; // [rsp+120h] [rbp-648h] BYREF
  int v155; // [rsp+124h] [rbp-644h] BYREF
  ULONG_PTR v156; // [rsp+128h] [rbp-640h]
  PVOID v157; // [rsp+130h] [rbp-638h]
  __int128 v158; // [rsp+140h] [rbp-628h] BYREF
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // [rsp+150h] [rbp-618h]
  ULONG Privilege[4]; // [rsp+160h] [rbp-608h] BYREF
  unsigned __int64 v161; // [rsp+170h] [rbp-5F8h]
  __int64 v162; // [rsp+180h] [rbp-5E8h] BYREF
  PVOID Object; // [rsp+188h] [rbp-5E0h] BYREF
  unsigned int v164; // [rsp+190h] [rbp-5D8h]
  HANDLE KeyHandle; // [rsp+198h] [rbp-5D0h] BYREF
  __int64 v166; // [rsp+1A0h] [rbp-5C8h] BYREF
  HANDLE Handle; // [rsp+1A8h] [rbp-5C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+1B0h] [rbp-5B8h]
  PVOID ReturnedState; // [rsp+1B8h] [rbp-5B0h] BYREF
  PVOID P; // [rsp+1C0h] [rbp-5A8h]
  __int64 v171; // [rsp+1D0h] [rbp-598h] BYREF
  __int64 v172; // [rsp+1D8h] [rbp-590h] BYREF
  _OWORD Src[2]; // [rsp+1E0h] [rbp-588h] BYREF
  ULONG_PTR v174; // [rsp+200h] [rbp-568h]
  __int64 v175; // [rsp+210h] [rbp-558h]
  __int64 v176; // [rsp+220h] [rbp-548h] BYREF
  __int64 v177; // [rsp+228h] [rbp-540h]
  __int64 v178; // [rsp+230h] [rbp-538h]
  __int64 v179; // [rsp+238h] [rbp-530h]
  __int64 v180; // [rsp+240h] [rbp-528h]
  __int64 v181; // [rsp+248h] [rbp-520h]
  _QWORD *v182; // [rsp+250h] [rbp-518h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+258h] [rbp-510h] BYREF
  OBJECT_ATTRIBUTES v184; // [rsp+288h] [rbp-4E0h] BYREF
  __int128 v185; // [rsp+2C0h] [rbp-4A8h] BYREF
  _KPROCESS *v186; // [rsp+2D0h] [rbp-498h]
  __int64 SessionSchedulingGroupByProcess; // [rsp+2D8h] [rbp-490h]
  int v188; // [rsp+2E0h] [rbp-488h]
  int v189; // [rsp+2E4h] [rbp-484h]
  char *v190; // [rsp+2E8h] [rbp-480h]
  __int64 v191; // [rsp+2F0h] [rbp-478h]
  __int64 v192[4]; // [rsp+300h] [rbp-468h] BYREF
  unsigned __int16 v193; // [rsp+324h] [rbp-444h]
  unsigned __int16 v194; // [rsp+326h] [rbp-442h]
  __int16 v195; // [rsp+32Eh] [rbp-43Ah]
  char v196; // [rsp+333h] [rbp-435h]
  int v197; // [rsp+340h] [rbp-428h]
  __m128i v198; // [rsp+350h] [rbp-418h] BYREF
  unsigned __int64 v199; // [rsp+360h] [rbp-408h]
  __int128 v200; // [rsp+368h] [rbp-400h] BYREF
  _KSCHEDULING_GROUP *v201; // [rsp+378h] [rbp-3F0h]
  __int128 v202; // [rsp+380h] [rbp-3E8h] BYREF
  __int128 v203; // [rsp+390h] [rbp-3D8h] BYREF
  __int128 v204; // [rsp+3A0h] [rbp-3C8h]
  __int64 v205; // [rsp+3B0h] [rbp-3B8h]
  _OWORD v206[3]; // [rsp+3B8h] [rbp-3B0h] BYREF
  struct _KAFFINITY_EX v207; // [rsp+3F0h] [rbp-378h] BYREF
  _DWORD v208[136]; // [rsp+500h] [rbp-268h] BYREF

  v150 = a3;
  v134 = a1;
  v174 = a1;
  v146 = a7;
  Token = a8;
  v18 = a11;
  v175 = a11;
  v157 = a13;
  *(_QWORD *)&v158 = a14;
  v172 = a15;
  v182 = a16;
  LODWORD(v166) = 0;
  memset(v206, 0, sizeof(v206));
  v208[131] = 0;
  memset(&ObjectAttributes, 0, 44);
  v155 = 0;
  v202 = 0LL;
  Src[0] = 0LL;
  v162 = 0LL;
  KeyHandle = 0LL;
  memset_0(&v207, 0, sizeof(v207));
  v19 = 0;
  v154 = 0;
  v140 = 0;
  v198 = 0LL;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  memset(&v184, 0, 44);
  Handle = 0LL;
  Object = 0LL;
  v129[0] = 0;
  LOWORD(v126) = 0;
  v128 = 0;
  memset_0(v192, 0, 0x48uLL);
  LODWORD(TokenInformation) = 0;
  v176 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v139 = 0LL;
  v147 = 0LL;
  P = 0LL;
  v138 = 0;
  v133 = 0;
  v135 = 0;
  v143 = 0;
  v142 = 0;
  v136 = 34404;
  SessionId = 0;
  v153 = 0;
  v152 = 0;
  v180 = 0LL;
  v151 = 0;
  v179 = 0LL;
  v131 = 0;
  v148 = 0LL;
  v178 = 0LL;
  memset_0(v208, 0, 0x218uLL);
  v127 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v19 = 2;
    if ( (a9 & 0x2000) != 0 )
    {
      v19 = 6;
      if ( (a9 & 0x4000) != 0 )
        v19 = 14;
    }
  }
  else if ( !a7 )
  {
    v19 = a1 != 0 ? 4 : 1;
  }
  if ( (v19 & 4) != 0 )
  {
    if ( a12 && (v19 & 2) == 0 )
      return 3221225520LL;
    if ( (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
      return 3221225485LL;
  }
  else if ( (a9 & 0x1000) != 0 )
  {
    return 3221225520LL;
  }
  v156 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( v18 && (*(_DWORD *)(v18 + 8) & 0x2000LL) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) == 0 )
    {
      v139 = (_KPROCESS *)KeNodeBlock[*(unsigned __int16 *)(v18 + 170)];
      v147 = v139;
      v156 = 0LL;
      goto LABEL_20;
    }
    return 3221225520LL;
  }
  if ( a1 )
  {
    v156 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 496) & 0x200000) != 0 )
    {
      v156 = a1;
      v135 = 0x200000;
    }
  }
LABEL_20:
  if ( v18 && (*(_DWORD *)(v18 + 8) & 0x40000) != 0 )
  {
    v19 |= 0x10000u;
    *(_BYTE *)(v18 + 16) &= ~0x10u;
  }
  v181 = 0LL;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  ReturnedState = 0LL;
  v21 = 2112;
  v130 = 0;
  v177 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2152;
    v19 |= 0x8000u;
    v177 = 2112LL;
  }
  HIDWORD(TokenInformation) = (v21 + 7) & 0xFFFFFFF8;
  v22 = HIDWORD(TokenInformation) + 16;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v130 = (HIDWORD(TokenInformation) + 23) & 0xFFFFFFF8;
    v22 = v130 + 488;
    v19 |= 0x20000u;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LOWORD(v132) = MaximumGroupCount;
  v24 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v24 = (v22 + 7) & 0xFFFFFFF8;
    v22 = v24 + 16 * MaximumGroupCount;
  }
  v25 = 0LL;
  v141 = 0;
  if ( (v19 & 0x10002) == 0 )
  {
    if ( v134 )
      v25 = 4LL;
    v141 = v25;
  }
  v164 = (v22 + 7) & 0xFFFFFFF8;
  v171 = KeSizeOfKProcessExtension(v25);
  v27 = v171 + v26;
  result = ObCreateObjectEx(a2, PsProcessType, v150, a2, v123, (int)v171 + v26, 0, (int)v171 + v26, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v29 = (char *)Object;
    ObRetagReferences((__int64)Object, v28, 0x72437350u);
    memset_0(v29, 0, v27);
    *((_QWORD *)v29 + 177) = 0LL;
    *((_QWORD *)v29 + 178) = 0LL;
    *((_QWORD *)v29 + 179) = 0LL;
    *((_QWORD *)v29 + 176) = 0LL;
    *((_QWORD *)v29 + 178) = v29 + 1416;
    *((_QWORD *)v29 + 177) = v29 + 1416;
    *((_QWORD *)v29 + 61) = 0LL;
    *((_QWORD *)v29 + 57) = 0LL;
    *((_QWORD *)v29 + 111) = v29 + 880;
    *((_QWORD *)v29 + 110) = v29 + 880;
    *((_QWORD *)v29 + 197) = v29 + 1568;
    *((_QWORD *)v29 + 196) = v29 + 1568;
    *((_QWORD *)v29 + 227) = v29 + 1808;
    *((_QWORD *)v29 + 226) = v29 + 1808;
    v29[1530] = a4;
    v29[1528] = a5;
    v29[1529] = a6;
    *((_QWORD *)v29 + 263) = 1LL;
    *((_QWORD *)v29 + 203) = 0LL;
    *((_QWORD *)v29 + 241) = 0LL;
    *((_QWORD *)v29 + 240) = 0LL;
    *((_QWORD *)v29 + 243) = 0LL;
    *((_QWORD *)v29 + 242) = 0LL;
    *((_QWORD *)v29 + 245) = 0LL;
    *((_QWORD *)v29 + 260) = 0LL;
    if ( (v19 & 2) != 0 )
      *((_DWORD *)v29 + 383) |= 1u;
    v30 = v127;
    LODWORD(v150) = 32;
    if ( (v127 & 0x8000) != 0 )
      *((_DWORD *)v29 + 383) |= 0x20u;
    if ( (v30 & 0x80000) != 0 )
      _InterlockedOr((volatile signed __int32 *)v29 + 503, 4u);
    if ( v24 )
    {
      *((_DWORD *)v29 + 383) |= 0x80u;
      v31 = &v29[v24];
      *((_QWORD *)v29 + 217) = v31;
      *((_QWORD *)v29 + 218) = &v31[8 * (unsigned __int16)v132];
      LOWORD(v30) = v127;
    }
    v32 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v29 + 383) |= 0x1000u;
    if ( (v32 & 4) != 0 )
      *((_DWORD *)v29 + 383) |= 0x800000u;
    if ( (v32 & 8) != 0 )
      *((_DWORD *)v29 + 383) |= 0x8000000u;
    if ( (v32 & 0x10) != 0 )
      *((_DWORD *)v29 + 383) |= 0x40000000u;
    v33 = v30;
    Flink = (__int64)Process[1].Header.WaitListHead.Flink | 2;
    if ( (v33 & 0x200) != 0 )
      Flink = (__int64)Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v29 + 91) = Flink;
    if ( (v19 & 0x8000) != 0 )
      *((_QWORD *)v29 + 199) = &v29[v177];
    *((_QWORD *)v29 + 254) = &v29[HIDWORD(TokenInformation)];
    if ( (v19 & 0x20000) != 0 )
    {
      v35 = &v29[v130];
      *((_QWORD *)v29 + 205) = v35;
      PoEnergyContextInitialize(v35);
    }
    if ( v18 && (*(_DWORD *)(v18 + 8) & 0x200LL) != 0 )
    {
      v36 = *(_DWORD *)(v18 + 316);
      v37 = v134;
    }
    else
    {
      v37 = v134;
      if ( v134 )
        v36 = *(_DWORD *)(v134 + 904);
      else
        v36 = 5;
    }
    *((_DWORD *)v29 + 226) = v36;
    *((_DWORD *)v29 + 341) = 259;
    if ( v37 )
    {
      v38 = (*(_DWORD *)(v37 + 500) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v37 + 496) >> 12) & 7;
      *((_QWORD *)v29 + 90) = *(_QWORD *)(v37 + 464);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v29 + 125) = *((_DWORD *)v29 + 125) & 0xC7FFFFFF | (v38 << 27);
    *((_DWORD *)v29 + 124) = (DefaultPagePriority << 12) | *((_DWORD *)v29 + 124) & 0xFFFF8FFF;
    if ( v157 )
    {
      if ( !PsReferencePartitionSafe((__int64)v157) )
      {
        SectionInformation = -1073740640;
LABEL_178:
        if ( v148 )
          *((_QWORD *)v29 + 58) = v148;
        PspRundownSingleProcess((PRKPROCESS)v29, 0, v40, v41);
        ObfDereferenceObjectWithTag(v29, 0x72437350u);
        goto LABEL_181;
      }
      v43 = v157;
    }
    else
    {
      v43 = PspSystemPartition;
      v157 = PspSystemPartition;
      if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 5) <= 1 )
        __fastfail(0xEu);
    }
    *((_QWORD *)v29 + 235) = v43;
    v44 = v146;
    if ( v146 )
    {
      PsReferenceSiloContext(v146);
      v44 = v146;
    }
    if ( (v19 & 4) != 0 )
    {
      v136 = *(unsigned __int16 *)(v37 + 1772);
      if ( (v19 & 2) == 0 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v37 + 488)) )
        {
          v45 = *(void **)(v37 + 680);
          v146 = v45;
          if ( v45 )
            PsReferenceSiloContext(v45);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v37 + 488));
        }
        v44 = v146;
        if ( !v146 )
        {
          SectionInformation = -1073741558;
          goto LABEL_178;
        }
        v46 = *(_QWORD *)(v37 + 784);
        if ( v46 )
        {
          v19 |= 0x40u;
          SessionId = *(_DWORD *)(v46 + 8);
        }
        v47 = 0;
        if ( (*(_DWORD *)(v37 + 500) & 0x20000) != 0 )
          v47 = 0x20000;
        v133 = v47;
      }
    }
    *((_QWORD *)v29 + 85) = v44;
    if ( !v18 || (v19 & 2) != 0 )
    {
      if ( v44 )
      {
        SectionInformation = MmGetSectionInformation((__int64)v44, 4, v192);
        if ( SectionInformation < 0 )
          goto LABEL_178;
        v19 = v19 & 0xF82B9FFF | ((v196 & 4 | (4 * (v196 & 2 | (32 * (v197 & 1 | (2 * (v197 & 0xFA))))))) << 11);
        v131 = v195;
        v143 = v194;
        v142 = v193;
        if ( (v19 & 4) != 0 )
        {
          v133 |= 8u;
          v19 |= 0x18u;
        }
      }
    }
    else
    {
      *((_QWORD *)v29 + 190) = *(_QWORD *)(v18 + 424);
      SectionInformation = MmGetSectionInformation((__int64)v44, 4, (__int64 *)(v18 + 56));
      if ( SectionInformation < 0 )
        goto LABEL_178;
      v19 |= (*(_BYTE *)(v18 + 107) & 4 | (4
                                         * (*(_BYTE *)(v18 + 107) & 2 | (32
                                                                       * (*(_DWORD *)(v18 + 120) & 1 | (2 * (*(_DWORD *)(v18 + 120) & 0xFA))))))) << 11;
      v143 = *(unsigned __int16 *)(v18 + 94);
      v142 = *(unsigned __int16 *)(v18 + 92);
      if ( (*(_WORD *)(v18 + 100) & *(_WORD *)(v18 + 18)) != 0 )
      {
        SectionInformation = -1073741701;
        v48 = 3;
LABEL_91:
        PspUpdateCreateInfo(v48, v18, 0LL);
        goto LABEL_178;
      }
      if ( (v19 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 184), 0x72437350u);
        *((_QWORD *)v29 + 102) = *(_QWORD *)(v18 + 184);
        v131 = *(_WORD *)(v18 + 102);
        v51 = RtlpOpenImageFileOptionsKeyEx((unsigned __int16 *)(v18 + 240), v49, v50, (HANDLE *)(v18 + 200));
        if ( v51 < 0 )
        {
          if ( v51 == -1073741772 )
            *(_BYTE *)(v18 + 16) |= 0x40u;
          *(_QWORD *)(v18 + 200) = 0LL;
        }
        SectionInformation = PspSelectMachineForProcess(v134, v18, (__int16 *)&v140);
        if ( SectionInformation < 0 )
        {
          v48 = 4;
          goto LABEL_91;
        }
        v136 = (unsigned __int16)v140;
        if ( BYTE2(v140) )
          v19 |= 0x40u;
        if ( HIBYTE(v140) )
          v133 |= 0x20000u;
        v52 = *(void **)(v18 + 200);
        if ( v52 )
        {
          if ( *(char *)(v18 + 16) >= 0 )
          {
            if ( (v53 = RtlQueryImageFileKeyOption(v52, L"Debugger", 1u, &v126, 2u, &v128), v53 == -2147483643)
              || v53 >= 0 && v128 == 2 && (_WORD)v126
              || (v130 = 0,
                  RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), L"AppExecutionAliasRedirect", 4u, &v130, 4u, 0LL) >= 0)
              && v130 == 1 )
            {
              SectionInformation = -1073741767;
              v48 = 5;
              goto LABEL_91;
            }
          }
          v132 = 0;
          v54 = RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), L"UseLargePages", 4u, &v132, 4u, 0LL);
          v55 = v127;
          if ( v54 >= 0 )
          {
            if ( v132 )
            {
              v55 = v127 | 0x10;
              v127 = v55;
              a9 = v55;
              if ( (v19 & 0x40) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *(HANDLE *)(v18 + 200);
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v132 = 0;
                  if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4u, &v132, 4u, 0LL) >= 0 && v132 )
                  {
                    v55 |= 0x20u;
                    v127 = v55;
                    a9 = v55;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v156 )
          {
            PspReadIFEONodeOptions((__int64)v29, *(void **)(v18 + 200));
            v139 = v147;
          }
          v130 = 0;
          if ( RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), L"ForceWakeCharge", 4u, &v130, 4u, 0LL) >= 0 && v130 )
            v135 |= 0x40u;
          if ( RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), L"AllowedCpuSets", 3u, 0LL, 0, &v128) == -2147483643 )
          {
            v56 = v128;
            if ( v128 <= 0x100 && (v128 & 7) == 0 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
              P = Pool2;
              if ( !Pool2 )
              {
LABEL_129:
                SectionInformation = -1073741801;
                goto LABEL_178;
              }
              if ( RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), L"AllowedCpuSets", 3u, Pool2, v56, &v128) >= 0
                && (v128 & 7) == 0 )
              {
                v19 |= 0x200000u;
                v138 = v128 >> 3;
              }
            }
          }
          v184.Length = 48;
          v184.RootDirectory = *(HANDLE *)(v18 + 200);
          v184.Attributes = 576;
          v184.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v184.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v184) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle, (__int64)&v203);
            ObCloseHandle(Handle, 0);
            v181 = v205;
          }
          if ( RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), L"ImageExpansionMitigation", 4u, &v155, 4u, 0LL) >= 0
            && v155 == 2 )
          {
            _InterlockedOr((volatile signed __int32 *)v29 + 503, 4u);
          }
          if ( (v55 & 0x80000) != 0 )
            _InterlockedOr((volatile signed __int32 *)v29 + 503, 4u);
LABEL_145:
          if ( (v19 & 0x40) != 0 )
          {
            v58 = ExAllocatePool2(0x40uLL);
            *((_QWORD *)v29 + 98) = v58;
            if ( !v58 )
              goto LABEL_129;
            v59 = SessionId;
            v60 = v136;
            if ( !SessionId )
              v59 = PspWow64PickBestNtdll(v18);
            *(_DWORD *)(v58 + 8) = v59;
            v61 = (_QWORD *)*((_QWORD *)v29 + 98);
            if ( v61 )
              *v61 = 1LL;
            if ( (v55 & 0x800000) != 0 )
              _InterlockedOr((volatile signed __int32 *)v29 + 125, 0x200u);
          }
          else
          {
            v60 = v136;
          }
          *((_WORD *)v29 + 886) = v60;
          SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
          if ( SectionInformation < 0 )
            goto LABEL_178;
          v62 = 0;
          v63 = a2;
          if ( a2 )
          {
            if ( v18 && (*(_DWORD *)(v18 + 8) & 0x100LL) != 0 && *(_BYTE *)(v18 + 2) == 4 )
            {
              Privilege[0] = 14;
              v62 = 1;
            }
            v64 = a12;
            if ( a12 )
              Privilege[v62++] = 3;
            if ( (v55 & 0x30) != 0 )
              Privilege[v62++] = 4;
            if ( (v55 & 0x80u) != 0 )
            {
              IsSessionLeaderProcess = PspIsSessionLeaderProcess();
              v64 = a12;
              if ( !IsSessionLeaderProcess )
                Privilege[v62++] = 10;
            }
            if ( (v55 & 0x8400) != 0 )
              Privilege[v62++] = 7;
            if ( v62 )
            {
              v66 = RtlAcquirePrivilege(Privilege, v62, v64 != 0, &ReturnedState) < 0;
              v63 = a2;
              if ( !v66 )
                v19 |= 0x400u;
            }
            else
            {
              v63 = a2;
            }
          }
          if ( (v55 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v63) )
            goto LABEL_175;
          LOWORD(v126) = -1;
          *(_QWORD *)&v207.Count = 2097153LL;
          memset_0(&v207.8, 0, sizeof(v207.8));
          if ( v156 )
          {
            KeQueryAffinityProcess(v156, (__int64)&v207, 0LL, &v185, &v126);
            v69 = v126;
            v128 = (unsigned __int16)v126;
            v71 = KeNodeBlock[*((unsigned __int16 *)&v185 + (unsigned __int16)v126)];
            goto LABEL_203;
          }
          v68 = (__int64)v139;
          if ( !v139 )
          {
            if ( !v134 )
            {
              v69 = 0;
              v128 = 0;
              KeAddProcessorAffinityEx(&v207.Count, 0);
              goto LABEL_192;
            }
            if ( (*(_DWORD *)(v134 + 496) & 0x100000) == 0 )
            {
              v68 = PspSelectNodeForProcess((__int64)v157, v158, &v207);
              v139 = (_KPROCESS *)v68;
              memset_0(&v207.8, 0, 8LL * v207.Count);
              v207.Count = 1;
              v69 = KeSelectGroupFromNode(v68);
              v128 = v69;
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v69 )
              {
                v68 = 0LL;
                v139 = 0LL;
                v69 = 1;
                v128 = 1;
              }
              goto LABEL_192;
            }
            v135 |= 0x100000u;
            v68 = KeNodeBlock[(unsigned __int16)KeGetIdealNodeNumberProcess(v134)];
            v139 = (_KPROCESS *)v68;
          }
          v69 = KeSelectGroupFromNode(v68);
          v128 = v69;
LABEL_192:
          RtlpCopyAffinityEx(&v207, v207.Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
          if ( v68 )
            goto LABEL_204;
          v158 = 0LL;
          WORD4(v158) = v69;
          if ( v69 >= v207.Count )
            v70 = 0LL;
          else
            v70 = v207.Bitmap[v69];
          *(_QWORD *)&v158 = v70;
          v71 = KeSelectNodeForAffinity((__int64)&v158);
LABEL_203:
          v139 = (_KPROCESS *)v71;
LABEL_204:
          *((_DWORD *)v29 + 125) |= v133;
          *((_DWORD *)v29 + 124) |= v135;
          if ( v134 )
          {
            v147 = 0LL;
            v72 = 0;
            SessionId = 0;
            v19 &= ~0x20u;
            v73 = 0;
            LOBYTE(v126) = 0;
            if ( a12 )
            {
              v74 = SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.StateSaveArea, a2);
              v77 = v19 & 0xFFFFFDFF;
              v19 |= 0x200u;
              if ( !v74 )
                v19 = v77;
              v78 = v19;
              SectionInformation = SeIsTokenAssignableToProcess((__int64)Token, (char *)&v126, v75, v76);
              if ( SectionInformation < 0 )
                goto LABEL_176;
              v79 = (v19 >> 9) & 1;
              v73 = v126;
              if ( !(_BYTE)v126 && !v79 )
              {
                SectionInformation = -1073741727;
                LOWORD(v19) = v78;
                goto LABEL_176;
              }
              HIDWORD(TokenInformation) = v79;
              SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
              v19 = v78;
              if ( SectionInformation < 0 )
                goto LABEL_176;
              v80 = PsGetSessionIdEx((__int64)Process);
              v72 = SessionId;
              if ( SessionId != v80 )
              {
                if ( !HIDWORD(TokenInformation) )
                {
LABEL_175:
                  SectionInformation = -1073741727;
                  goto LABEL_176;
                }
                if ( (v127 & 0x80u) != 0 )
                {
                  SectionInformation = -1073741811;
                  goto LABEL_176;
                }
                v19 = v78 | 0x20;
              }
            }
            else if ( (v19 & 4) != 0 )
            {
              v72 = PsGetSessionIdEx(v134);
              v19 = v19 & 0xFFFFFFDF | ((unsigned int)PsGetSessionIdEx((__int64)Process) != v72 ? 0x20 : 0);
            }
            if ( (v19 & 0x20) != 0 )
            {
              SectionInformation = PspAttachSession(v72, (__int64)v206, &v147);
              if ( SectionInformation < 0 )
              {
                LOWORD(v19) = v19 & 0xFFDF;
                goto LABEL_176;
              }
              *((_DWORD *)v29 + 124) |= 0x80u;
            }
            if ( !a12 || v73 )
            {
              v82 = v134;
              if ( v73 )
                v82 = (ULONG_PTR)Process;
              PspInheritQuota((__int64)v29, v82);
            }
            else
            {
              SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v29, (__int64)Token);
              if ( SectionInformation < 0 )
              {
                if ( (v19 & 0x20) != 0 )
                  PspDetachSession((__int64)v147, (__int64)v206);
                goto LABEL_176;
              }
            }
            v83 = BYTE4(v203) & 1;
            v84 = *(_QWORD *)PspSiloMonitorLock.PriorityFloorCounts;
            if ( (BYTE4(v203) & 1) != 0 )
              v84 = *((_QWORD *)&v204 + 1);
            if ( (v127 & 0x400000) != 0 )
              v83 |= 0x10u;
            v85 = v139;
            v19 ^= (v19 ^ ((unsigned __int8)MmCreateProcessAddressSpace(
                                              (__int64)v157,
                                              v81,
                                              v84,
                                              v83,
                                              LOWORD(v139->Header.Lock) + 1,
                                              (__int64)v29) << 11)) & 0x800;
            if ( (v19 & 0x20) != 0 )
              PspDetachSession((__int64)v147, (__int64)v206);
            if ( (v19 & 0x800) == 0 )
              goto LABEL_239;
            v69 = v128;
          }
          else
          {
            PspInheritQuota((__int64)v29, 0LL);
            v29[352] = 1;
            SectionInformation = MmInitializeHandBuiltProcess(v86);
            if ( SectionInformation < 0 )
              goto LABEL_176;
            v85 = v139;
          }
          _InterlockedOr((volatile signed __int32 *)v29 + 125, 0x40000u);
          v189 = 0;
          LODWORD(v185) = 8;
          DWORD1(v185) = v69;
          *((_QWORD *)&v185 + 1) = &v207;
          v186 = v85;
          SessionSchedulingGroupByProcess = PsGetSessionSchedulingGroupByProcess((__int64)v29);
          v88 = v87 | 2;
          if ( (v19 & 0x10000) == 0 )
            v88 = v87;
          v188 = v88;
          v190 = &v29[v164];
          v191 = (unsigned int)v171;
          SectionInformation = KeInitializeProcess((struct _KPROCESS *)v29, (__int64)&v185);
          if ( SectionInformation < 0 )
            goto LABEL_176;
          if ( !v18 || (v19 & 2) != 0 )
          {
            v90 = 0;
            v89 = 0LL;
          }
          else
          {
            v153 = *(_DWORD *)(v18 + 384);
            v152 = *(_DWORD *)(v18 + 388);
            v180 = *(_QWORD *)(v18 + 408);
            v151 = *(_DWORD *)(v18 + 392);
            v179 = *(_QWORD *)(v18 + 216);
            v89 = *(_DWORD **)(v18 + 400);
            v90 = *(_DWORD *)(v18 + 396);
            v91 = *(_QWORD *)(v18 + 184);
            if ( v91 && SepRmCapTableLock.Spare35[0] && (int)guard_dispatch_icall_no_overrides(v91, (__int64)v208) >= 0 )
            {
              if ( !v208[0] && v89 && v90 == 524 )
              {
                v92 = v208;
                v93 = 4LL;
                do
                {
                  *(_OWORD *)v92 = *(_OWORD *)v89;
                  *((_OWORD *)v92 + 1) = *((_OWORD *)v89 + 1);
                  *((_OWORD *)v92 + 2) = *((_OWORD *)v89 + 2);
                  *((_OWORD *)v92 + 3) = *((_OWORD *)v89 + 3);
                  *((_OWORD *)v92 + 4) = *((_OWORD *)v89 + 4);
                  *((_OWORD *)v92 + 5) = *((_OWORD *)v89 + 5);
                  *((_OWORD *)v92 + 6) = *((_OWORD *)v89 + 6);
                  v92 += 32;
                  *((_OWORD *)v92 - 1) = *((_OWORD *)v89 + 7);
                  v89 += 32;
                  --v93;
                }
                while ( v93 );
                *(_QWORD *)v92 = *(_QWORD *)v89;
                v92[2] = v89[2];
              }
              v89 = v208;
              v90 = 536;
            }
          }
          if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
            && v18
            && _bittest64((const signed __int64 *)(v18 + 8), 0x22u) )
          {
            v178 = v18 + 504;
          }
          v124 = v90;
          v94 = v134;
          SectionInformation = PspInitializeProcessSecurity(
                                 v134,
                                 (_DWORD)v29,
                                 (_DWORD)Token,
                                 a12,
                                 v153,
                                 (v19 >> 4) & 1,
                                 HIWORD(v19) & 1,
                                 v152,
                                 (__int64)v89,
                                 v124,
                                 v180,
                                 v151,
                                 v179,
                                 v178,
                                 v172);
          if ( SectionInformation < 0 )
            goto LABEL_176;
          v29[839] = 2;
          if ( v94 )
          {
            v96 = *(_BYTE *)(v94 + 839);
            if ( v96 == 1 || v96 == 5 )
              v29[839] = v96;
            if ( v18 )
              v97 = *(_QWORD *)(v18 + 296);
            else
              LODWORD(v97) = 0;
            v98 = v18 ? *(_DWORD *)(v18 + 292) : 0;
            inited = ObInitProcess(
                       (struct _EX_RUNDOWN_REF *)(v94 & -(__int64)((v127 & 4) != 0)),
                       (__int64)v29,
                       v98,
                       v97);
          }
          else
          {
            *((_QWORD *)v29 + 96) = Process[1].KernelTime;
            inited = MmInitializeHandBuiltProcess2((_KPROCESS *)v29, v95, v40);
          }
          SectionInformation = inited;
          if ( inited < 0 )
            goto LABEL_176;
          if ( (v203 & 7) != 0 )
            PspApplyIFEOPerfOptions((__int64)v29, (unsigned int *)&v203, a2, (__int64)v41);
          if ( (v19 & 0x200000) != 0 )
            KeSetCpuSetsProcess((__int64)v29, v138, (__int64)P, 1, 0);
          if ( (BYTE4(v203) & 2) != 0 )
            KeSetExpectedConcurrencyCountProcess((struct _KPROCESS *)v29, v181);
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 8) & 0x100LL) != 0 )
            {
              SectionInformation = PspSetProcessPriorityClass((__int64)v29, *(_BYTE *)(v18 + 2), 0LL, a2);
              if ( SectionInformation < 0 )
                goto LABEL_176;
            }
          }
          v29[144] = PspComputeQuantumAndPriority((__int64)v29, 0LL, v129, 0LL, 0LL);
          v29[145] = v129[0];
          v138 = 0;
          PspReadIFEOMitigationOptions(v18, (__int64)&v198);
          *(__m128i *)Privilege = v198;
          v161 = v199;
          v158 = *(_OWORD *)&stru_140FC11F0.KernelStack;
          SchedulingGroup = stru_140FC11F0.SchedulingGroup;
          PspInheritMitigationOptions(&v158, (__int128 *)Privilege, (__int64)&v198);
          PspReadIFEOMitigationAuditOptions(v18, (__int64)&v200);
          *(_OWORD *)Privilege = v200;
          v161 = (unsigned __int64)v201;
          v158 = *(_OWORD *)&stru_140FC11F0.SchedulerApcFill5[72];
          SchedulingGroup = *(_KSCHEDULING_GROUP *volatile *)&stru_140FC11F0.SuspendEvent.Header.Lock;
          PspInheritMitigationAuditOptions(&v158, (__int128 *)Privilege, (__int64)&v200);
          v100 = (HIWORD(v198.m128i_i64[0]) & 3) << 14;
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 8) & 0x10000) != 0 )
            {
              *(_OWORD *)Privilege = *(_OWORD *)(v18 + 336);
              v161 = *(_QWORD *)(v18 + 352);
              v158 = (__int128)v198;
              SchedulingGroup = (_KSCHEDULING_GROUP *volatile)v199;
              PspInheritMitigationOptions(&v158, (__int128 *)Privilege, (__int64)&v198);
            }
            if ( (*(_DWORD *)(v18 + 8) & 0x8000000) != 0 )
            {
              *(_OWORD *)Privilege = *(_OWORD *)(v18 + 448);
              v161 = *(_QWORD *)(v18 + 464);
              v158 = v200;
              SchedulingGroup = v201;
              PspInheritMitigationAuditOptions(&v158, (__int128 *)Privilege, (__int64)&v200);
            }
          }
          if ( (_DWORD)TokenInformation )
            LOWORD(v100) = v100 | 4;
          v101 = v100 | 0x40;
          if ( (v100 & 4) == 0 )
            v101 = v100;
          if ( (v101 & 0x3FC0) != 0 )
            PspHardenMitigationOptions((__int128 *)v198.m128i_i8);
          if ( !KeIsUserCetAllowed() )
            v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
          if ( (v131 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
            LODWORD(v150) = 0;
          if ( (v19 & 2) != 0 )
          {
            v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
            if ( (a10 & 2) != 0 )
              v102 = v198.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
            else
              v102 = v198.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
            v198.m128i_i64[0] = v102;
          }
          v103 = v134;
          if ( (v19 & 4) != 0 && (*(_DWORD *)(v134 + 1876) & 0x4000) == 0 )
            v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
          if ( (v19 & 0x40) != 0 )
            v198.m128i_i64[1] = v198.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
          v199 = v199 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
          if ( !KeIsCoreIsolationMitigationPolicyEnforceable() )
            v199 = v104 & 0xFFFFFFFFFCFFFFFFuLL | 0x2000000;
          PspApplyMitigationOptions((__int64)v29, v103, &v198, &v200, v105);
          if ( v18 )
          {
            PspApplyWin32kFilterOptions((__int64)v29, v18);
            *((_DWORD *)v29 + 488) = *(_DWORD *)(v18 + 440);
            *(__m128i *)(v18 + 336) = v198;
            *(_QWORD *)(v18 + 352) = v199;
            *(_OWORD *)(v18 + 448) = v200;
            *(_QWORD *)(v18 + 464) = v201;
          }
          v172 = 0LL;
          v171 = 0LL;
          SectionInformation = AppModelPolicy_GetPolicy_Internal(
                                 Token,
                                 1,
                                 &v154,
                                 (_PS_PKG_CLAIM *)&v171,
                                 (unsigned __int64 *)&v172);
          SmProcessCreateNotification((__int64)v29);
          if ( (*((_DWORD *)v29 + 469) & 0x4000) != 0 )
          {
            SectionInformation = KeInitializeProcessUserCetLogging((__int64)v29);
            if ( SectionInformation < 0 )
              goto LABEL_176;
          }
          if ( (v127 & 0x80u) != 0 && !PspIsSessionLeaderProcess() && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
            goto LABEL_175;
          if ( (v19 & 1) == 0 )
          {
            if ( (v19 & 4) == 0 )
            {
              SectionInformation = PspInitializeFullProcessImageName(v18, (__int64)v29);
              if ( SectionInformation >= 0 )
              {
                v106 = MmInitializeProcessAddressSpace((__int64)v29, 0LL, (__int64)v146, &a9, 0);
                SectionInformation = v106;
                if ( v106 >= 0 )
                {
                  v138 = v106;
                  if ( v18 )
                  {
                    if ( (v19 & 2) == 0 )
                    {
                      v107 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v146) + 32LL);
                      v108 = *((_QWORD *)v29 + 86);
                      if ( v107 != v108 )
                        *(_QWORD *)(v18 + 56) += v108 - v107;
                    }
                  }
                  v19 |= 0x80u;
                  v109 = a9;
                  goto LABEL_337;
                }
              }
LABEL_176:
              if ( (v19 & 0x400) != 0 )
                RtlReleasePrivilege(ReturnedState);
              goto LABEL_178;
            }
            *((_QWORD *)v29 + 86) = *(_QWORD *)(v103 + 688);
            SectionInformation = MmInitializeProcessAddressSpace((__int64)v29, v103, 0LL, &a9, (v19 >> 3) & 1);
            if ( SectionInformation < 0 )
              goto LABEL_176;
            v110 = *(unsigned __int16 *)(*(_QWORD *)(v103 + 848) + 2LL);
            v111 = (void *)ExAllocatePool2(0x40uLL);
            *((_QWORD *)v29 + 106) = v111;
            if ( !v111 )
            {
LABEL_239:
              SectionInformation = -1073741670;
              goto LABEL_176;
            }
            v112 = v110 + 16;
            v103 = v134;
            memmove(v111, *(const void **)(v134 + 848), v112);
            *(_QWORD *)(*((_QWORD *)v29 + 106) + 8LL) = *((_QWORD *)v29 + 106) + 16LL;
            *((_DWORD *)v29 + 174) = *(_DWORD *)(v103 + 696);
            if ( (*(_DWORD *)(v103 + 496) & 0x1000000) != 0 )
              *((_DWORD *)v29 + 124) |= 0x1000000u;
            v109 = a9;
            v127 = a9;
            if ( (a9 & 0x1000) == 0 )
            {
LABEL_337:
              if ( (v19 & 1) == 0 )
              {
                v19 = v19 & 0xFFFFEFFF | ((v109 & 0x10) << 8);
                if ( (v19 & 2) == 0 )
                  v19 |= 0x100u;
              }
              if ( (v19 & 0x400) != 0 )
                RtlReleasePrivilege(ReturnedState);
              if ( *((_WORD *)v29 + 886) == 332 )
                *((_DWORD *)v29 + 34) |= 1u;
              if ( (v19 & 0x80u) != 0 )
              {
                if ( v18 )
                {
                  if ( (v19 & 2) == 0 )
                  {
                    SectionInformation = PspSetupReservedUserMappings((_KPROCESS *)v29, (__int64)v206, (_QWORD *)v18);
                    if ( SectionInformation < 0 )
                      goto LABEL_178;
                  }
                }
              }
              if ( (v19 & 0x100) != 0 )
              {
                PsQueryProcessAttributes((__int64)v29, 0LL, (_BYTE *)v129 + 1, v41);
                *((_QWORD *)&Src[0] + 1) = -1LL;
                v40 = 1LL;
                BYTE3(Src[0]) = (4 * (((v19 & 0x2000) != 0) | ((v29[1530] & 7) != 1 ? 0 : 0x10))) & 0xCF | BYTE3(Src[0]) & 0x88 | ((v19 & 0x1000) != 0) | ((v29[1530] & 7) != 0 ? 2 : 0) | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | HIBYTE(v129[0]) & 1));
                if ( (v19 & 4) != 0 )
                {
                  v113 = *(void **)(v103 + 736);
                  *((_QWORD *)v29 + 92) = v113;
                  if ( (v19 & 0x10) == 0 )
                  {
                    LOBYTE(Src[0]) = 1;
                    KiStackAttachProcess((_KPROCESS *)v29, 0, (__int64)v206);
                    if ( MmSecureVirtualMemory(v113, 0x7D8uLL, 4u) )
                      RtlCopyToUser(v113, Src, 0x10uLL);
                    else
                      SectionInformation = -1073741503;
                    if ( SectionInformation >= 0 )
                    {
                      v114 = (void **)*((_QWORD *)v29 + 98);
                      if ( v114 )
                      {
                        v115 = *((_WORD *)v29 + 886);
                        if ( v115 == 332 || (v116 = v115 == 452, v117 = 0, v116) )
                          v117 = 1;
                        if ( v117 )
                        {
                          v118 = *v114;
                          if ( MmSecureVirtualMemory(v118, 0x490uLL, 4u) )
                          {
                            HIDWORD(v162) = -1;
                            LOBYTE(v162) = 1;
                            BYTE3(v162) = BYTE3(Src[0]);
                            RtlCopyToUser(v118, &v162, 8uLL);
                          }
                          else
                          {
                            SectionInformation = -1073741503;
                          }
                        }
                      }
                    }
                    KiUnstackDetachProcess((__int64)v206, 0);
                    if ( SectionInformation < 0 )
                      goto LABEL_178;
                  }
                }
                else
                {
                  SectionInformation = MmCreatePeb((__int64)v29, (char *)Src, (_QWORD *)v29 + 92, (__int64)&v202);
                  if ( SectionInformation < 0 )
                  {
                    *((_QWORD *)v29 + 92) = 0LL;
                    goto LABEL_178;
                  }
                  if ( (_QWORD)v202 )
                  {
                    _InterlockedAnd((volatile signed __int32 *)v29 + 124, 0xFFCFFFFF);
                    PspSetProcessAffinitySafe((struct _KPROCESS *)v29, 1, 0LL, (__int64 *)&v202, (int *)&v166);
                  }
                }
              }
              if ( (v19 & 0x80u) == 0 || !v18 || (v19 & 2) != 0 )
              {
                if ( (v19 & 0x110) == 0x100 )
                {
                  SectionInformation = 0;
                  KiStackAttachProcess((_KPROCESS *)v29, 0, (__int64)v206);
                  KeCopyXfdMaskToPeb(v29);
                  v119 = CurrentThread;
                  PspUpdatePebForAffinityChange((__int64)CurrentThread, (__int64)v29);
                  if ( (v19 & 0x80u) != 0 )
                  {
                    SectionInformation = MmMapApiSetView((__int64)v29);
                    if ( SectionInformation >= 0 )
                    {
                      SectionInformation = PspMapSiloSharedDataView((__int64)v29);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspPrepareSystemDllInitBlock(0, 0LL);
                        if ( SectionInformation >= 0 )
                        {
                          if ( *((_QWORD *)v29 + 98) )
                          {
                            ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v29);
                            SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                          }
                        }
                      }
                    }
                  }
                  KiUnstackDetachProcess((__int64)v206, 0);
LABEL_373:
                  if ( SectionInformation < 0 )
                    goto LABEL_178;
                  PspLockProcessExclusive((__int64)v29, (__int64)v119, v40, v41);
                  v120 = ExCreateHandleEx((unsigned int *)PspCidTable, (__int64)v29, 0, 0LL, 0LL);
                  v148 = v120;
                  if ( !v120 )
                  {
                    PspUnlockProcessExclusive((__int64)v29, (__int64)v119);
                    SectionInformation = -1073741670;
                    goto LABEL_178;
                  }
                  if ( (v19 & 0x10000) != 0 )
                  {
                    SectionInformation = MmGetSectionStrongImageReference(0LL, 0, *((void **)v29 + 85), &v176);
                    v122 = (__int64)v29;
                    if ( SectionInformation < 0 )
                    {
LABEL_386:
                      PspUnlockProcessExclusive(v122, (__int64)v119);
                      goto LABEL_178;
                    }
                    SectionInformation = KeSecureProcess(
                                           (_KPROCESS *)v29,
                                           *((_QWORD *)v29 + 92),
                                           v148,
                                           *(_QWORD *)(v18 + 192),
                                           v176,
                                           *(struct _MDL **)(v18 + 360),
                                           *(unsigned int *)(v18 + 376));
                    if ( SectionInformation < 0 )
                    {
                      v122 = (__int64)v29;
                      goto LABEL_386;
                    }
                    v120 = v148;
                  }
                  if ( KeQuerySystemTimeUnsafe() )
                    KeQuerySystemTimePrecise((_QWORD *)v29 + 63);
                  else
                    *((_QWORD *)v29 + 63) = MEMORY[0xFFFFF78000000014];
                  *((_QWORD *)v29 + 58) = v120;
                  *((_QWORD *)v29 + 208) = MEMORY[0xFFFFF78000000008];
                  *((_QWORD *)v29 + 209) = KiQueryUnbiasedInterruptTime();
                  *((_QWORD *)v29 + 211) = *((_QWORD *)v29 + 208);
                  *v182 = v29;
                  SectionInformation = v138;
LABEL_181:
                  if ( P )
                    ExFreePoolWithTag(P, 0x73437350u);
                  if ( SepRmCapTableLock.Spare35[1] )
                    guard_dispatch_icall_no_overrides((__int64)v208, v67);
                  return (unsigned int)SectionInformation;
                }
              }
              else
              {
                SectionInformation = PspSetupUserProcessAddressSpace(v134, (_KPROCESS *)v29, (__int64)v206, v18);
              }
              v119 = CurrentThread;
              goto LABEL_373;
            }
            *((_QWORD *)v29 + 85) = 0LL;
            ObfDereferenceObject(v146);
          }
          v109 = v127;
          goto LABEL_337;
        }
      }
    }
    v55 = v127;
    goto LABEL_145;
  }
  return result;
}
