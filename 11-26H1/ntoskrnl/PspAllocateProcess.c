/*
 * XREFs of PspAllocateProcess @ 0x140964C24
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     KeQuerySystemTimePrecise @ 0x14021B070 (KeQuerySystemTimePrecise.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x14045FB18 (AppModelPolicy_GetPolicy_Internal.c)
 *     KeQueryAffinityProcess @ 0x140469110 (KeQueryAffinityProcess.c)
 *     PoEnergyEstimationEnabled @ 0x14047C5D0 (PoEnergyEstimationEnabled.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     KeQuerySystemTimeUnsafe @ 0x1404B2F74 (KeQuerySystemTimeUnsafe.c)
 *     KeSelectNodeForAffinity @ 0x1404B4978 (KeSelectNodeForAffinity.c)
 *     MmGetDefaultPagePriority @ 0x1404B6960 (MmGetDefaultPagePriority.c)
 *     PspDetachSession @ 0x1404B6D7C (PspDetachSession.c)
 *     KeQueryMaximumGroupCount @ 0x1404BB300 (KeQueryMaximumGroupCount.c)
 *     KeQueryActiveGroupCount @ 0x1404BB3D0 (KeQueryActiveGroupCount.c)
 *     PspWow64PickBestNtdll @ 0x1404D5620 (PspWow64PickBestNtdll.c)
 *     KeIsUserCetAllowed @ 0x1404D6B7C (KeIsUserCetAllowed.c)
 *     MmSetMemoryPriorityProcess @ 0x1404D726C (MmSetMemoryPriorityProcess.c)
 *     KeSizeOfKProcessExtension @ 0x1404D80E0 (KeSizeOfKProcessExtension.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x1404DA3F8 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     KeCopyXfdMaskToPeb @ 0x1404E8568 (KeCopyXfdMaskToPeb.c)
 *     KeGetIdealNodeNumberProcess @ 0x1404F0804 (KeGetIdealNodeNumberProcess.c)
 *     KeSetCpuSetsProcess @ 0x14052D934 (KeSetCpuSetsProcess.c)
 *     KeSecureProcess @ 0x1405E5930 (KeSecureProcess.c)
 *     KeSelectGroupFromNode @ 0x1405EEA5C (KeSelectGroupFromNode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspApplyIFEOPerfOptions @ 0x140778D9C (PspApplyIFEOPerfOptions.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     PspSelectNodeForProcess @ 0x1407F2DF0 (PspSelectNodeForProcess.c)
 *     MmMapApiSetView @ 0x140863ED4 (MmMapApiSetView.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x14092C1A0 (ExCreateHandleEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140963A54 (MmInitializeHandBuiltProcess.c)
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140964050 (MmInitializeHandBuiltProcess2.c)
 *     PspApplyMitigationOptions @ 0x140964120 (PspApplyMitigationOptions.c)
 *     ObRetagReferences @ 0x140966310 (ObRetagReferences.c)
 *     PspReadIFEONodeOptions @ 0x14096635C (PspReadIFEONodeOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140966404 (PspReadIFEOMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140966488 (PspReadIFEOMitigationOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1409665B0 (RtlQueryImageFileKeyOption.c)
 *     PspComputeQuantum @ 0x140966B6C (PspComputeQuantum.c)
 *     PspInheritMitigationAuditOptions @ 0x140966BD4 (PspInheritMitigationAuditOptions.c)
 *     PsGetSessionSchedulingGroupByProcess @ 0x140966CF4 (PsGetSessionSchedulingGroupByProcess.c)
 *     PspInitializeFullProcessImageName @ 0x140966D20 (PspInitializeFullProcessImageName.c)
 *     SmProcessCreateNotification @ 0x140966F58 (SmProcessCreateNotification.c)
 *     PsQueryProcessAttributes @ 0x1409675B0 (PsQueryProcessAttributes.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     RtlAcquirePrivilege @ 0x1409D2010 (RtlAcquirePrivilege.c)
 *     PsWow64GetProcessNtdllType @ 0x1409EA77C (PsWow64GetProcessNtdllType.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PspInitializeProcessSecurity @ 0x140A2B070 (PspInitializeProcessSecurity.c)
 *     SeQuerySessionIdToken @ 0x140A820F0 (SeQuerySessionIdToken.c)
 *     PspInheritMitigationOptions @ 0x140A88514 (PspInheritMitigationOptions.c)
 *     PspSelectMachineForProcess @ 0x140A9174C (PspSelectMachineForProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140A9A628 (PspPrepareSystemDllInitBlock.c)
 *     PspUpdatePebForAffinityChange @ 0x140A9AA04 (PspUpdatePebForAffinityChange.c)
 *     PspMapSiloSharedDataView @ 0x140A9B2D8 (PspMapSiloSharedDataView.c)
 *     MmSecureVirtualMemory @ 0x140AB0320 (MmSecureVirtualMemory.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140AB4D48 (RtlpOpenImageFileOptionsKeyEx.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB7984 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140AB8F60 (PspAssignProcessQuotaBlock.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 *     MmCreatePeb @ 0x140ACA4F0 (MmCreatePeb.c)
 *     PspSetupReservedUserMappings @ 0x140ADE30C (PspSetupReservedUserMappings.c)
 *     PspUpdateCreateInfo @ 0x140AE09B4 (PspUpdateCreateInfo.c)
 *     RtlReleasePrivilege @ 0x140AEBFD0 (RtlReleasePrivilege.c)
 *     PoEnergyContextInitialize @ 0x140AF3EE8 (PoEnergyContextInitialize.c)
 *     PspInheritQuota @ 0x140AF93FC (PspInheritQuota.c)
 *     PspSetProcessAffinitySafe @ 0x140AFC7BC (PspSetProcessAffinitySafe.c)
 *     PspHardenMitigationOptions @ 0x140AFD150 (PspHardenMitigationOptions.c)
 *     PspApplyWin32kFilterOptions @ 0x140B02408 (PspApplyWin32kFilterOptions.c)
 *     PspSetProcessPriorityClass @ 0x140B10240 (PspSetProcessPriorityClass.c)
 *     PspIsSessionLeaderProcess @ 0x140B144C4 (PspIsSessionLeaderProcess.c)
 *     KeInitializeProcessUserCetLogging @ 0x140B1E10C (KeInitializeProcessUserCetLogging.c)
 *     PspAttachSession @ 0x140B216C8 (PspAttachSession.c)
 *     MmGetSectionStrongImageReference @ 0x140B54148 (MmGetSectionStrongImageReference.c)
 *     PspReadIFEOPerfOptions @ 0x140B66284 (PspReadIFEOPerfOptions.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  int v20; // ecx
  unsigned int v21; // esi
  USHORT MaximumGroupCount; // ax
  unsigned int v23; // r12d
  __int64 v24; // rcx
  int v25; // r8d
  __int64 result; // rax
  __int64 v27; // rdx
  char *v28; // rsi
  int v29; // eax
  char v30; // cl
  __int16 v31; // cx
  __int64 v32; // rax
  int v33; // eax
  ULONG_PTR v34; // r12
  int v35; // ecx
  int DefaultPagePriority; // edx
  PVOID v37; // rdx
  PVOID v38; // rcx
  unsigned int v39; // r12d
  int v40; // r12d
  __int16 v41; // r11
  int SectionInformation; // ebx
  __int64 v43; // r8
  struct _KLOCK_ENTRIES *v44; // r9
  unsigned int v45; // r10d
  KPROCESSOR_MODE v46; // al
  unsigned __int16 v47; // r12
  __int64 v48; // rax
  unsigned __int16 *v49; // rbx
  int v50; // r8d
  int v51; // ecx
  _DWORD *v52; // rbx
  ULONG_PTR v53; // r12
  __int64 v54; // rdx
  int inited; // eax
  __int64 v56; // rdx
  char v57; // al
  __int128 v58; // xmm2
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // xmm3_8
  int v60; // r11d
  unsigned __int64 v61; // xmm0_8
  __m128i v62; // xmm1
  char v63; // cl
  unsigned __int64 v64; // r9
  char v65; // r10
  unsigned __int8 v66; // r8
  int v67; // ebx
  __int16 v68; // r12
  ULONG_PTR v69; // r12
  __int64 v70; // rdx
  int v71; // ecx
  int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  char v75; // cl
  __int64 v76; // rdx
  __int64 v77; // rcx
  _DWORD *v78; // rcx
  __int64 v79; // rax
  char *v80; // rcx
  void *v81; // rax
  char v82; // al
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r8
  int v90; // eax
  void *v91; // rcx
  int ImageFileKeyOption; // eax
  int v93; // ebx
  __int64 Pool2; // r10
  int v95; // eax
  _QWORD *v96; // rax
  int v97; // ecx
  int IsSessionLeaderProcess; // eax
  bool v99; // sf
  __int64 v100; // rbx
  unsigned __int64 v101; // rcx
  unsigned int v102; // ebx
  BOOLEAN v103; // al
  unsigned int v104; // ecx
  unsigned int v105; // r12d
  int v106; // r14d
  int v107; // eax
  int v108; // edx
  ULONG_PTR v109; // rdx
  int v110; // r9d
  int v111; // r8d
  __int64 v112; // r9
  __int64 v113; // r8
  unsigned __int64 v114; // rax
  __int64 v115; // r12
  void *v116; // rax
  size_t v117; // r8
  void *v118; // r12
  void **v119; // r12
  __int16 v120; // ax
  bool v121; // zf
  char v122; // al
  void *v123; // r12
  __int64 v124; // r13
  unsigned int ProcessNtdllType; // eax
  __int64 v126; // rbx
  __int64 v127; // rcx
  __int64 v128; // [rsp+20h] [rbp-738h]
  _WORD v130[2]; // [rsp+74h] [rbp-6E4h] BYREF
  int v131; // [rsp+78h] [rbp-6E0h]
  int v132; // [rsp+7Ch] [rbp-6DCh]
  unsigned int v133; // [rsp+80h] [rbp-6D8h] BYREF
  char v134; // [rsp+84h] [rbp-6D4h] BYREF
  unsigned int v135; // [rsp+88h] [rbp-6D0h]
  __int16 v136; // [rsp+8Ch] [rbp-6CCh]
  int v137; // [rsp+90h] [rbp-6C8h]
  int v138; // [rsp+94h] [rbp-6C4h]
  ULONG_PTR v139; // [rsp+98h] [rbp-6C0h]
  int v140; // [rsp+A0h] [rbp-6B8h]
  int v141; // [rsp+A4h] [rbp-6B4h]
  ULONG SessionId; // [rsp+A8h] [rbp-6B0h] BYREF
  unsigned int v143; // [rsp+ACh] [rbp-6ACh]
  unsigned __int16 *v144; // [rsp+B0h] [rbp-6A8h]
  int v145; // [rsp+B8h] [rbp-6A0h] BYREF
  int v146; // [rsp+BCh] [rbp-69Ch]
  int v147; // [rsp+C0h] [rbp-698h]
  int v148; // [rsp+C4h] [rbp-694h]
  unsigned int v149; // [rsp+C8h] [rbp-690h]
  int v150; // [rsp+CCh] [rbp-68Ch]
  int v151; // [rsp+D0h] [rbp-688h]
  _BYTE TokenInformation[12]; // [rsp+D4h] [rbp-684h] BYREF
  PVOID v153; // [rsp+E0h] [rbp-678h]
  unsigned __int16 *v154; // [rsp+E8h] [rbp-670h] BYREF
  __int64 v155; // [rsp+F0h] [rbp-668h]
  __int128 v156; // [rsp+100h] [rbp-658h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp-648h]
  PACCESS_TOKEN Token; // [rsp+120h] [rbp-638h]
  __int64 v159; // [rsp+128h] [rbp-630h]
  unsigned int v160; // [rsp+130h] [rbp-628h]
  int v161; // [rsp+134h] [rbp-624h]
  int v162; // [rsp+138h] [rbp-620h]
  int v163; // [rsp+13Ch] [rbp-61Ch]
  int v164; // [rsp+140h] [rbp-618h] BYREF
  PVOID v165; // [rsp+148h] [rbp-610h]
  ULONG_PTR v166; // [rsp+150h] [rbp-608h]
  __int64 v167; // [rsp+158h] [rbp-600h] BYREF
  PVOID Object; // [rsp+160h] [rbp-5F8h] BYREF
  __int64 v169; // [rsp+168h] [rbp-5F0h] BYREF
  HANDLE KeyHandle; // [rsp+170h] [rbp-5E8h] BYREF
  HANDLE Handle; // [rsp+180h] [rbp-5D8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+188h] [rbp-5D0h]
  PVOID v173; // [rsp+190h] [rbp-5C8h] BYREF
  PVOID P; // [rsp+198h] [rbp-5C0h]
  __int64 v175; // [rsp+1A0h] [rbp-5B8h] BYREF
  __int128 Src; // [rsp+1A8h] [rbp-5B0h] BYREF
  __int128 v177; // [rsp+1C0h] [rbp-598h] BYREF
  _KSCHEDULING_GROUP *volatile v178; // [rsp+1D0h] [rbp-588h]
  __int64 v179; // [rsp+1E0h] [rbp-578h]
  ULONG_PTR v180; // [rsp+1F0h] [rbp-568h]
  __int64 v181; // [rsp+200h] [rbp-558h]
  __int64 v182; // [rsp+210h] [rbp-548h] BYREF
  __int64 v183; // [rsp+218h] [rbp-540h]
  __int64 v184; // [rsp+220h] [rbp-538h]
  __int64 v185; // [rsp+228h] [rbp-530h]
  __int64 v186; // [rsp+230h] [rbp-528h]
  _QWORD *v187; // [rsp+238h] [rbp-520h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+240h] [rbp-518h] BYREF
  OBJECT_ATTRIBUTES v189; // [rsp+270h] [rbp-4E8h] BYREF
  __int128 v190; // [rsp+2A0h] [rbp-4B8h] BYREF
  unsigned __int16 *v191; // [rsp+2B0h] [rbp-4A8h]
  __int64 SessionSchedulingGroupByProcess; // [rsp+2B8h] [rbp-4A0h]
  int v193; // [rsp+2C0h] [rbp-498h]
  int v194; // [rsp+2C4h] [rbp-494h]
  char *v195; // [rsp+2C8h] [rbp-490h]
  __int64 v196; // [rsp+2D0h] [rbp-488h]
  __int64 v197[4]; // [rsp+2E0h] [rbp-478h] BYREF
  unsigned __int16 v198; // [rsp+304h] [rbp-454h]
  unsigned __int16 v199; // [rsp+306h] [rbp-452h]
  __int16 v200; // [rsp+30Eh] [rbp-44Ah]
  char v201; // [rsp+313h] [rbp-445h]
  int v202; // [rsp+320h] [rbp-438h]
  __m128i v203; // [rsp+330h] [rbp-428h] BYREF
  unsigned __int64 v204; // [rsp+340h] [rbp-418h]
  __int128 v205; // [rsp+350h] [rbp-408h] BYREF
  __int128 v206; // [rsp+360h] [rbp-3F8h]
  __int64 v207; // [rsp+370h] [rbp-3E8h]
  __int128 v208; // [rsp+380h] [rbp-3D8h] BYREF
  struct _LIST_ENTRY *v209; // [rsp+390h] [rbp-3C8h]
  __int128 v210; // [rsp+398h] [rbp-3C0h]
  _OWORD v211[3]; // [rsp+3A8h] [rbp-3B0h] BYREF
  struct _KAFFINITY_EX v212; // [rsp+3E0h] [rbp-378h] BYREF
  _DWORD v213[136]; // [rsp+4F0h] [rbp-268h] BYREF

  v159 = a3;
  v139 = a1;
  v180 = a1;
  v153 = a7;
  Token = a8;
  v18 = a11;
  v181 = a11;
  v165 = a13;
  *(_QWORD *)&v177 = a14;
  v175 = a15;
  v187 = a16;
  LODWORD(v169) = 0;
  memset(v211, 0, sizeof(v211));
  v213[131] = 0;
  memset(&ObjectAttributes, 0, 44);
  v147 = 0;
  v210 = 0LL;
  Src = 0LL;
  v167 = 0LL;
  KeyHandle = 0LL;
  memset_0(&v212, 0, sizeof(v212));
  v19 = 0;
  v131 = 0;
  v164 = 0;
  v145 = 0;
  v203 = 0LL;
  v204 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v134 = 0;
  memset(&v189, 0, 44);
  Handle = 0LL;
  Object = 0LL;
  v130[0] = 0;
  v133 = 0;
  memset_0(v197, 0, 0x48uLL);
  *(_DWORD *)TokenInformation = 0;
  v182 = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&TokenInformation[4] = CurrentThread->ApcState.Process;
  v144 = 0LL;
  v154 = 0LL;
  P = 0LL;
  v143 = 0;
  v138 = 0;
  v140 = 0;
  v151 = 0;
  v150 = 0;
  v141 = 34404;
  SessionId = 0;
  v163 = 0;
  v162 = 0;
  v146 = 0;
  v184 = 0LL;
  v161 = 0;
  v185 = 0LL;
  v136 = 0;
  v155 = 0LL;
  memset_0(v213, 0, 0x218uLL);
  v132 = a9;
  if ( (a9 & 0x800) == 0 )
  {
    if ( a7 )
      goto LABEL_3;
    v19 = a1 != 0 ? 4 : 1;
    goto LABEL_213;
  }
  v19 = 2;
  v131 = 2;
  if ( (a9 & 0x2000) != 0 )
  {
    v19 = 6;
    v131 = 6;
    if ( (a9 & 0x4000) != 0 )
    {
      v19 = 14;
LABEL_213:
      v131 = v19;
    }
  }
LABEL_3:
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
  v166 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( v18 && (*(_DWORD *)(v18 + 8) & 0x2000LL) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) == 0 )
    {
      v144 = (unsigned __int16 *)KeNodeBlock[*(unsigned __int16 *)(v18 + 170)];
      v154 = v144;
      v166 = 0LL;
      goto LABEL_7;
    }
    return 3221225520LL;
  }
  if ( a1 )
  {
    v166 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 496) & 0x200000) != 0 )
    {
      v166 = a1;
      v140 = 0x200000;
    }
  }
LABEL_7:
  if ( v18 && (*(_DWORD *)(v18 + 8) & 0x40000) != 0 )
  {
    v19 |= 0x10000u;
    v131 = v19;
    *(_BYTE *)(v18 + 16) &= ~0x10u;
  }
  v183 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  v207 = 0LL;
  v173 = 0LL;
  v20 = 2112;
  v135 = 0;
  v179 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v20 = 2152;
    v19 |= 0x8000u;
    v131 = v19;
    v179 = 2112LL;
  }
  v149 = (v20 + 7) & 0xFFFFFFF8;
  v21 = v149 + 16;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v135 = (v149 + 23) & 0xFFFFFFF8;
    v21 = v135 + 488;
    v19 |= 0x20000u;
    v131 = v19;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LOWORD(v137) = MaximumGroupCount;
  v23 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v23 = (v21 + 7) & 0xFFFFFFF8;
    v21 = v23 + 16 * MaximumGroupCount;
  }
  v24 = 0LL;
  v148 = 0;
  if ( (v19 & 0x10002) == 0 )
  {
    if ( v139 )
      v24 = 4LL;
    v148 = v24;
  }
  v160 = (v21 + 7) & 0xFFFFFFF8;
  v186 = KeSizeOfKProcessExtension(v24);
  result = ObCreateObjectEx(a2, PsProcessType, v159, a2, v128, v25 + (int)v186, 0, v25 + (int)v186, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v28 = (char *)Object;
    ObRetagReferences(Object, v27, 1917023056LL);
    memset_0(v28, 0, v160 + (unsigned int)v186);
    *((_QWORD *)v28 + 177) = 0LL;
    *((_QWORD *)v28 + 178) = 0LL;
    *((_QWORD *)v28 + 179) = 0LL;
    *((_QWORD *)v28 + 176) = 0LL;
    *((_QWORD *)v28 + 178) = v28 + 1416;
    *((_QWORD *)v28 + 177) = v28 + 1416;
    *((_QWORD *)v28 + 61) = 0LL;
    *((_QWORD *)v28 + 57) = 0LL;
    *((_QWORD *)v28 + 111) = v28 + 880;
    *((_QWORD *)v28 + 110) = v28 + 880;
    *((_QWORD *)v28 + 197) = v28 + 1568;
    *((_QWORD *)v28 + 196) = v28 + 1568;
    *((_QWORD *)v28 + 227) = v28 + 1808;
    *((_QWORD *)v28 + 226) = v28 + 1808;
    v28[1530] = a4;
    v28[1528] = a5;
    v28[1529] = a6;
    *((_QWORD *)v28 + 263) = 1LL;
    *((_QWORD *)v28 + 203) = 0LL;
    *((_QWORD *)v28 + 241) = 0LL;
    *((_QWORD *)v28 + 240) = 0LL;
    *((_QWORD *)v28 + 243) = 0LL;
    *((_QWORD *)v28 + 242) = 0LL;
    *((_QWORD *)v28 + 245) = 0LL;
    *((_QWORD *)v28 + 260) = 0LL;
    if ( (v19 & 2) != 0 )
      *((_DWORD *)v28 + 383) |= 1u;
    v29 = v132;
    LODWORD(v159) = 32;
    if ( (v132 & 0x8000) != 0 )
      *((_DWORD *)v28 + 383) |= 0x20u;
    if ( (v29 & 0x80000) != 0 )
      _InterlockedOr((volatile signed __int32 *)v28 + 503, 4u);
    if ( v23 )
    {
      *((_DWORD *)v28 + 383) |= 0x80u;
      v80 = &v28[v23];
      *((_QWORD *)v28 + 217) = v80;
      *((_QWORD *)v28 + 218) = &v80[8 * (unsigned __int16)v137];
      LOWORD(v29) = v132;
    }
    v30 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v28 + 383) |= 0x1000u;
    if ( (v30 & 4) != 0 )
      *((_DWORD *)v28 + 383) |= 0x800000u;
    if ( (v30 & 8) != 0 )
      *((_DWORD *)v28 + 383) |= 0x8000000u;
    if ( (v30 & 0x10) != 0 )
      *((_DWORD *)v28 + 383) |= 0x40000000u;
    v31 = v29;
    v32 = *(_QWORD *)(*(_QWORD *)&TokenInformation[4] + 464LL) | 2LL;
    if ( (v31 & 0x200) != 0 )
      v32 = *(_QWORD *)(*(_QWORD *)&TokenInformation[4] + 464LL);
    *((_QWORD *)v28 + 91) = v32;
    if ( (v19 & 0x8000) != 0 )
      *((_QWORD *)v28 + 199) = &v28[v179];
    *((_QWORD *)v28 + 254) = &v28[v149];
    if ( (v19 & 0x20000) != 0 )
    {
      *((_QWORD *)v28 + 205) = &v28[v135];
      PoEnergyContextInitialize();
    }
    if ( v18 && (*(_DWORD *)(v18 + 8) & 0x200LL) != 0 )
    {
      v33 = *(_DWORD *)(v18 + 316);
      v34 = v139;
    }
    else
    {
      v34 = v139;
      if ( v139 )
        v33 = *(_DWORD *)(v139 + 904);
      else
        v33 = 5;
    }
    *((_DWORD *)v28 + 226) = v33;
    *((_DWORD *)v28 + 341) = 259;
    if ( v34 )
    {
      v35 = (*(_DWORD *)(v34 + 500) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v34 + 496) >> 12) & 7;
      *((_QWORD *)v28 + 90) = *(_QWORD *)(v34 + 464);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v28 + 125) = *((_DWORD *)v28 + 125) & 0xC7FFFFFF | (v35 << 27);
    *((_DWORD *)v28 + 124) = (DefaultPagePriority << 12) | *((_DWORD *)v28 + 124) & 0xFFFF8FFF;
    if ( v165 )
    {
      if ( !PsReferencePartitionSafe((__int64)v165) )
      {
        SectionInformation = -1073740640;
        goto LABEL_126;
      }
      v37 = v165;
    }
    else
    {
      v37 = PspSystemPartition;
      v165 = PspSystemPartition;
      if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 5) <= 1 )
        __fastfail(0xEu);
    }
    *((_QWORD *)v28 + 235) = v37;
    v38 = v153;
    if ( v153 )
    {
      PsReferenceSiloContext(v153);
      v38 = v153;
    }
    if ( (v19 & 4) != 0 )
    {
      v141 = *(unsigned __int16 *)(v34 + 1772);
      if ( (v19 & 2) == 0 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v34 + 488)) )
        {
          v81 = *(void **)(v34 + 680);
          v153 = v81;
          if ( v81 )
            PsReferenceSiloContext(v81);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v34 + 488));
        }
        v38 = v153;
        if ( !v153 )
        {
          SectionInformation = -1073741558;
          goto LABEL_126;
        }
        v85 = *(_QWORD *)(v34 + 784);
        if ( v85 )
        {
          v19 |= 0x40u;
          v131 = v19;
          SessionId = *(_DWORD *)(v85 + 8);
        }
        v86 = 0;
        if ( (*(_DWORD *)(v34 + 500) & 0x20000) != 0 )
          v86 = 0x20000;
        v138 = v86;
      }
    }
    v39 = v19;
    *((_QWORD *)v28 + 85) = v38;
    if ( !v18 || (v19 & 2) != 0 )
    {
      if ( v38 )
      {
        SectionInformation = MmGetSectionInformation((__int64)v38, 4, v197);
        if ( SectionInformation < 0 )
          goto LABEL_126;
        v19 = v19 & 0xF82B9FFF | ((v201 & 4 | (4 * (v201 & 2 | (32 * (v202 & 1 | (2 * (v202 & 0xFA))))))) << 11);
        v131 = v19;
        v136 = v200;
        v151 = v199;
        v150 = v198;
        if ( (v19 & 4) != 0 )
        {
          v138 |= 8u;
          v19 |= 0x18u;
          v131 = v19;
        }
      }
    }
    else
    {
      *((_QWORD *)v28 + 190) = *(_QWORD *)(v18 + 424);
      SectionInformation = MmGetSectionInformation((__int64)v38, 4, (__int64 *)(v18 + 56));
      if ( SectionInformation < 0 )
        goto LABEL_126;
      v19 |= (*(_BYTE *)(v18 + 107) & 4 | (4
                                         * (*(_BYTE *)(v18 + 107) & 2 | (32
                                                                       * (*(_DWORD *)(v18 + 120) & 1 | (2 * (*(_DWORD *)(v18 + 120) & 0xFA))))))) << 11;
      v131 = v39 | ((*(_BYTE *)(v18 + 107) & 4 | (4
                                                * (*(_BYTE *)(v18 + 107) & 2 | (32
                                                                              * (*(_DWORD *)(v18 + 120) & 1 | (2 * (*(_DWORD *)(v18 + 120) & 0xFA))))))) << 11);
      v151 = *(unsigned __int16 *)(v18 + 94);
      v150 = *(unsigned __int16 *)(v18 + 92);
      if ( (*(_WORD *)(v18 + 100) & *(_WORD *)(v18 + 18)) != 0 )
      {
        SectionInformation = -1073741701;
        v87 = 3LL;
LABEL_229:
        PspUpdateCreateInfo(v87, v18, 0LL);
        goto LABEL_126;
      }
      if ( (v19 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 184), 0x72437350u);
        *((_QWORD *)v28 + 102) = *(_QWORD *)(v18 + 184);
        v136 = *(_WORD *)(v18 + 102);
        v90 = RtlpOpenImageFileOptionsKeyEx(v18 + 240, v88, v89, v18 + 200);
        if ( v90 < 0 )
        {
          if ( v90 == -1073741772 )
            *(_BYTE *)(v18 + 16) |= 0x40u;
          *(_QWORD *)(v18 + 200) = 0LL;
        }
        SectionInformation = PspSelectMachineForProcess(v139, v18, &v145);
        if ( SectionInformation < 0 )
        {
          v87 = 4LL;
          goto LABEL_229;
        }
        v141 = (unsigned __int16)v145;
        if ( BYTE2(v145) )
        {
          v19 |= 0x40u;
          v131 = v19;
        }
        if ( HIBYTE(v145) )
          v138 |= 0x20000u;
        v91 = *(void **)(v18 + 200);
        if ( v91 )
        {
          if ( *(char *)(v18 + 16) >= 0 )
          {
            if ( (ImageFileKeyOption = RtlQueryImageFileKeyOption(v91, 2, (__int64)&v133),
                  ImageFileKeyOption == -2147483643)
              || ImageFileKeyOption >= 0 && v133 == 2 && v130[0]
              || (v135 = 0, (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), 4, 0LL) >= 0) && v135 == 1 )
            {
              SectionInformation = -1073741767;
              v87 = 5LL;
              goto LABEL_229;
            }
          }
          v137 = 0;
          v40 = v132;
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), 4, 0LL) >= 0 )
          {
            if ( v137 )
            {
              v40 = v132 | 0x10;
              v132 = v40;
              a9 = v40;
              if ( (v19 & 0x40) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *(HANDLE *)(v18 + 200);
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v137 = 0;
                  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 && v137 )
                  {
                    v40 |= 0x20u;
                    v132 = v40;
                    a9 = v40;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v166 )
          {
            PspReadIFEONodeOptions(v28, *(_QWORD *)(v18 + 200), &v154);
            v144 = v154;
          }
          v135 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), 4, 0LL) >= 0 && v135 )
            v140 |= 0x40u;
          if ( (unsigned int)RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), 0, (__int64)&v133) == -2147483643 )
          {
            v93 = v133;
            if ( v133 <= 0x100 && (v133 & 7) == 0 )
            {
              P = (PVOID)ExAllocatePool2(0x40uLL);
              if ( !P )
                goto LABEL_276;
              if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), v93, (__int64)&v133) >= 0 && (v133 & 7) == 0 )
              {
                v19 |= 0x200000u;
                v131 = v19;
                v143 = v133 >> 3;
              }
            }
          }
          v189.Length = 48;
          v189.RootDirectory = *(HANDLE *)(v18 + 200);
          v189.Attributes = 576;
          v189.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v189.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v189) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle);
            ObCloseHandle(Handle, 0);
            v183 = v207;
          }
          if ( (int)RtlQueryImageFileKeyOption(*(HANDLE *)(v18 + 200), 4, 0LL) >= 0 && v147 == 2 )
            _InterlockedOr((volatile signed __int32 *)v28 + 503, 4u);
          if ( (v40 & 0x80000) != 0 )
            _InterlockedOr((volatile signed __int32 *)v28 + 503, 4u);
LABEL_51:
          if ( (v19 & 0x40) == 0 )
          {
            v41 = v141;
            goto LABEL_53;
          }
          Pool2 = ExAllocatePool2(0x40uLL);
          *((_QWORD *)v28 + 98) = Pool2;
          if ( Pool2 )
          {
            v95 = SessionId;
            v41 = v141;
            if ( !SessionId )
              v95 = PspWow64PickBestNtdll(v18);
            *(_DWORD *)(Pool2 + 8) = v95;
            v96 = (_QWORD *)*((_QWORD *)v28 + 98);
            if ( v96 )
              *v96 = 1LL;
LABEL_53:
            *((_WORD *)v28 + 886) = v41;
            SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)TokenInformation);
            if ( SectionInformation < 0 )
            {
LABEL_126:
              if ( v155 )
                *((_QWORD *)v28 + 58) = v155;
              PspRundownSingleProcess((PRKPROCESS)v28, 0, v43, v44);
              ObfDereferenceObjectWithTag(v28, 0x72437350u);
              goto LABEL_129;
            }
            v45 = 0;
            v46 = a2;
            if ( a2 )
            {
              if ( v18 && (*(_DWORD *)(v18 + 8) & 0x100LL) != 0 && *(_BYTE *)(v18 + 2) == 4 )
              {
                LODWORD(v156) = 14;
                v45 = 1;
              }
              v97 = a12;
              if ( a12 )
                *((_DWORD *)&v156 + v45++) = 3;
              if ( (v40 & 0x30) != 0 )
                *((_DWORD *)&v156 + v45++) = 4;
              if ( (v40 & 0x80u) != 0 )
              {
                IsSessionLeaderProcess = PspIsSessionLeaderProcess(*(_QWORD *)&TokenInformation[4]);
                v97 = a12;
                if ( !IsSessionLeaderProcess )
                  *((_DWORD *)&v156 + v45++) = 10;
              }
              if ( (v40 & 0x8400) != 0 )
                *((_DWORD *)&v156 + v45++) = 7;
              if ( v45 )
              {
                v99 = (int)RtlAcquirePrivilege(&v156, v45, v97 != 0, &v173) < 0;
                v46 = a2;
                if ( !v99 )
                {
                  v19 |= 0x400u;
                  v131 = v19;
                }
              }
              else
              {
                v46 = a2;
              }
            }
            if ( (v40 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v46) )
              goto LABEL_141;
            v130[0] = -1;
            *(_QWORD *)&v212.Count = 2097153LL;
            memset_0(&v212.8, 0, sizeof(v212.8));
            if ( v166 )
            {
              KeQueryAffinityProcess(v166, (__int64)&v212, 0LL, &v190, v130);
              v47 = v130[0];
              v133 = v130[0];
              v48 = KeNodeBlock[*((unsigned __int16 *)&v190 + v130[0])];
              goto LABEL_58;
            }
            v100 = (__int64)v144;
            if ( !v144 )
            {
              if ( !v139 )
              {
                v47 = 0;
                v133 = 0;
                KeAddProcessorAffinityEx(&v212.Count, 0);
                goto LABEL_302;
              }
              if ( (*(_DWORD *)(v139 + 496) & 0x100000) == 0 )
              {
                v100 = PspSelectNodeForProcess((__int64)v165, v177, &v212);
                v144 = (unsigned __int16 *)v100;
                memset_0(&v212.8, 0, 8LL * v212.Count);
                v212.Count = 1;
                v47 = KeSelectGroupFromNode(v100);
                v133 = v47;
                if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v47 )
                {
                  v100 = 0LL;
                  v144 = 0LL;
                  v47 = 1;
                  v133 = 1;
                }
                goto LABEL_302;
              }
              v140 |= 0x100000u;
              v100 = KeNodeBlock[(unsigned __int16)KeGetIdealNodeNumberProcess(v139)];
              v144 = (unsigned __int16 *)v100;
            }
            v47 = KeSelectGroupFromNode(v100);
            v133 = v47;
LABEL_302:
            RtlpCopyAffinityEx(&v212, v212.Size, (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
            if ( v100 )
            {
LABEL_59:
              *((_DWORD *)v28 + 125) |= v138;
              *((_DWORD *)v28 + 124) |= v140;
              if ( v139 )
              {
                v154 = 0LL;
                v102 = 0;
                SessionId = 0;
                v19 &= ~0x20u;
                LOBYTE(v130[0]) = 0;
                if ( a12 )
                {
                  v103 = SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.StateSaveArea, a2);
                  v104 = v19 & 0xFFFFFDFF;
                  v19 |= 0x200u;
                  if ( !v103 )
                    v19 = v104;
                  v105 = v19;
                  SectionInformation = SeIsTokenAssignableToProcess(Token, v130);
                  if ( SectionInformation < 0 )
                    goto LABEL_142;
                  v106 = (v19 >> 9) & 1;
                  if ( !LOBYTE(v130[0]) && !v106 )
                  {
                    SectionInformation = -1073741727;
                    LOWORD(v19) = v105;
                    goto LABEL_142;
                  }
                  v149 = v106;
                  SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
                  v19 = v105;
                  if ( SectionInformation < 0 )
                  {
LABEL_142:
                    if ( (v19 & 0x400) != 0 )
                      RtlReleasePrivilege(v173);
                    goto LABEL_126;
                  }
                  v107 = PsGetSessionIdEx(*(__int64 *)&TokenInformation[4]);
                  v102 = SessionId;
                  if ( SessionId != v107 )
                  {
                    if ( !v149 )
                    {
LABEL_141:
                      SectionInformation = -1073741727;
                      goto LABEL_142;
                    }
                    if ( (v132 & 0x80u) != 0 )
                    {
                      SectionInformation = -1073741811;
                      goto LABEL_142;
                    }
                    v19 = v105 | 0x20;
                  }
                }
                else if ( (v19 & 4) != 0 )
                {
                  v102 = PsGetSessionIdEx(v139);
                  v19 = v19 & 0xFFFFFFDF | ((unsigned int)PsGetSessionIdEx(*(__int64 *)&TokenInformation[4]) != v102
                                          ? 0x20
                                          : 0);
                }
                if ( (v19 & 0x20) != 0 )
                {
                  SectionInformation = PspAttachSession(v102, v211, &v154);
                  if ( SectionInformation < 0 )
                  {
                    LOWORD(v19) = v19 & 0xFFDF;
                    goto LABEL_142;
                  }
                  *((_DWORD *)v28 + 124) |= 0x80u;
                }
                if ( !a12 || LOBYTE(v130[0]) )
                {
                  v109 = v139;
                  if ( LOBYTE(v130[0]) )
                    v109 = *(_QWORD *)&TokenInformation[4];
                  PspInheritQuota(v28, v109);
                }
                else
                {
                  SectionInformation = PspAssignProcessQuotaBlock(0LL, v28, Token);
                  if ( SectionInformation < 0 )
                  {
                    if ( (v19 & 0x20) != 0 )
                      PspDetachSession((__int64)v154, (__int64)v211);
                    goto LABEL_142;
                  }
                }
                v110 = BYTE4(v205) & 1;
                v111 = *(_DWORD *)PspSiloMonitorLock.PriorityFloorCounts;
                if ( (BYTE4(v205) & 1) != 0 )
                  v111 = DWORD2(v206);
                if ( (v132 & 0x400000) != 0 )
                  v110 |= 0x10u;
                v49 = v144;
                v19 ^= (v19 ^ ((unsigned __int8)MmCreateProcessAddressSpace(
                                                  (_DWORD)v165,
                                                  v108,
                                                  v111,
                                                  v110,
                                                  (unsigned int)*v144 + 1,
                                                  (__int64)v28) << 11)) & 0x800;
                v131 = v19;
                if ( (v19 & 0x20) != 0 )
                  PspDetachSession((__int64)v154, (__int64)v211);
                if ( (v19 & 0x800) == 0 )
                  goto LABEL_347;
                v47 = v133;
              }
              else
              {
                _InterlockedAdd(&dword_140E273C0, 1u);
                _InterlockedAdd(&dword_140E273C4, 1u);
                *((_QWORD *)v28 + 95) = &PspSystemQuotaBlock;
                v28[352] = 1;
                SectionInformation = MmInitializeHandBuiltProcess((__int64)v28);
                if ( SectionInformation < 0 )
                  goto LABEL_142;
                v49 = v144;
              }
              _InterlockedOr((volatile signed __int32 *)v28 + 125, 0x40000u);
              v194 = 0;
              LODWORD(v190) = 8;
              DWORD1(v190) = v47;
              *((_QWORD *)&v190 + 1) = &v212;
              v191 = v49;
              SessionSchedulingGroupByProcess = PsGetSessionSchedulingGroupByProcess(v28);
              v51 = v50 | 2;
              if ( (v19 & 0x10000) == 0 )
                v51 = v50;
              v193 = v51;
              v195 = &v28[v160];
              v196 = (unsigned int)v186;
              SectionInformation = KeInitializeProcess((struct _KPROCESS *)v28, (__int64)&v190);
              if ( SectionInformation < 0 )
                goto LABEL_142;
              if ( !v18 || (v19 & 2) != 0 )
              {
                v52 = 0LL;
              }
              else
              {
                v163 = *(_DWORD *)(v18 + 384);
                v162 = *(_DWORD *)(v18 + 388);
                v184 = *(_QWORD *)(v18 + 408);
                v161 = *(_DWORD *)(v18 + 392);
                v185 = *(_QWORD *)(v18 + 216);
                v52 = *(_DWORD **)(v18 + 400);
                v146 = *(_DWORD *)(v18 + 396);
                v77 = *(_QWORD *)(v18 + 184);
                if ( v77
                  && SepRmCapTableLock.KernelShadowStackBase
                  && (int)guard_dispatch_icall_no_overrides(v77, (__int64)v213) >= 0 )
                {
                  if ( !v213[0] && v52 && v146 == 524 )
                  {
                    v78 = v213;
                    v79 = 4LL;
                    do
                    {
                      *(_OWORD *)v78 = *(_OWORD *)v52;
                      *((_OWORD *)v78 + 1) = *((_OWORD *)v52 + 1);
                      *((_OWORD *)v78 + 2) = *((_OWORD *)v52 + 2);
                      *((_OWORD *)v78 + 3) = *((_OWORD *)v52 + 3);
                      *((_OWORD *)v78 + 4) = *((_OWORD *)v52 + 4);
                      *((_OWORD *)v78 + 5) = *((_OWORD *)v52 + 5);
                      *((_OWORD *)v78 + 6) = *((_OWORD *)v52 + 6);
                      v78 += 32;
                      *((_OWORD *)v78 - 1) = *((_OWORD *)v52 + 7);
                      v52 += 32;
                      --v79;
                    }
                    while ( v79 );
                    *(_QWORD *)v78 = *(_QWORD *)v52;
                    v78[2] = v52[2];
                  }
                  v52 = v213;
                  v146 = 536;
                }
              }
              v53 = v139;
              SectionInformation = PspInitializeProcessSecurity(
                                     v139,
                                     (_DWORD)v28,
                                     (_DWORD)Token,
                                     a12,
                                     v163,
                                     (v19 >> 4) & 1,
                                     HIWORD(v19) & 1,
                                     v162,
                                     (__int64)v52,
                                     v146,
                                     v184,
                                     v161,
                                     v185,
                                     v175);
              if ( SectionInformation < 0 )
                goto LABEL_142;
              v28[839] = 2;
              if ( v53 )
              {
                v82 = *(_BYTE *)(v53 + 839);
                if ( v82 == 1 || v82 == 5 )
                  v28[839] = v82;
                v112 = v18 ? *(_QWORD *)(v18 + 296) : 0LL;
                v113 = v18 ? *(unsigned int *)(v18 + 292) : 0LL;
                inited = ObInitProcess(v53 & -(__int64)((v132 & 4) != 0), v28, v113, v112);
              }
              else
              {
                *((_QWORD *)v28 + 96) = *(_QWORD *)(*(_QWORD *)&TokenInformation[4] + 768LL);
                inited = MmInitializeHandBuiltProcess2((_KPROCESS *)v28, v54, v43);
              }
              SectionInformation = inited;
              if ( inited < 0 )
                goto LABEL_142;
              if ( (v205 & 7) != 0 )
                PspApplyIFEOPerfOptions((__int64)v28, (unsigned int *)&v205, a2, (__int64)v44);
              if ( (v19 & 0x200000) != 0 )
                KeSetCpuSetsProcess((__int64)v28, v143, (__int64)P, 1, 0);
              if ( (BYTE4(v205) & 2) != 0 )
                KeSetExpectedConcurrencyCountProcess((struct _KPROCESS *)v28, v183);
              if ( v18 )
              {
                if ( (*(_DWORD *)(v18 + 8) & 0x100LL) != 0 )
                {
                  LOBYTE(v44) = a2;
                  LOBYTE(v56) = *(_BYTE *)(v18 + 2);
                  SectionInformation = PspSetProcessPriorityClass(v28, v56, 0LL, v44);
                  if ( SectionInformation < 0 )
                    goto LABEL_142;
                }
              }
              MmSetMemoryPriorityProcess((__int64)v28, 0);
              v57 = PspComputeQuantum(v28, 0LL);
              v28[144] = PspPriorityTable[2 * (unsigned __int8)v28[839]];
              v28[145] = v57;
              v143 = 0;
              PspReadIFEOMitigationOptions(v18, &v203);
              v58 = *(_OWORD *)&stru_140FC01F0.KernelStack;
              SchedulingGroup = stru_140FC01F0.SchedulingGroup;
              v156 = 0LL;
              Flink = 0LL;
              v60 = 0;
              v61 = v204;
              v62 = v203;
              do
              {
                v177 = v58;
                v178 = SchedulingGroup;
                v63 = (4 * v60) & 0x3F;
                v64 = (unsigned __int64)(unsigned int)(4 * v60) >> 6;
                v205 = (__int128)v62;
                *(_QWORD *)&v206 = v61;
                v65 = 0;
                if ( ((*((_QWORD *)&v177 + v64) >> v63) & 4) != 0 || ((*((_QWORD *)&v205 + v64) >> v63) & 3) == 0 )
                  v65 = 1;
                v66 = (*((_QWORD *)&v205 + v64) >> v63) & 0xF;
                if ( v65 )
                  v66 = (*((_QWORD *)&v177 + v64) >> v63) & 0xF;
                *((_QWORD *)&v156 + v64) = ((unsigned __int64)v66 << v63) | *((_QWORD *)&v156 + v64) & ~(15LL << v63);
                ++v60;
              }
              while ( v60 < 40 );
              v203 = (__m128i)v156;
              v204 = (unsigned __int64)Flink;
              PspReadIFEOMitigationAuditOptions(v18, &v208);
              v205 = v208;
              *(_QWORD *)&v206 = v209;
              v156 = *(_OWORD *)&stru_140FC01F0.SchedulerApcFill5[80];
              Flink = stru_140FC01F0.SuspendEvent.Header.WaitListHead.Flink;
              PspInheritMitigationAuditOptions(&v156, &v205, &v208);
              v67 = (HIWORD(v203.m128i_i64[0]) & 3) << 14;
              if ( v18 )
              {
                if ( (*(_DWORD *)(v18 + 8) & 0x10000LL) != 0 )
                {
                  v205 = *(_OWORD *)(v18 + 336);
                  *(_QWORD *)&v206 = *(_QWORD *)(v18 + 352);
                  v156 = (__int128)v203;
                  Flink = (struct _LIST_ENTRY *)v204;
                  PspInheritMitigationOptions(&v156, &v205, &v203);
                }
                if ( (*(_DWORD *)(v18 + 8) & 0x8000000) != 0 )
                {
                  v205 = *(_OWORD *)(v18 + 448);
                  *(_QWORD *)&v206 = *(_QWORD *)(v18 + 464);
                  v156 = v208;
                  Flink = v209;
                  PspInheritMitigationAuditOptions(&v156, &v205, &v208);
                }
              }
              if ( *(_DWORD *)TokenInformation )
                LOWORD(v67) = v67 | 4;
              v68 = v67 | 0x40;
              if ( (v67 & 4) == 0 )
                v68 = v67;
              if ( (v68 & 0x3FC0) != 0 )
                PspHardenMitigationOptions(&v203);
              if ( !KeIsUserCetAllowed() )
                v203.m128i_i64[1] = v203.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v136 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
                LODWORD(v159) = 0;
              if ( (v19 & 2) != 0 )
              {
                v203.m128i_i64[1] = v203.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
                if ( (a10 & 2) != 0 )
                  v114 = v203.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
                else
                  v114 = v203.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
                v203.m128i_i64[0] = v114;
              }
              v69 = v139;
              if ( (v19 & 4) != 0 && (*(_DWORD *)(v139 + 1876) & 0x4000) == 0 )
                v203.m128i_i64[1] = v203.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              if ( (v19 & 0x40) != 0 )
                v203.m128i_i64[1] = v203.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
              v204 = v204 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
              if ( !KeIsCoreIsolationMitigationPolicyEnforceable() )
                v204 = v70 & 0xFFFFFFFFFCFFFFFFuLL | 0x2000000;
              PspApplyMitigationOptions((__int64)v28, v69, &v203, &v208, v71);
              if ( v18 )
              {
                PspApplyWin32kFilterOptions(v28, v18);
                *((_DWORD *)v28 + 488) = *(_DWORD *)(v18 + 440);
                *(__m128i *)(v18 + 336) = v203;
                *(_QWORD *)(v18 + 352) = v204;
                *(_OWORD *)(v18 + 448) = v208;
                *(_QWORD *)(v18 + 464) = v209;
              }
              v175 = 0LL;
              *(_QWORD *)&v177 = 0LL;
              SectionInformation = AppModelPolicy_GetPolicy_Internal((__int64)Token, 1, &v164, (int *)&v177, &v175);
              v72 = v164;
              if ( SectionInformation < 0 )
                v72 = 0x10000;
              v73 = (v72 == 65537) | 2u;
              if ( (v132 & 0x20000) == 0 )
                v73 = v72 == 65537;
              SmProcessCreateNotification(v28, v73);
              if ( (*((_DWORD *)v28 + 469) & 0x4000) != 0 )
              {
                SectionInformation = KeInitializeProcessUserCetLogging(v28);
                if ( SectionInformation < 0 )
                  goto LABEL_142;
              }
              if ( (v132 & 0x80u) != 0
                && !(unsigned int)PspIsSessionLeaderProcess(*(_QWORD *)&TokenInformation[4])
                && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
              {
                goto LABEL_141;
              }
              if ( (v19 & 1) != 0 )
                goto LABEL_200;
              if ( (v19 & 4) == 0 )
              {
                SectionInformation = PspInitializeFullProcessImageName(v18, v28);
                if ( SectionInformation >= 0 )
                {
                  v74 = MmInitializeProcessAddressSpace((__int64)v28, 0LL, (__int64)v153, &a9, 0);
                  SectionInformation = v74;
                  if ( v74 >= 0 )
                  {
                    v143 = v74;
                    if ( v18 )
                    {
                      if ( (v19 & 2) == 0 )
                      {
                        v83 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v153) + 32LL);
                        v84 = *((_QWORD *)v28 + 86);
                        if ( v83 != v84 )
                          *(_QWORD *)(v18 + 56) += v84 - v83;
                      }
                    }
                    v19 |= 0x80u;
                    v131 = v19;
                    v75 = a9;
                    goto LABEL_116;
                  }
                }
                goto LABEL_142;
              }
              *((_QWORD *)v28 + 86) = *(_QWORD *)(v69 + 688);
              SectionInformation = MmInitializeProcessAddressSpace((__int64)v28, v69, 0LL, &a9, (v19 >> 3) & 1);
              if ( SectionInformation < 0 )
                goto LABEL_142;
              v115 = *(unsigned __int16 *)(*(_QWORD *)(v69 + 848) + 2LL);
              v116 = (void *)ExAllocatePool2(0x40uLL);
              *((_QWORD *)v28 + 106) = v116;
              if ( v116 )
              {
                v117 = v115 + 16;
                v69 = v139;
                memmove(v116, *(const void **)(v139 + 848), v117);
                *(_QWORD *)(*((_QWORD *)v28 + 106) + 8LL) = *((_QWORD *)v28 + 106) + 16LL;
                *((_DWORD *)v28 + 174) = *(_DWORD *)(v69 + 696);
                if ( (*(_DWORD *)(v69 + 496) & 0x1000000) != 0 )
                  *((_DWORD *)v28 + 124) |= 0x1000000u;
                v75 = a9;
                v132 = a9;
                if ( (a9 & 0x1000) == 0 )
                {
LABEL_116:
                  if ( (v19 & 1) == 0 )
                  {
                    v19 = v19 & 0xFFFFEFFF | ((v75 & 0x10) << 8);
                    v131 = v19;
                    if ( (v19 & 2) == 0 )
                    {
                      v19 |= 0x100u;
                      v131 = v19;
                    }
                  }
                  if ( (v19 & 0x400) != 0 )
                    RtlReleasePrivilege(v173);
                  if ( *((_WORD *)v28 + 886) == 332 )
                    *((_DWORD *)v28 + 34) |= 1u;
                  if ( (v19 & 0x80u) != 0 )
                  {
                    if ( v18 )
                    {
                      if ( (v19 & 2) == 0 )
                      {
                        SectionInformation = PspSetupReservedUserMappings(v28, v211, v18);
                        if ( SectionInformation < 0 )
                          goto LABEL_126;
                      }
                    }
                  }
                  if ( (v19 & 0x100) != 0 )
                  {
                    PsQueryProcessAttributes(v28, 0LL, &v134);
                    *((_QWORD *)&Src + 1) = -1LL;
                    BYTE3(Src) = (4 * (((v19 & 0x2000) != 0) | ((v28[1530] & 7) != 1 ? 0 : 0x10))) & 0xCF | BYTE3(Src) & 0x88 | ((v19 & 0x1000) != 0) | ((v28[1530] & 7) != 0 ? 2 : 0) | (16 * ((*(_DWORD *)TokenInformation != 0 ? 2 : 0) | v134 & 1));
                    if ( (v19 & 4) != 0 )
                    {
                      v118 = *(void **)(v69 + 736);
                      *((_QWORD *)v28 + 92) = v118;
                      if ( (v19 & 0x10) == 0 )
                      {
                        LOBYTE(Src) = 1;
                        KiStackAttachProcess((_KPROCESS *)v28, 0, (__int64)v211);
                        if ( MmSecureVirtualMemory(v118, 0x7D0uLL, 4u) )
                          RtlCopyToUser(v118, &Src, 0x10uLL);
                        else
                          SectionInformation = -1073741503;
                        if ( SectionInformation >= 0 )
                        {
                          v119 = (void **)*((_QWORD *)v28 + 98);
                          if ( v119 )
                          {
                            v120 = *((_WORD *)v28 + 886);
                            if ( v120 == 332 || (v121 = v120 == 452, v122 = 0, v121) )
                              v122 = 1;
                            if ( v122 )
                            {
                              v123 = *v119;
                              if ( MmSecureVirtualMemory(v123, 0x488uLL, 4u) )
                              {
                                HIDWORD(v167) = -1;
                                LOBYTE(v167) = 1;
                                BYTE3(v167) = BYTE3(Src);
                                RtlCopyToUser(v123, &v167, 8uLL);
                              }
                              else
                              {
                                SectionInformation = -1073741503;
                              }
                            }
                          }
                        }
                        KiUnstackDetachProcess((__int64)v211, 0);
                        if ( SectionInformation < 0 )
                          goto LABEL_126;
                      }
                    }
                    else
                    {
                      SectionInformation = MmCreatePeb((ULONG_PTR)v28);
                      if ( SectionInformation < 0 )
                      {
                        *((_QWORD *)v28 + 92) = 0LL;
                        goto LABEL_126;
                      }
                      if ( (_QWORD)v210 )
                      {
                        _InterlockedAnd((volatile signed __int32 *)v28 + 124, 0xFFCFFFFF);
                        PspSetProcessAffinitySafe((struct _KPROCESS *)v28, (__int64)&v169);
                      }
                    }
                  }
                  if ( (v19 & 0x80u) == 0 || !v18 || (v19 & 2) != 0 )
                  {
                    if ( (v19 & 0x110) == 0x100 )
                    {
                      SectionInformation = 0;
                      KiStackAttachProcess((_KPROCESS *)v28, 0, (__int64)v211);
                      KeCopyXfdMaskToPeb(v28);
                      v124 = (__int64)CurrentThread;
                      PspUpdatePebForAffinityChange(CurrentThread, v28);
                      if ( (v19 & 0x80u) != 0 )
                      {
                        SectionInformation = MmMapApiSetView((__int64)v28);
                        if ( SectionInformation >= 0 )
                        {
                          SectionInformation = PspMapSiloSharedDataView(v28);
                          if ( SectionInformation >= 0 )
                          {
                            SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
                            if ( SectionInformation >= 0 )
                            {
                              if ( *((_QWORD *)v28 + 98) )
                              {
                                ProcessNtdllType = PsWow64GetProcessNtdllType(v28);
                                SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                              }
                            }
                          }
                        }
                      }
                      KiUnstackDetachProcess((__int64)v211, 0);
LABEL_397:
                      if ( SectionInformation < 0 )
                        goto LABEL_126;
                      PspLockProcessExclusive((__int64)v28, v124, v43, v44);
                      v126 = ExCreateHandleEx((unsigned int *)PspCidTable, (__int64)v28, 0, 0LL, 0LL);
                      v155 = v126;
                      if ( !v126 )
                      {
                        PspUnlockProcessExclusive((__int64)v28, v124);
                        SectionInformation = -1073741670;
                        goto LABEL_126;
                      }
                      if ( (v19 & 0x10000) != 0 )
                      {
                        SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v28 + 85), &v182);
                        v127 = (__int64)v28;
                        if ( SectionInformation < 0 )
                        {
LABEL_404:
                          PspUnlockProcessExclusive(v127, v124);
                          goto LABEL_126;
                        }
                        SectionInformation = KeSecureProcess(
                                               (_KPROCESS *)v28,
                                               *((_QWORD *)v28 + 92),
                                               v155,
                                               *(_QWORD *)(v18 + 192),
                                               v182,
                                               *(struct _MDL **)(v18 + 360),
                                               *(unsigned int *)(v18 + 376));
                        if ( SectionInformation < 0 )
                        {
                          v127 = (__int64)v28;
                          goto LABEL_404;
                        }
                        v126 = v155;
                      }
                      if ( KeQuerySystemTimeUnsafe() )
                        KeQuerySystemTimePrecise((_QWORD *)v28 + 63);
                      else
                        *((_QWORD *)v28 + 63) = MEMORY[0xFFFFF78000000014];
                      *((_QWORD *)v28 + 58) = v126;
                      *((_QWORD *)v28 + 208) = MEMORY[0xFFFFF78000000008];
                      *((_QWORD *)v28 + 209) = KiQueryUnbiasedInterruptTime();
                      *((_QWORD *)v28 + 211) = *((_QWORD *)v28 + 208);
                      *v187 = v28;
                      SectionInformation = v143;
LABEL_129:
                      if ( P )
                        ExFreePoolWithTag(P, 0x73437350u);
                      if ( SepRmCapTableLock.KernelShadowStackLimit.AllFields )
                        guard_dispatch_icall_no_overrides((__int64)v213, v76);
                      return (unsigned int)SectionInformation;
                    }
                  }
                  else
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(v139, v28, v211, v18);
                  }
                  v124 = (__int64)CurrentThread;
                  goto LABEL_397;
                }
                *((_QWORD *)v28 + 85) = 0LL;
                ObfDereferenceObject(v153);
LABEL_200:
                v75 = v132;
                goto LABEL_116;
              }
LABEL_347:
              SectionInformation = -1073741670;
              goto LABEL_142;
            }
            v177 = 0LL;
            WORD4(v177) = v47;
            if ( v47 >= v212.Count )
              v101 = 0LL;
            else
              v101 = v212.Bitmap[v47];
            *(_QWORD *)&v177 = v101;
            v48 = KeSelectNodeForAffinity((__int64)&v177);
LABEL_58:
            v144 = (unsigned __int16 *)v48;
            goto LABEL_59;
          }
LABEL_276:
          SectionInformation = -1073741801;
          goto LABEL_126;
        }
      }
    }
    LOWORD(v40) = v132;
    goto LABEL_51;
  }
  return result;
}
