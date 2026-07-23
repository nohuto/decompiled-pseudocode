/*
 * XREFs of NtSetInformationJobObject @ 0x1407FA7D0
 * Callers:
 *     DifNtSetInformationJobObjectWrapper @ 0x14068F9E0 (DifNtSetInformationJobObjectWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x1403DEE90 (PspHardDereferenceSiloWorker.c)
 *     KeSetSchedulingGroupRankBias @ 0x14043D434 (KeSetSchedulingGroupRankBias.c)
 *     KeSetSchedulingGroupWeights @ 0x14043DB7C (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14043DDE8 (KeSetSchedulingGroupCpuRates.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1404A40F0 (KeQuerySchedulingGroupReadyTime.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     KeQueryPrimaryGroupThread @ 0x1404B7CEC (KeQueryPrimaryGroupThread.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x14052EC80 (KeSetSchedulingGroupCycleNotification.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     wcsnlen @ 0x14053A6E0 (wcsnlen.c)
 *     PspJobIsAppSilo @ 0x1406178CC (PspJobIsAppSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspApplyWorkingSetLimits @ 0x140774F6C (PspApplyWorkingSetLimits.c)
 *     PspScheduleEnforcementWorker @ 0x14077EA5C (PspScheduleEnforcementWorker.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PspAssignSiloSystemRootPath @ 0x1407F4490 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     PspFreezeJobTree @ 0x1407FE324 (PspFreezeJobTree.c)
 *     PspLockJobAndRootExclusive @ 0x1407FE8E0 (PspLockJobAndRootExclusive.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407FEE04 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobCpuPartition @ 0x1407FEE8C (PspSetJobCpuPartition.c)
 *     PspSetJobIoRateControl @ 0x1407FEF84 (PspSetJobIoRateControl.c)
 *     PspSetJobMemoryPartition @ 0x1407FF1B4 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x1407FF508 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x1407FF594 (PspSetNetRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407FF86C (PspSetPagePriorityLimitJobTree.c)
 *     PspSetUILimitJobObject @ 0x1407FF958 (PspSetUILimitJobObject.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FFA68 (PspUnlockJobAndRootExclusive.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409B8904 (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x1409B8C78 (PspFreeRateControl.c)
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 *     PspAllocateRateControl @ 0x1409B90E0 (PspAllocateRateControl.c)
 *     PsChargeSharedPoolQuota @ 0x1409B9190 (PsChargeSharedPoolQuota.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140A06E50 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140A07050 (PspLockJobMemoryLimitsExclusive.c)
 *     SePrivilegeCheck @ 0x140A51E20 (SePrivilegeCheck.c)
 *     IopFreeMiniCompletionPacket @ 0x140A82540 (IopFreeMiniCompletionPacket.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140A85548 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140A94B70 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A94BE0 (PspLockJobMemoryLimitsShared.c)
 *     IoAllocateMiniCompletionPacket @ 0x140A96230 (IoAllocateMiniCompletionPacket.c)
 *     PspLockJobChain @ 0x140AAC814 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140AACA94 (PspUnlockJobChain.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140ABC1F8 (PspGetJobLimitInformationValidFlags.c)
 *     PspSetJobIoAttribution @ 0x140ABEEC8 (PspSetJobIoAttribution.c)
 *     PspRateControlLimitFlag @ 0x140ACC250 (PspRateControlLimitFlag.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x140AEEFE0 (PspSetEnergyTrackingStateJobTree.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140AF5790 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     EtwTraceJobSetQuery @ 0x140AF71B0 (EtwTraceJobSetQuery.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140AF9AD0 (PspNotificationLimitRateControlToleranceField.c)
 *     PspSetBackgroundJobTree @ 0x140AFA158 (PspSetBackgroundJobTree.c)
 *     PspCreateSilo @ 0x140B0B9E8 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140B3BA5C (PspAddProcessToWorkingSetChangeList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  SIZE_T v4; // rbx
  __int64 v6; // rsi
  unsigned int v8; // ecx
  bool v9; // zf
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned __int64 v12; // rdx
  int v13; // edi
  char v14; // bl
  ULONG_PTR MiniCompletionPacket; // rbx
  PRKEVENT v16; // rsi
  void *v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int ULongFromUser; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int Silo; // eax
  __int64 v28; // rsi
  __int64 v29; // r9
  __int64 v30; // r12
  char v31; // al
  int v32; // eax
  char v33; // al
  struct _LIST_ENTRY *v34; // rcx
  struct _LIST_ENTRY *v35; // rcx
  ULONG v36; // edx
  BOOLEAN v37; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  struct _KLOCK_ENTRIES *v40; // r9
  int v41; // r13d
  unsigned int v42; // r13d
  unsigned __int16 v43; // cx
  unsigned __int16 Lock; // dx
  __int64 v45; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v46; // rax
  struct _KEVENT *v47; // rcx
  __int64 *v48; // rax
  int v49; // ecx
  AutoBoost *v50; // rax
  void *v51; // rdx
  AutoBoost *v52; // r13
  struct _LIST_ENTRY *i; // r12
  PSECURITY_SUBJECT_CONTEXT v54; // rcx
  struct _LIST_ENTRY *Pool2; // rbx
  unsigned int v56; // ecx
  int v57; // esi
  unsigned __int16 v58; // ax
  unsigned __int16 UShortFromUser; // cx
  __int64 v60; // r8
  BOOLEAN v61; // al
  __int64 v62; // r8
  __int64 v63; // r9
  struct _LIST_ENTRY *v64; // r13
  __int64 v65; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v66; // rax
  struct _KEVENT *v67; // rdx
  struct _KEVENT *v68; // rcx
  __int64 *v69; // rax
  __int64 v70; // r9
  unsigned __int16 v71; // cx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 ULong64FromUser; // r12
  struct _LIST_ENTRY *v75; // rdi
  int v76; // eax
  char v77; // al
  char UCharFromUser; // al
  unsigned int v79; // edx
  __int64 v80; // rdx
  char v81; // al
  int v82; // eax
  LONG v83; // edi
  __int64 v84; // rbx
  int v85; // edi
  bool v86; // cc
  int v87; // eax
  __int64 RateControl; // rax
  __int64 v89; // rdx
  _KSCHEDULING_GROUP_POLICY *v90; // rax
  _KSCHEDULING_GROUP_POLICY *v91; // rcx
  struct _LIST_ENTRY *v92; // rcx
  unsigned int v93; // ebx
  __int64 v94; // rcx
  char v95; // bl
  PETHREAD v96; // r13
  BOOLEAN v97; // al
  size_t v98; // r8
  __int64 v99; // rdx
  BOOLEAN v100; // al
  unsigned int v101; // eax
  int v102; // eax
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r11
  __int64 v106; // r10
  unsigned __int64 v107; // rcx
  unsigned __int128 v108; // kr00_16
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // eax
  int *v114; // r9
  int *v115; // r10
  struct _LIST_ENTRY *v116; // rbx
  void *v117; // r12
  struct _LIST_ENTRY *v118; // rbx
  int Flink; // edi
  __int64 v120; // rdx
  _DWORD *v121; // r8
  _DWORD *v122; // rax
  __int64 v123; // r8
  _DWORD *v124; // rax
  _DWORD *v125; // r8
  int v126; // edx
  __int64 v127; // r8
  __int64 v128; // r9
  struct _LIST_ENTRY *v129; // rax
  int JobMemoryUsageNotificationViolations; // ebx
  _WORD *v131; // rbx
  _WORD *v132; // rax
  ULONG v133; // edx
  wchar_t *v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  char v139; // al
  BOOLEAN v140; // al
  __m128i v141; // xmm0
  volatile void *v142; // xmm0_8
  size_t v143; // rbx
  wchar_t *v144; // rax
  const wchar_t *v145; // r12
  struct _KEVENT *v146; // rcx
  PETHREAD v147; // rcx
  signed __int32 v148[8]; // [rsp+0h] [rbp-AD8h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-A98h] BYREF
  __int16 Size; // [rsp+48h] [rbp-A90h] BYREF
  KPROCESSOR_MODE Size_2; // [rsp+4Ah] [rbp-A8Eh]
  ULONG Size_4; // [rsp+4Ch] [rbp-A8Ch]
  struct _LIST_ENTRY *v153; // [rsp+50h] [rbp-A88h] BYREF
  JOBOBJECTINFOCLASS v154; // [rsp+58h] [rbp-A80h]
  int v155; // [rsp+60h] [rbp-A78h]
  PVOID Object[2]; // [rsp+70h] [rbp-A68h] BYREF
  unsigned __int64 v157; // [rsp+80h] [rbp-A58h]
  PSECURITY_SUBJECT_CONTEXT v158[2]; // [rsp+90h] [rbp-A48h] BYREF
  __m128i v159; // [rsp+A0h] [rbp-A38h] BYREF
  PETHREAD Thread; // [rsp+B0h] [rbp-A28h]
  char v161; // [rsp+B8h] [rbp-A20h]
  char v162; // [rsp+B9h] [rbp-A1Fh]
  int v163; // [rsp+BCh] [rbp-A1Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-A18h] BYREF
  void *v165; // [rsp+E0h] [rbp-9F8h]
  __int64 v166[2]; // [rsp+E8h] [rbp-9F0h] BYREF
  unsigned int v167; // [rsp+F8h] [rbp-9E0h] BYREF
  struct _LIST_ENTRY *v168; // [rsp+100h] [rbp-9D8h] BYREF
  ULONG_PTR BugCheckParameter1[2]; // [rsp+110h] [rbp-9C8h] BYREF
  int v170; // [rsp+120h] [rbp-9B8h] BYREF
  wchar_t *v171; // [rsp+128h] [rbp-9B0h]
  ULONG_PTR v172[2]; // [rsp+130h] [rbp-9A8h] BYREF
  unsigned int v173; // [rsp+140h] [rbp-998h]
  LONG v174; // [rsp+144h] [rbp-994h]
  __int128 v175; // [rsp+148h] [rbp-990h] BYREF
  __int128 v176; // [rsp+158h] [rbp-980h]
  int v177; // [rsp+168h] [rbp-970h]
  _OWORD v178[2]; // [rsp+170h] [rbp-968h] BYREF
  int v179; // [rsp+190h] [rbp-948h]
  PVOID v180; // [rsp+198h] [rbp-940h]
  __int64 v181; // [rsp+1A0h] [rbp-938h]
  __int64 v182; // [rsp+1A8h] [rbp-930h]
  __int64 v183; // [rsp+1B0h] [rbp-928h]
  __int128 v184; // [rsp+1B8h] [rbp-920h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1C8h] [rbp-910h] BYREF
  __int128 v186; // [rsp+1E0h] [rbp-8F8h] BYREF
  _BYTE v187[28]; // [rsp+1F0h] [rbp-8E8h]
  unsigned __int64 v188; // [rsp+210h] [rbp-8C8h]
  __int128 v189; // [rsp+230h] [rbp-8A8h] BYREF
  __int128 v190; // [rsp+240h] [rbp-898h] BYREF
  __int128 v191; // [rsp+250h] [rbp-888h]
  __int128 v192; // [rsp+260h] [rbp-878h]
  __int128 v193; // [rsp+270h] [rbp-868h] BYREF
  unsigned __int128 v194; // [rsp+280h] [rbp-858h]
  __int128 v195; // [rsp+290h] [rbp-848h]
  __int64 v196; // [rsp+2A0h] [rbp-838h]
  struct _LIST_ENTRY *v197; // [rsp+2B0h] [rbp-828h] BYREF
  struct _LIST_ENTRY *v198; // [rsp+2B8h] [rbp-820h]
  unsigned __int64 v199; // [rsp+2C0h] [rbp-818h]
  struct _LIST_ENTRY *v200; // [rsp+2C8h] [rbp-810h]
  ULONG_PTR v201; // [rsp+2D0h] [rbp-808h]
  int v202; // [rsp+2D8h] [rbp-800h]
  __int64 v203; // [rsp+2E0h] [rbp-7F8h]
  _QWORD v204[7]; // [rsp+2E8h] [rbp-7F0h]
  unsigned __int64 v205; // [rsp+320h] [rbp-7B8h]
  unsigned __int64 v206; // [rsp+328h] [rbp-7B0h]
  unsigned __int64 v207; // [rsp+340h] [rbp-798h]
  __int64 v208; // [rsp+350h] [rbp-788h] BYREF
  volatile void *v209[2]; // [rsp+358h] [rbp-780h] BYREF
  volatile void *Address; // [rsp+368h] [rbp-770h]
  int v211; // [rsp+374h] [rbp-764h]
  unsigned __int16 v212; // [rsp+378h] [rbp-760h]
  __int64 v213; // [rsp+388h] [rbp-750h]
  __int64 v214; // [rsp+3A0h] [rbp-738h]
  struct _LIST_ENTRY *v215; // [rsp+430h] [rbp-6A8h]
  struct _LIST_ENTRY *Blink; // [rsp+438h] [rbp-6A0h]
  struct _LIST_ENTRY *v217; // [rsp+440h] [rbp-698h]
  ULONG_PTR v218; // [rsp+448h] [rbp-690h]
  unsigned int v219; // [rsp+450h] [rbp-688h]
  int v220; // [rsp+454h] [rbp-684h]
  __int64 v221; // [rsp+458h] [rbp-680h] BYREF
  _QWORD v222[38]; // [rsp+460h] [rbp-678h] BYREF
  int v223; // [rsp+594h] [rbp-544h]
  struct _LIST_ENTRY *v224; // [rsp+600h] [rbp-4D8h]
  unsigned __int64 v225; // [rsp+608h] [rbp-4D0h]
  struct _LIST_ENTRY *v226; // [rsp+610h] [rbp-4C8h]
  __int8 v227; // [rsp+79Dh] [rbp-33Bh]

  v4 = JobObjectInformationLength;
  Size_4 = JobObjectInformationLength;
  v6 = JobObjectInformationClass;
  BugCheckParameter1[0] = (ULONG_PTR)JobHandle;
  v154 = JobObjectInformationClass;
  LODWORD(v157) = JobObjectInformationClass;
  memset_0(v209, 0, 0x100uLL);
  *(_OWORD *)v172 = 0LL;
  v170 = 0;
  v168 = 0LL;
  Size = 0;
  v167 = 0;
  memset_0(&v197, 0, 0x98uLL);
  v189 = 0LL;
  v184 = 0LL;
  Object[0] = 0LL;
  Event = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(v165) = 0;
  memset_0(&v186, 0, 0x48uLL);
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v153 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  *(_OWORD *)v166 = 0LL;
  memset(v178, 0, sizeof(v178));
  v179 = 0;
  if ( (unsigned int)(v6 - 1) > 0x33 )
    return -1073741821;
  switch ( (_DWORD)v6 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_19;
      return -1073741820;
    case 0xC:
      v9 = (((_DWORD)v4 - 48) & 0xFFFFFFF7) == 0;
LABEL_13:
      if ( v9 )
        goto LABEL_19;
      return -1073741820;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_19;
      v9 = (_DWORD)v4 == 144;
      goto LABEL_13;
  }
  v8 = dword_140BE345C[v6];
  if ( (_DWORD)v4 != v8 && ((_DWORD)v6 != 11 && (_DWORD)v6 != 14 || (unsigned int)v4 < v8) )
    return -1073741820;
LABEL_19:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  Size_2 = PreviousMode;
  if ( PreviousMode )
    ProbeForRead(JobObjectInformation, v4, dword_140BE337C[v6]);
  if ( !JobHandle )
    return -1073741816;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1[0], 0x79517350u, (__int64)&Event, 0LL, 0LL);
  if ( result >= 0 )
  {
    v13 = 0;
    v14 = 0;
    --Thread->SpecialApcDisable;
    if ( v154 <= JobObjectClearPeakJobMemoryUsed )
    {
      if ( v154 == JobObjectClearPeakJobMemoryUsed )
      {
        v16 = Event;
        PspLockJobMemoryLimitsExclusive(Event, 0LL, 0LL);
        *(_QWORD *)&v16[30].Header.Lock = 0LL;
        v16[29].Header.WaitListHead.Blink = 0LL;
        PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
        goto LABEL_369;
      }
      if ( v154 <= JobObjectGroupInformationEx )
      {
        if ( v154 == JobObjectGroupInformationEx )
        {
LABEL_206:
          Pool2 = 0LL;
          v153 = 0LL;
          v56 = 16;
          if ( (_DWORD)v157 != 14 )
            v56 = 2;
          LODWORD(v157) = v56;
          v12 = Size_4 % v56;
          v57 = Size_4 / v56;
          if ( Size_4 % v56 )
          {
            v13 = -1073741820;
            goto LABEL_72;
          }
          v208 = 2097153LL;
          memset_0(v209, 0, 0x100uLL);
          v58 = KeQueryActiveGroupCount() - 1;
          LOWORD(Size_4) = v58;
          while ( 1 )
          {
            if ( !v57 )
            {
LABEL_231:
              v16 = Event;
              if ( v13 < 0 )
                goto LABEL_582;
              if ( !*(_QWORD *)&Event[22].Header.Lock )
              {
                Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
                if ( !Pool2 )
                  goto LABEL_135;
                v153 = (struct _LIST_ENTRY *)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL);
                if ( !v153 )
                {
                  v35 = Pool2;
LABEL_138:
                  v36 = 1632269136;
LABEL_139:
                  ExFreePoolWithTag(v35, v36);
LABEL_135:
                  v13 = -1073741670;
                  goto LABEL_582;
                }
              }
              SeCaptureSubjectContextEx(
                Thread,
                Thread->ApcState.Process,
                (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
              v158[0] = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
              if ( PreviousMode )
              {
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v61 = SePrivilegeCheck(
                        &RequiredPrivileges,
                        (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                        1);
                LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v61 & 1;
              }
              else
              {
                LODWORD(SubjectContext.ClientToken) |= 1u;
              }
              ExAcquireFastResourceExclusive((struct _KTHREAD *)&v16[2].Header.WaitListHead, 0LL, 1);
              v13 = PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)&SubjectContext, 1);
              v64 = v153;
              if ( v13 >= 0 )
              {
                v65 = *(_QWORD *)&v16[22].Header.Lock;
                if ( v65 )
                {
                  v175 = *(_OWORD *)(v65 + 8);
                  v176 = *(_OWORD *)(v65 + 24);
                  v158[0] = (PSECURITY_SUBJECT_CONTEXT)&v175;
                }
                else
                {
                  *(_QWORD *)&v16[22].Header.Lock = Pool2;
                  v16[22].Header.WaitListHead.Flink = v64;
                  Pool2 = 0LL;
                  v158[0] = 0LL;
                }
                v66 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v16[22].Header.Lock;
                *v66 = SubjectContext;
                v66[1].ClientToken = v165;
                v166[0] = (__int64)v16;
                HIDWORD(v166[1]) = v16[10].Header.WaitListHead.Blink;
                LODWORD(v166[1]) = -17;
                v67 = v16 + 11;
                v68 = v16 + 11;
                v69 = &v208;
                v70 = 2LL;
                do
                {
                  *(_OWORD *)&v68->Header.Lock = *(_OWORD *)v69;
                  *(_OWORD *)&v68->Header.WaitListHead.Blink = *((_OWORD *)v69 + 1);
                  v68[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v69 + 2);
                  *(_OWORD *)&v68[2].Header.Lock = *((_OWORD *)v69 + 3);
                  *(_OWORD *)&v68[2].Header.WaitListHead.Blink = *((_OWORD *)v69 + 4);
                  v68[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v69 + 5);
                  *(_OWORD *)&v68[4].Header.Lock = *((_OWORD *)v69 + 6);
                  v68 = (struct _KEVENT *)((char *)v68 + 128);
                  v68[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v69 + 7);
                  v69 += 16;
                  --v70;
                }
                while ( v70 );
                *(_QWORD *)&v68->Header.Lock = *v69;
                if ( v154 != JobObjectGroupInformationEx )
                  goto LABEL_250;
                v71 = 0;
                if ( LOWORD(v67->Header.Lock) )
                {
                  while ( !*((_QWORD *)&v67->Header.WaitListHead.Flink + v71) )
                  {
                    if ( ++v71 >= LOWORD(v67->Header.Lock) )
                      goto LABEL_249;
                  }
LABEL_250:
                  LODWORD(v16[10].Header.WaitListHead.Blink) |= 0x10u;
                  _InterlockedOr((volatile signed __int32 *)&v16[64].Header.WaitListHead.Blink, 2u);
                }
                else
                {
LABEL_249:
                  LODWORD(v16[10].Header.WaitListHead.Blink) &= ~0x10u;
                  _InterlockedAnd((volatile signed __int32 *)&v16[64].Header.WaitListHead.Blink, 0xFFFFFFFD);
                }
                PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)v166, 5);
              }
              ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v62, v63);
              if ( v158[0] )
                SeReleaseSubjectContext(v158[0]);
              if ( !Pool2 )
                goto LABEL_582;
              ExFreePoolWithTag(Pool2, 0x614A7350u);
              v54 = (PSECURITY_SUBJECT_CONTEXT)v64;
LABEL_256:
              PsReturnSharedPoolQuota(v54);
              goto LABEL_582;
            }
            if ( v154 == JobObjectGroupInformationEx )
            {
              if ( PreviousMode )
                RtlCopyFromUser(&v184, JobObjectInformation, 0x10uLL);
              else
                RtlCopyVolatileMemory(&v184, JobObjectInformation, 0x10uLL);
              UShortFromUser = WORD4(v184);
              v60 = v184;
            }
            else
            {
              if ( PreviousMode )
              {
                UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)JobObjectInformation);
                v58 = Size_4;
              }
              else
              {
                UShortFromUser = *(_WORD *)JobObjectInformation;
              }
              if ( UShortFromUser > v58 )
              {
LABEL_230:
                v13 = -1073741811;
                v155 = -1073741811;
                goto LABEL_231;
              }
              v60 = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * UShortFromUser + 4);
            }
            if ( UShortFromUser > (unsigned __int16)Size_4 )
              goto LABEL_230;
            v12 = UShortFromUser;
            if ( v209[UShortFromUser]
              || v60 != (v60 & *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * UShortFromUser + 4)) )
            {
              goto LABEL_230;
            }
            if ( (unsigned __int16)v208 <= UShortFromUser )
            {
              if ( WORD1(v208) <= UShortFromUser )
                goto LABEL_229;
              LOWORD(v208) = UShortFromUser + 1;
            }
            v209[UShortFromUser] = (volatile void *)(v60 | (unsigned __int64)v209[UShortFromUser]);
LABEL_229:
            v177 = --v57;
            JobObjectInformation = (char *)JobObjectInformation + (unsigned int)v157;
            v180 = JobObjectInformation;
            v58 = Size_4;
          }
        }
        if ( v154 == JobObjectBasicLimitInformation )
          goto LABEL_77;
        if ( v154 != JobObjectBasicUIRestrictions )
        {
          if ( v154 == JobObjectSecurityLimitInformation )
          {
            if ( PreviousMode )
              RtlCopyFromUser(v178, JobObjectInformation, 0x28uLL);
            else
              RtlCopyVolatileMemory(v178, JobObjectInformation, 0x28uLL);
            v13 = (v178[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
            goto LABEL_72;
          }
          if ( v154 != JobObjectEndOfJobTimeInformation )
          {
            if ( v154 == JobObjectAssociateCompletionPortInformation )
            {
              MiniCompletionPacket = 0LL;
              if ( PreviousMode )
                RtlCopyFromUser(v172, JobObjectInformation, 0x10uLL);
              else
                RtlCopyVolatileMemory(v172, JobObjectInformation, 0x10uLL);
              if ( v172[1] )
              {
                v13 = ObpReferenceObjectByHandleWithTag(v172[1], 0x624A7350u, (__int64)Object, 0LL, 0LL);
                v16 = Event;
                if ( v13 >= 0 )
                {
                  if ( Event[51].Header.WaitListHead.Flink
                    || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(&PspNotificationPacketCallback, Event)) != 0 )
                  {
                    ExAcquireFastResourceExclusive((struct _KTHREAD *)&v16[2].Header.WaitListHead, 0LL, 1);
                    if ( *(_QWORD *)&v16[23].Header.Lock
                      || ((__int64)v16[10].Header.WaitListHead.Blink & 0x2000) != 0
                      && ((__int64)v16[64].Header.WaitListHead.Blink & 1) != 0 )
                    {
                      ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v20, v21);
                      ObfDereferenceObjectWithTag(Object[0], 0x624A7350u);
                      v13 = -1073741811;
                    }
                    else
                    {
                      if ( !v16[51].Header.WaitListHead.Flink )
                      {
                        v16[51].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MiniCompletionPacket;
                        MiniCompletionPacket = 0LL;
                      }
                      PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                      v16[23].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v172[0];
                      *(PVOID *)&v16[23].Header.Lock = Object[0];
                      v16[23].Header.WaitListHead.Blink = 0LL;
                      PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                      if ( (v16[46].Header.LockNV & 0x40) != 0 )
                        PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)v16, 1);
                      ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v22, v23);
                    }
                  }
                  else
                  {
                    v13 = -1073741670;
                  }
                }
                if ( MiniCompletionPacket )
                {
                  *(_QWORD *)(MiniCompletionPacket + 56) = 0LL;
                  IopFreeMiniCompletionPacket(MiniCompletionPacket);
                }
              }
              else
              {
                v16 = Event;
                ExAcquireFastResourceExclusive((struct _KTHREAD *)&Event[2].Header.WaitListHead, 0LL, 1);
                PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                v17 = *(void **)&v16[23].Header.Lock;
                *(_QWORD *)&v16[23].Header.Lock = 0LL;
                PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v18, v19);
                if ( v17 )
                  ObfDereferenceObjectWithTag(v17, 0x624A7350u);
              }
              goto LABEL_582;
            }
            if ( v154 != JobObjectExtendedLimitInformation )
            {
              if ( v154 != JobObjectGroupInformation )
              {
                if ( v154 == JobObjectNotificationLimitInformation )
                  goto LABEL_36;
LABEL_523:
                v13 = -1073741821;
                goto LABEL_72;
              }
              goto LABEL_206;
            }
LABEL_77:
            v28 = Size_4;
            if ( PreviousMode )
              RtlCopyFromUser(&v197, JobObjectInformation, Size_4);
            else
              RtlCopyVolatileMemory(&v197, JobObjectInformation, Size_4);
            if ( (unsigned int)v28 < 0x98 )
              memset_0((char *)&v197 + v28, 0, 152 - v28);
            Size_4 = PspGetJobLimitInformationValidFlags((unsigned int)v154, (unsigned int)v28);
            v12 = v199;
            v157 = v199;
            if ( (~Size_4 & (unsigned int)v199) != 0 )
              goto LABEL_83;
            memset_0(&v208, 0, 0x738uLL);
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            v165 = 0LL;
            v12 = v157;
            v219 = v157;
            v153 = 0LL;
            v158[0] = 0LL;
            Object[0] = 0LL;
            v220 = (v157 & 8) != 0 ? v202 : 0;
            if ( (v157 & 0x20) != 0 )
            {
              v159.m128i_i64[0] = v204[0];
              if ( LODWORD(v204[0]) > 6 )
                goto LABEL_547;
              v30 = 2LL;
              if ( (unsigned int)(LODWORD(v204[0]) - 3) <= 1 )
              {
                LOBYTE(v29) = PreviousMode;
                v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                        SeIncreaseBasePriorityPrivilege,
                        BugCheckParameter1[0],
                        2LL,
                        v29) & 1;
                v14 = 4 * v31;
                if ( !v31 )
                {
LABEL_88:
                  v13 = -1073741727;
                  goto LABEL_72;
                }
                v12 = v157;
              }
              v227 = v159.m128i_i8[0];
            }
            else
            {
              v227 = 0;
              v30 = 2LL;
            }
            if ( (v12 & 0x80u) == 0LL )
            {
              v223 = 5;
            }
            else
            {
              v32 = HIDWORD(v204[0]);
              v159.m128i_i64[0] = *(_QWORD *)((char *)v204 + 4);
              if ( HIDWORD(v204[0]) >= 0xA )
                goto LABEL_547;
              if ( HIDWORD(v204[0]) > 5 )
              {
                LOBYTE(v29) = PreviousMode;
                v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                        SeIncreaseBasePriorityPrivilege,
                        BugCheckParameter1[0],
                        2LL,
                        v29) & 1;
                v14 = 4 * v33;
                if ( !v33 )
                  goto LABEL_88;
                v12 = v157;
                v32 = v159.m128i_i32[0];
              }
              v223 = v32;
            }
            if ( (v12 & 2) != 0 )
            {
              if ( !v197 )
                goto LABEL_547;
              v215 = v197;
            }
            else
            {
              v215 = 0LL;
            }
            if ( (v12 & 4) != 0 )
            {
              if ( !v198 )
                goto LABEL_547;
              Blink = v198;
            }
            if ( (v12 & 1) != 0 )
            {
              BugCheckParameter1[0] = v201;
              v34 = v200;
              v159.m128i_i64[0] = (__int64)v200;
              if ( !v200 && !v201
                || v200 == (struct _LIST_ENTRY *)-1LL && v201 == -1LL
                || (unsigned __int64)v200 > v201
                || (unsigned __int64)v200 < 0x14000 )
              {
                goto LABEL_547;
              }
              if ( v200 > PspSiloMonitorLock.SavedApcState.ApcListHead[1].Flink )
              {
                if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                  goto LABEL_88;
                v12 = v157;
                v34 = (struct _LIST_ENTRY *)v159.m128i_i64[0];
              }
              v217 = v34;
              v218 = BugCheckParameter1[0];
            }
            else
            {
              v217 = 0LL;
              v218 = 0LL;
            }
            if ( (v12 & 0x100) != 0 )
            {
              if ( v205 < 0x1000 )
                goto LABEL_547;
              v224 = (struct _LIST_ENTRY *)(v205 >> 12);
            }
            else
            {
              v224 = 0LL;
            }
            if ( (v12 & 0x200) != 0 )
            {
              if ( v206 < 0x1000 )
                goto LABEL_547;
              v225 = v206 >> 12;
            }
            else
            {
              v225 = 0LL;
            }
            if ( (v12 & 0x200000) == 0 )
            {
              v226 = 0LL;
              goto LABEL_130;
            }
            if ( v207 >= 0x1000 )
            {
              v226 = (struct _LIST_ENTRY *)(v207 >> 12);
LABEL_130:
              v221 = 2097153LL;
              memset_0(v222, 0, 0x100uLL);
              LODWORD(v157) = v219;
              v16 = Event;
              if ( (v219 & 0x10) == 0 )
                goto LABEL_144;
              if ( ((__int64)Event[64].Header.WaitListHead.Blink & 2) == 0 && v203 )
              {
                if ( !*(_QWORD *)&Event[22].Header.Lock )
                {
                  v153 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
                  if ( !v153 )
                    goto LABEL_135;
                  v158[0] = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(
                                                         KeGetCurrentThread()->ApcState.Process,
                                                         40LL);
                  if ( !v158[0] )
                  {
                    v35 = v153;
                    goto LABEL_138;
                  }
                }
                SeCaptureSubjectContextEx(
                  Thread,
                  Thread->ApcState.Process,
                  (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
                Object[0] = &SubjectContext.ImpersonationLevel;
                if ( PreviousMode )
                {
                  RequiredPrivileges.PrivilegeCount = 1;
                  RequiredPrivileges.Control = 1;
                  RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                  RequiredPrivileges.Privilege[0].Attributes = 0;
                  v37 = SePrivilegeCheck(
                          &RequiredPrivileges,
                          (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                          1);
                  LODWORD(SubjectContext.ClientToken) = (__int64)SubjectContext.ClientToken & 0xFFFFFFFE | v37 & 1;
                }
                else
                {
                  LODWORD(SubjectContext.ClientToken) |= 1u;
                }
                v14 |= 2u;
LABEL_144:
                ExAcquireFastResourceExclusive((struct _KTHREAD *)&v16[2].Header.WaitListHead, 0LL, 1);
                v41 = v157;
                if ( (v157 & 4) == 0 )
                {
                  if ( (v157 & 0x40) != 0 )
                  {
                    v41 = (__int64)v16[10].Header.WaitListHead.Blink & 4 | v157;
                    Blink = v16[9].Header.WaitListHead.Blink;
                  }
                  else
                  {
                    Blink = 0LL;
                  }
                }
                v42 = v41 & 0xFFFFFFBF;
                v219 = v42;
                if ( (v14 & 2) != 0 )
                {
                  if ( ((__int64)v16[64].Header.WaitListHead.Blink & 2) == 0 )
                  {
                    if ( ((__int64)v16[10].Header.WaitListHead.Blink & 0x10) != 0 )
                    {
                      v43 = 0;
                      Lock = v16[11].Header.Lock;
                      if ( Lock )
                      {
                        while ( !*((_QWORD *)&v16[11].Header.WaitListHead.Flink + v43) )
                        {
                          if ( ++v43 >= Lock )
                            goto LABEL_158;
                        }
                        WORD4(v184) = v43;
                      }
                    }
                    else
                    {
                      WORD4(v184) = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
                    }
LABEL_158:
                    *(_QWORD *)&v184 = v203;
                    if ( v203 == (*(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * WORD4(v184) + 4) & v203) )
                    {
                      if ( (unsigned __int16)v221 <= WORD4(v184) )
                      {
                        if ( WORD1(v221) <= WORD4(v184) )
                          goto LABEL_163;
                        LOWORD(v221) = WORD4(v184) + 1;
                      }
                      v222[WORD4(v184)] |= v203;
                      v42 = v219;
LABEL_163:
                      v13 = PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)&SubjectContext, 1);
                      if ( v13 >= 0 )
                      {
                        v45 = *(_QWORD *)&v16[22].Header.Lock;
                        if ( v45 )
                        {
                          v175 = *(_OWORD *)(v45 + 8);
                          v176 = *(_OWORD *)(v45 + 24);
                          Object[0] = &v175;
                        }
                        else
                        {
                          *(_QWORD *)&v16[22].Header.Lock = v153;
                          v16[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v158[0];
                          v153 = 0LL;
                          Object[0] = 0LL;
                        }
                        v46 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v16[22].Header.Lock;
                        *v46 = SubjectContext;
                        v46[1].ClientToken = v165;
                        goto LABEL_170;
                      }
LABEL_188:
                      if ( (v14 & 1) != 0 )
                      {
                        v50 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140FC11F0, 0LL, 0LL, v40);
                        v52 = v50;
                        if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140FC11F0, 0LL) )
                          ExfAcquirePushLockExclusiveEx(
                            (unsigned __int64 *)&stru_140FC11F0,
                            v50,
                            (__int64)&stru_140FC11F0);
                        if ( v52 )
                        {
                          if ( (KiAbpGlobalState & 1) != 0 )
                            AutoBoost::KiAbpPostAcquire(v52, v51);
                          else
                            *((_BYTE *)v52 + 10) = 1;
                        }
                        _InterlockedOr((volatile signed __int32 *)&v16[64].Header.WaitListHead.Blink, 0x100u);
                        for ( i = v16[1].Header.WaitListHead.Blink;
                              i != (struct _LIST_ENTRY *)&v16[1].Header.WaitListHead.Blink;
                              i = i->Flink )
                        {
                          if ( ((__int64)i[-23].Blink & 1) == 0 )
                            PspAddProcessToWorkingSetChangeList(&i[-54].Blink);
                        }
                      }
                      ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v39, (__int64)v40);
                      if ( (v14 & 1) != 0 )
                        PspApplyWorkingSetLimits((__int64)v16);
                      if ( Object[0] )
                        SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)Object[0]);
                      if ( !v153 )
                        goto LABEL_582;
                      ExFreePoolWithTag(v153, 0x614A7350u);
                      v54 = v158[0];
                      goto LABEL_256;
                    }
                  }
                }
                else if ( (v42 & 0x4000) == 0 || ((__int64)v16[64].Header.WaitListHead.Blink & 2) != 0 )
                {
LABEL_170:
                  if ( ((__int64)v16[10].Header.WaitListHead.Blink & 1) != 0 && (v42 & 1) == 0 )
                  {
                    _InterlockedOr(v148, 0);
                    if ( (stru_140FC11F0.Header.Type & 1) != 0 )
                      ExfAcquireReleasePushLockExclusive(&stru_140FC11F0, v38, v39, v40);
                  }
                  v166[0] = (__int64)v16;
                  HIDWORD(v166[1]) = v16[10].Header.WaitListHead.Blink;
                  *(_QWORD *)&v16[10].Header.Lock = v217;
                  v16[10].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v218;
                  HIDWORD(v16[10].Header.WaitListHead.Blink) = v220;
                  if ( (v14 & 2) != 0 )
                  {
                    v47 = v16 + 11;
                    v48 = &v221;
                    do
                    {
                      *(_OWORD *)&v47->Header.Lock = *(_OWORD *)v48;
                      *(_OWORD *)&v47->Header.WaitListHead.Blink = *((_OWORD *)v48 + 1);
                      v47[1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v48 + 2);
                      *(_OWORD *)&v47[2].Header.Lock = *((_OWORD *)v48 + 3);
                      *(_OWORD *)&v47[2].Header.WaitListHead.Blink = *((_OWORD *)v48 + 4);
                      v47[3].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v48 + 5);
                      *(_OWORD *)&v47[4].Header.Lock = *((_OWORD *)v48 + 6);
                      v47 = (struct _KEVENT *)((char *)v47 + 128);
                      v47[-1].Header.WaitListHead = (LIST_ENTRY)*((_OWORD *)v48 + 7);
                      v48 += 16;
                      --v30;
                    }
                    while ( v30 );
                    *(_QWORD *)&v47->Header.Lock = *v48;
                  }
                  BYTE5(v16[45].Header.WaitListHead.Blink) = v227;
                  v16[24].Header.SignalState = v223;
                  v16[9].Header.WaitListHead.Flink = v215;
                  v16[9].Header.WaitListHead.Blink = Blink;
                  v49 = ~Size_4;
                  Size_4 = ~Size_4;
                  if ( v154 == JobObjectExtendedLimitInformation )
                  {
                    PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                    LODWORD(v16[10].Header.WaitListHead.Blink) = v42 | Size_4 & (__int64)v16[10].Header.WaitListHead.Blink;
                    v16[28].Header.WaitListHead.Blink = v224;
                    *(_QWORD *)&v16[29].Header.Lock = v225;
                    v16[29].Header.WaitListHead.Flink = v226;
                    PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                  }
                  else
                  {
                    LODWORD(v16[10].Header.WaitListHead.Blink) = v42 | v49 & (__int64)v16[10].Header.WaitListHead.Blink;
                  }
                  LODWORD(v166[1]) = ~(LODWORD(v16[10].Header.WaitListHead.Blink) | HIDWORD(v166[1]));
                  if ( (v199 & 4) != 0 )
                  {
                    PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)&v16[9].Header.WaitListHead.Blink, 1);
                    v16[7].Header.WaitListHead.Blink = 0LL;
                    *(_QWORD *)&v16[8].Header.Lock = 0LL;
                    KeResetEvent(v16);
                  }
                  if ( ((__int64)v16[10].Header.WaitListHead.Blink & 6) != 0 )
                    _InterlockedAdd64((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.152, 1uLL);
                  if ( (v166[1] & 1) == 0 )
                    v14 |= 1u;
                  PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)v166, 5);
                  goto LABEL_188;
                }
                v13 = -1073741811;
                goto LABEL_188;
              }
LABEL_535:
              v13 = -1073741811;
              goto LABEL_582;
            }
LABEL_547:
            v13 = -1073741811;
            goto LABEL_72;
          }
          if ( PreviousMode )
          {
            ULongFromUser = RtlReadULongFromUser((unsigned int *)JobObjectInformation);
            v167 = ULongFromUser;
          }
          else
          {
            RtlCopyVolatileMemory(&v167, JobObjectInformation, 4uLL);
            ULongFromUser = v167;
          }
          v16 = Event;
          if ( ULongFromUser > 1 )
            goto LABEL_535;
          ExAcquireFastResourceExclusive((struct _KTHREAD *)&Event[2].Header.WaitListHead, 0LL, 1);
          HIDWORD(v16[22].Header.WaitListHead.Blink) = v167;
LABEL_67:
          ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v25, v26);
          goto LABEL_582;
        }
        if ( PreviousMode )
          v170 = RtlReadULongFromUser((unsigned int *)JobObjectInformation);
        else
          RtlCopyVolatileMemory(&v170, JobObjectInformation, 4uLL);
        v16 = Event;
        Silo = PspSetUILimitJobObject((__int64)Event);
LABEL_485:
        v13 = Silo;
        goto LABEL_582;
      }
      if ( v154 != JobObjectCpuRateControlInformation )
      {
        if ( v154 == JobObjectCompletionFilter )
        {
          if ( PreviousMode )
            v83 = RtlReadULongFromUser((unsigned int *)JobObjectInformation);
          else
            v83 = *(_DWORD *)JobObjectInformation;
          v174 = v83;
          v16 = Event;
          if ( (v83 & 0xFFFFC001) != 0 )
            goto LABEL_535;
          ExAcquireFastResourceExclusive((struct _KTHREAD *)&Event[2].Header.WaitListHead, 0LL, 1);
          PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
          v16[46].Header.LockNV = v83;
          PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
          goto LABEL_266;
        }
        if ( v154 == JobObjectFreezeInformation )
        {
          if ( PreviousMode )
            RtlCopyFromUser(&v189, JobObjectInformation, 0x10uLL);
          else
            RtlCopyVolatileMemory(&v189, JobObjectInformation, 0x10uLL);
          if ( !(_DWORD)v189 || (v189 & 0xFFFFFFF0) != 0 )
            goto LABEL_83;
          if ( (v189 & 1) != 0 || (v189 & 8) == 0 )
          {
            v16 = Event;
            v13 = PspFreezeJobTree(Event, &v189);
            if ( v13 >= 0 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(JobObjectInformation, v189);
              else
                *(_DWORD *)JobObjectInformation = v189;
            }
            goto LABEL_582;
          }
          goto LABEL_547;
        }
        if ( v154 != JobObjectBackgroundInformation )
        {
          if ( v154 == JobObjectSchedulingRankBiasInformation )
          {
            if ( PreviousMode )
              UCharFromUser = RtlReadUCharFromUser(JobObjectInformation);
            else
              UCharFromUser = *(_BYTE *)JobObjectInformation;
            LOBYTE(Size) = UCharFromUser;
            v16 = Event;
            ExAcquireFastResourceExclusive((struct _KTHREAD *)&Event[2].Header.WaitListHead, 0LL, 1);
            if ( ((__int64)v16[64].Header.WaitListHead.Blink & 0x20) == 0 )
              goto LABEL_272;
            v26 = (__int64)v16[51].Header.WaitListHead.Blink;
            v79 = *(_DWORD *)(v26 + 40);
            if ( (v79 & 0x40) != 0 )
              goto LABEL_272;
            if ( (v79 & 0x21) != 0 )
            {
              v13 = -1073741637;
              goto LABEL_67;
            }
            LOBYTE(v25) = Size;
            if ( ((v79 >> 3) & 1) == ((_BYTE)Size != 0) )
              goto LABEL_272;
            LOBYTE(v25) = -(char)Size;
            v80 = ((_BYTE)Size != 0 ? 8 : 0) | v79 & 0xFFFFFFF7;
            *(_DWORD *)(v26 + 40) = v80;
            LOBYTE(v80) = Size;
            KeSetSchedulingGroupRankBias((__int64)&v16[51].Header.WaitListHead.Blink[8], v80, v25);
            PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)&Size, 1);
            goto LABEL_276;
          }
          if ( v154 != JobObjectTimerVirtualizationInformation )
          {
            if ( v154 != JobObjectCycleTimeNotification )
            {
              if ( v154 != JobObjectClearEvent )
                goto LABEL_523;
              v16 = Event;
              ExAcquireFastResourceExclusive((struct _KTHREAD *)&Event[2].Header.WaitListHead, 0LL, 1);
              KeResetEvent(v16);
LABEL_266:
              ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v72, v73);
              goto LABEL_267;
            }
            if ( PreviousMode )
              ULong64FromUser = RtlReadULong64FromUser(JobObjectInformation);
            else
              ULong64FromUser = *(_QWORD *)JobObjectInformation;
            v181 = ULong64FromUser;
            v16 = Event;
            ExAcquireFastResourceExclusive((struct _KTHREAD *)&Event[2].Header.WaitListHead, 0LL, 1);
            if ( ((__int64)v16[64].Header.WaitListHead.Blink & 0x20) == 0 )
            {
LABEL_272:
              v13 = -1073741811;
              goto LABEL_67;
            }
            v75 = v16[51].Header.WaitListHead.Blink;
            v76 = (int)v75[2].Blink;
            if ( (v76 & 0x10) == 0 )
            {
              LODWORD(v75[2].Blink) = v76 | 0x10;
              KeInitializeDpc((PRKDPC)&v75[3], (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v16);
            }
            KeSetSchedulingGroupCycleNotification((__int64)&v75[8], (__int64)&v75[3], ULong64FromUser);
LABEL_276:
            v13 = 0;
            goto LABEL_67;
          }
          if ( PreviousMode )
            v77 = RtlReadUCharFromUser(JobObjectInformation);
          else
            v77 = *(_BYTE *)JobObjectInformation;
          if ( !v77 )
          {
            v13 = -1073741811;
            v155 = -1073741811;
            v16 = Event;
            goto LABEL_582;
          }
          v16 = Event;
          PspEnumJobsAndProcessesInJobHierarchy(Event, 0LL, 0);
LABEL_369:
          v13 = 0;
          goto LABEL_582;
        }
        if ( PreviousMode )
          v81 = RtlReadUCharFromUser(JobObjectInformation);
        else
          v81 = *(_BYTE *)JobObjectInformation;
        v161 = v81;
        v16 = Event;
        v82 = PspSetBackgroundJobTree(Event);
LABEL_296:
        v13 = v82;
        if ( v82 < 0 )
          goto LABEL_582;
        goto LABEL_267;
      }
      Object[0] = 0LL;
      if ( PreviousMode )
      {
        v84 = RtlReadULong64FromUser(JobObjectInformation);
        Object[0] = (PVOID)v84;
      }
      else
      {
        RtlCopyVolatileMemory(Object, JobObjectInformation, 8uLL);
        LODWORD(v84) = Object[0];
      }
      if ( (v84 & 0xFFFFFFC0) != 0 )
        goto LABEL_547;
      v85 = 0;
      LODWORD(v157) = HIDWORD(Object[0]);
      LODWORD(v153) = HIDWORD(Object[0]);
      if ( (v84 & 1) == 0 )
      {
LABEL_332:
        v16 = Event;
        PspLockJobChain(Event, Thread, 0LL);
        Size_4 = v84 & 1;
        v87 = (int)v16[64].Header.WaitListHead.Blink;
        if ( (v84 & 1) != 0 )
        {
          if ( (v87 & 0x20) == 0 )
          {
            RateControl = PspAllocateRateControl(2LL);
            v89 = RateControl;
            if ( !RateControl )
            {
              v13 = -1073741670;
              goto LABEL_367;
            }
            v16[51].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)RateControl;
LABEL_340:
            LODWORD(v16[51].Header.WaitListHead.Blink[2].Blink) = 0;
            HIDWORD(v16[51].Header.WaitListHead.Blink[2].Blink) = v157;
            if ( Size_4 )
            {
              if ( (v84 & 4) != 0 )
              {
                LODWORD(v16[51].Header.WaitListHead.Blink[2].Blink) |= 1u;
                WORD1(v153) = (_WORD)v153;
              }
              if ( (v84 & 2) != 0 )
              {
                LODWORD(v16[51].Header.WaitListHead.Blink[2].Blink) |= 4u;
                HIDWORD(v153) = v85 & 0xFFFFFFFE;
              }
              else
              {
                HIDWORD(v153) = v85 | 1;
                if ( (v84 & 4) == 0 && (v84 & 0x10) == 0 )
                  WORD1(v153) = 10000;
              }
              if ( (v84 & 8) != 0 )
                LODWORD(v16[51].Header.WaitListHead.Blink[2].Blink) |= 2u;
              if ( (v84 & 0x10) != 0 )
                LODWORD(v16[51].Header.WaitListHead.Blink[2].Blink) |= 0x20u;
              if ( (v84 & 0x20) != 0 )
                LODWORD(v16[51].Header.WaitListHead.Blink[2].Blink) |= 0x80u;
              v90 = (_KSCHEDULING_GROUP_POLICY *)v16[51].Header.WaitListHead.Blink;
              v91 = v90 + 16;
              if ( v90 == (_KSCHEDULING_GROUP_POLICY *)v89 )
              {
                *v91 = (_KSCHEDULING_GROUP_POLICY)v153;
                v13 = PspAddSchedulingGroupToJobChain(v16[54].Header.WaitListHead.Flink, v16);
                if ( v13 < 0 )
                {
                  v92 = v16[51].Header.WaitListHead.Blink;
                  if ( v92 )
                  {
                    PspFreeRateControl(v92);
                    v16[51].Header.WaitListHead.Blink = 0LL;
                  }
                  goto LABEL_367;
                }
                _InterlockedOr((volatile signed __int32 *)&v16[64].Header.WaitListHead.Blink, 0x20u);
              }
              else
              {
                Event = (PRKEVENT)&v90[16];
                if ( (v90[5].Value & 4) != 0 )
                  KeSetSchedulingGroupWeights(1u, &Event, (__int64)&v153);
                else
                  KeSetSchedulingGroupCpuRates(
                    (__int64)v91,
                    (struct _KSCHEDULING_GROUP **)&Event,
                    (_KSCHEDULING_GROUP_POLICY *)&v153);
              }
              v168 = v16[51].Header.WaitListHead.Blink[2].Blink;
            }
            else
            {
              HIDWORD(v153) = v85 | 3;
              LODWORD(v153) = 655370000;
              LODWORD(v16[51].Header.WaitListHead.Blink[2].Blink) |= 0x40u;
              v93 = (unsigned int)v153;
              HIDWORD(v16[51].Header.WaitListHead.Blink[2].Blink) = (_DWORD)v153;
              Event = (PRKEVENT)&v16[51].Header.WaitListHead.Blink[8];
              HIBYTE(Size) = (Event->Header.SignalState & 4) != 0;
              v16[52].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v16[52].Header.WaitListHead.Flink
                                                                       + KeQuerySchedulingGroupReadyTime((__int64)Event));
              KeSetSchedulingGroupCpuRates(
                v94,
                (struct _KSCHEDULING_GROUP **)&Event,
                (_KSCHEDULING_GROUP_POLICY *)&v153);
              HIDWORD(v168) = v93;
              if ( HIBYTE(Size) )
              {
                HIBYTE(Size) = 0;
                PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)&Size + 1, 1);
              }
            }
            v13 = 0;
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery((_DWORD)v16, 15, (unsigned int)&v168, 0, 0, 1829);
LABEL_367:
            PspUnlockJobChain(v16, Thread);
            goto LABEL_582;
          }
        }
        else if ( (v87 & 0x20) == 0 )
        {
          v13 = -1073741811;
          goto LABEL_367;
        }
        v89 = 0LL;
        goto LABEL_340;
      }
      if ( (v84 & 2) != 0 )
      {
        if ( (v84 & 0x10) != 0 )
          goto LABEL_547;
        v86 = (unsigned int)(HIDWORD(Object[0]) - 1) <= 8;
      }
      else
      {
        if ( (v84 & 0x10) == 0 )
        {
          if ( (unsigned int)(HIDWORD(Object[0]) - 1) > 0x270F )
            goto LABEL_547;
          goto LABEL_330;
        }
        if ( (v84 & 4) != 0 || !WORD2(Object[0]) || WORD2(Object[0]) > HIWORD(Object[0]) )
          goto LABEL_547;
        v86 = HIWORD(Object[0]) <= 0x2710u;
      }
      if ( !v86 )
        goto LABEL_547;
LABEL_330:
      if ( (v84 & 0x20) != 0 )
        v85 = 8;
      goto LABEL_332;
    }
    if ( v154 <= JobObjectMemoryPartitionInformation )
    {
      if ( v154 == JobObjectMemoryPartitionInformation )
      {
        if ( PreviousMode )
          v135 = RtlReadULong64FromUser(JobObjectInformation);
        else
          v135 = *(_QWORD *)JobObjectInformation;
        v182 = v135;
        LOBYTE(v12) = PreviousMode;
        v16 = Event;
        Silo = PspSetJobMemoryPartition(Event, v12, v135);
        goto LABEL_485;
      }
      if ( v154 != JobObjectIoRateControlInformation )
      {
        switch ( v154 )
        {
          case JobObjectNetRateControlInformation:
            v16 = Event;
            Silo = PspSetNetRateControl(JobObjectInformation);
            goto LABEL_485;
          case JobObjectNotificationLimitInformation2:
LABEL_36:
            if ( Size_4 == 48 )
            {
              if ( PreviousMode )
                RtlCopyFromUser(&v190, JobObjectInformation, Size_4);
              else
                RtlCopyVolatileMemory(&v190, JobObjectInformation, Size_4);
              v103 = DWORD2(v192);
              v105 = *((_QWORD *)&v190 + 1);
              v106 = v190;
              v186 = v190;
              v12 = *((_QWORD *)&v191 + 1);
              v104 = v191;
              *(_OWORD *)v187 = v191;
              *(_DWORD *)&v187[16] = v192;
              *(_QWORD *)&v187[20] = *(_QWORD *)((char *)&v192 + 4);
              v102 = 459268;
              v163 = 459268;
            }
            else
            {
              if ( Size_4 == 56 )
              {
                if ( PreviousMode )
                  RtlCopyFromUser(&v193, JobObjectInformation, Size_4);
                else
                  RtlCopyVolatileMemory(&v193, JobObjectInformation, Size_4);
                v103 = v196;
                *(_DWORD *)&v187[24] = v196;
                v105 = *((_QWORD *)&v193 + 1);
                v106 = v193;
                v186 = v193;
                v107 = *((_QWORD *)&v194 + 1);
                v108 = v194;
                v188 = v108 >> 64;
                v104 = v108;
                *(_QWORD *)v187 = v194;
                v12 = v195;
                *(_OWORD *)&v187[8] = v195;
                v102 = 2589188;
                v163 = 2589188;
LABEL_430:
                if ( (~v102 & (unsigned int)v103) != 0 )
                {
LABEL_83:
                  v13 = -1073741811;
LABEL_72:
                  v16 = Event;
                  goto LABEL_582;
                }
                if ( (v103 & 0x8000) != 0 )
                {
                  if ( v107 < 0x1000 )
                    goto LABEL_83;
                }
                else
                {
                  v107 = 0LL;
                  v188 = 0LL;
                }
                if ( (v103 & 0x200) != 0 )
                {
                  if ( v12 < 0x1000 || v12 < v107 )
                    goto LABEL_83;
                }
                else
                {
                  *(_QWORD *)&v187[8] = 0LL;
                }
                if ( (v103 & 4) != 0 )
                {
                  if ( !v104 )
                    goto LABEL_83;
                }
                else
                {
                  *(_QWORD *)v187 = 0LL;
                }
                if ( (v103 & 0x10000) != 0 )
                {
                  if ( !v106 )
                    goto LABEL_83;
                }
                else
                {
                  *(_QWORD *)&v186 = 0LL;
                }
                if ( (v103 & 0x20000) != 0 )
                {
                  if ( !v105 )
                    goto LABEL_83;
                }
                else
                {
                  *((_QWORD *)&v186 + 1) = 0LL;
                }
                v109 = 0LL;
                do
                {
                  PspNotificationLimitRateControlToleranceField(&v186, v109, v103);
                  PspNotificationLimitRateControlToleranceIntervalField(&v186);
                  v113 = PspRateControlLimitFlag((unsigned int)v110, v110, v111, v112);
                  if ( (v113 & (unsigned int)v103) != 0 )
                  {
                    if ( !*v114 || *v114 > 3 || !*v115 || *v115 > 3 )
                      goto LABEL_547;
                  }
                  else
                  {
                    *v114 = 0;
                    *v115 = 0;
                    v103 = *(unsigned int *)&v187[24];
                  }
                  v109 = (unsigned int)(v12 + 1);
                }
                while ( (int)v109 < 3 );
                v16 = Event;
                if ( Event[50].Header.WaitListHead.Blink )
                {
                  v116 = 0LL;
                  v117 = 0LL;
                }
                else
                {
                  v116 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
                  if ( !v116 )
                    goto LABEL_135;
                  v117 = (void *)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 136LL);
                  v35 = v116;
                  if ( !v117 )
                  {
                    v36 = 1649046352;
                    goto LABEL_139;
                  }
                  memset_0(v116, 0, 0x88uLL);
                }
                ExAcquireFastResourceExclusive((struct _KTHREAD *)&v16[2].Header.WaitListHead, 0LL, 1);
                if ( v16[50].Header.WaitListHead.Blink )
                {
                  if ( v116 )
                  {
                    ExFreePoolWithTag(v116, 0x624A7350u);
                    PsReturnSharedPoolQuota(v117);
                  }
                }
                else
                {
                  v16[50].Header.WaitListHead.Blink = v116;
                  *(_QWORD *)&v16[51].Header.Lock = v117;
                }
                v118 = v16[50].Header.WaitListHead.Blink;
                Flink = (int)v118->Flink;
                *(_OWORD *)&v118->Blink = v186;
                v118[1].Blink = *(struct _LIST_ENTRY **)v187;
                v120 = 0LL;
                v121 = (_DWORD *)&v118[3].Blink + 1;
                do
                {
                  v122 = (_DWORD *)PspNotificationLimitRateControlToleranceField(&v186, v120, v121);
                  *(_DWORD *)(v123 - 12) = *v122;
                  v124 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(&v186);
                  *v125 = *v124;
                  v120 = (unsigned int)(v126 + 1);
                  v121 = v125 + 1;
                }
                while ( (int)v120 < 3 );
                PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                v118[2].Flink = (struct _LIST_ENTRY *)(v188 >> 12);
                v118[2].Blink = (struct _LIST_ENTRY *)(*(_QWORD *)&v187[8] >> 12);
                LODWORD(v16[50].Header.WaitListHead.Blink->Flink) = *(_DWORD *)&v187[24];
                PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                if ( ((__int64)v16[50].Header.WaitListHead.Blink->Flink & 0xFFFF7DFF) != 0 )
                  _InterlockedAdd64((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.152, 1uLL);
                if ( Flink )
                {
                  v129 = v16[50].Header.WaitListHead.Blink;
                  if ( LODWORD(v129->Flink) )
                  {
LABEL_480:
                    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                      EtwTraceJobSetQuery((_DWORD)v16, v154, (unsigned int)&v186, 0, 0, 1829);
                    ExReleaseFastResourceExclusive((ULONG_PTR)&v16[2].Header.WaitListHead, 0LL, v127, v128);
                    PspLockJobMemoryLimitsShared(v16, 0LL);
                    JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                             v16,
                                                             v16[50].Header.WaitListHead.Flink,
                                                             (char *)v16[50].Header.WaitListHead.Flink
                                                           + (unsigned __int64)v16[65].Header.WaitListHead.Flink,
                                                             33280LL);
                    PspUnlockJobMemoryLimitsShared(v16, 0LL);
                    if ( JobMemoryUsageNotificationViolations )
                      PspScheduleEnforcementWorker((__int64)v16[54].Header.WaitListHead.Blink);
                    goto LABEL_267;
                  }
                }
                else
                {
                  v129 = v16[50].Header.WaitListHead.Blink;
                  if ( !LODWORD(v129->Flink) )
                    goto LABEL_480;
                }
                PspEnumJobsAndProcessesInJobHierarchy(v16, (__int64)v129, 5);
                goto LABEL_480;
              }
              if ( PreviousMode )
                RtlCopyFromUser(&v186, JobObjectInformation, Size_4);
              else
                RtlCopyVolatileMemory(&v186, JobObjectInformation, Size_4);
              v102 = 2064900;
              v163 = 2064900;
              v103 = *(unsigned int *)&v187[24];
              v12 = *(_QWORD *)&v187[8];
              v104 = *(_QWORD *)v187;
              v105 = *((_QWORD *)&v186 + 1);
              v106 = v186;
            }
            v107 = v188;
            goto LABEL_430;
          case JobObjectCreateSilo:
            v16 = Event;
            Silo = PspCreateSilo(Event);
            goto LABEL_485;
          case JobObjectSiloRootDirectory:
            v100 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
            v16 = Event;
            if ( v100 )
            {
              if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
              {
                if ( (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 4LL) )
                {
                  if ( PreviousMode )
                    v101 = RtlReadULongFromUser((unsigned int *)JobObjectInformation);
                  else
                    v101 = *(_DWORD *)JobObjectInformation;
                  v173 = v101;
                  Silo = ObCreateSiloRootDirectory(v16, v101);
                  goto LABEL_485;
                }
                goto LABEL_412;
              }
              goto LABEL_417;
            }
            break;
          case JobObjectServerSiloInitialize:
            v97 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
            v16 = Event;
            if ( v97 )
            {
              if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
              {
                if ( (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 4LL) )
                {
                  v159 = 0LL;
                  v98 = (unsigned int)(v12 + 12);
                  if ( PreviousMode )
                    RtlCopyFromUser(&v159, JobObjectInformation, v98);
                  else
                    RtlCopyVolatileMemory(&v159, JobObjectInformation, v98);
                  LOBYTE(v99) = PreviousMode;
                  Silo = PspConvertSiloToServerSilo((__int64)v16, v99, v159.m128i_u64[0], v159.m128i_i32[2]);
                  goto LABEL_485;
                }
                goto LABEL_412;
              }
LABEL_417:
              v13 = -1073740535;
              goto LABEL_582;
            }
            break;
          case JobObjectServerSiloRunningState:
            LODWORD(v158[0]) = 0;
            if ( PreviousMode )
              LODWORD(v158[0]) = RtlReadULongFromUser((unsigned int *)JobObjectInformation);
            else
              RtlCopyVolatileMemory(v158, JobObjectInformation, 4uLL);
            v16 = Event;
            if ( PspJobIsAppSilo((__int64)Event) && LODWORD(v158[0]) == 2 )
            {
              ExAcquireFastResourceExclusive((struct _KTHREAD *)&v16[2].Header.WaitListHead, 0LL, 1);
              if ( LODWORD(v16[60].Header.WaitListHead.Blink) )
              {
                v13 = -1073740529;
                goto LABEL_67;
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)&v16[64].Header.WaitListHead.Blink, 0x1Du) )
              {
                v13 = 255;
                goto LABEL_67;
              }
              PspHardDereferenceSiloWorker((__int64)v16);
              goto LABEL_276;
            }
LABEL_412:
            v13 = -1073741811;
            goto LABEL_582;
          case JobObjectIoAttribution:
            HIDWORD(v208) = 0;
            memset_0(&v208, 0, 0x44uLL);
            v95 = 0;
            if ( PreviousMode )
              RtlCopyFromUser(&v208, JobObjectInformation, 0x48uLL);
            else
              RtlCopyVolatileMemory(&v208, JobObjectInformation, 0x48uLL);
            if ( (v208 & 0xFFFFFFFC) == 0 && ((v208 & 1) != 0 || (v208 & 2) != 0) )
            {
              v95 = 8;
              v96 = Thread;
              v16 = Event;
              PspLockJobAndRootExclusive(Event, Thread);
              v13 = PspSetJobIoAttribution(v16);
              if ( v13 >= 0 )
              {
                PspUnlockJobAndRootExclusive(v16, v96);
                v95 = 0;
              }
            }
            else
            {
              v13 = -1073741811;
              v16 = Event;
            }
            if ( v95 == 8 )
              PspUnlockJobAndRootExclusive(v16, Thread);
            goto LABEL_582;
          default:
            goto LABEL_523;
        }
        v13 = -1073741727;
        goto LABEL_582;
      }
      v131 = 0LL;
      memset_0(&v208, 0, 0x90uLL);
      if ( PreviousMode )
        RtlCopyFromUser(&v208, JobObjectInformation, Size_4);
      else
        RtlCopyVolatileMemory(&v208, JobObjectInformation, Size_4);
      if ( Address )
      {
        ProbeForRead(Address, v212, 2u);
        if ( !v212 || (v212 & 1) != 0 )
          goto LABEL_500;
        v132 = (_WORD *)ExAllocatePool2(0x101uLL);
        v131 = v132;
        Object[0] = v132;
        if ( !v132 )
        {
          v13 = -1073741670;
          if ( PreviousMode == 1 )
            v13 = -1073741801;
          goto LABEL_501;
        }
        if ( PreviousMode )
          RtlCopyFromUser(v132, (void *)Address, v212);
        else
          RtlCopyVolatileMemory(v132, (const void *)Address, v212);
        v131[(unsigned __int64)v212 >> 1] = 0;
        Address = v131;
      }
      if ( (v211 & 0xFFFFFFF0) == 0 )
      {
        if ( !v213 && !v209[1] && !v214 || (unsigned __int8)PspIsContextAdmin() )
        {
          v16 = Event;
          v13 = PspSetJobIoRateControl(Event);
          goto LABEL_509;
        }
        v13 = -1073741790;
LABEL_501:
        v16 = Event;
LABEL_509:
        if ( !v131 )
          goto LABEL_582;
        v133 = 0;
        v134 = v131;
LABEL_511:
        ExFreePoolWithTag(v134, v133);
        goto LABEL_582;
      }
LABEL_500:
      v13 = -1073741811;
      goto LABEL_501;
    }
    if ( v154 == JobObjectContainerTelemetryId )
    {
      v16 = Event;
      ExAcquireFastResourceExclusive((struct _KTHREAD *)&Event[2].Header.WaitListHead, 0LL, 1);
      if ( SLODWORD(v16[64].Header.WaitListHead.Blink) < 0 )
      {
        v13 = -1073741791;
        goto LABEL_67;
      }
      v146 = v16 + 62;
      if ( PreviousMode )
        RtlCopyFromUser(v146, JobObjectInformation, 0x10uLL);
      else
        RtlCopyVolatileMemory(v146, JobObjectInformation, 0x10uLL);
      _InterlockedOr((volatile signed __int32 *)&v16[64].Header.WaitListHead.Blink, 0x80000000);
      goto LABEL_266;
    }
    if ( v154 != JobObjectSiloSystemRoot )
    {
      if ( v154 != JobObjectEnergyTrackingState )
      {
        switch ( v154 )
        {
          case JobObjectThreadImpersonationInformation:
            if ( PreviousMode )
              v139 = RtlReadUCharFromUser(JobObjectInformation);
            else
              v139 = *(_BYTE *)JobObjectInformation;
            v162 = v139;
            if ( v139 == 1 )
            {
              v140 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
              v16 = Event;
              if ( !v140 )
              {
                v13 = -1073741727;
                goto LABEL_582;
              }
              if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
              {
                v13 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 2LL) == 0 ? 0xC0000022 : 0;
                goto LABEL_582;
              }
              goto LABEL_535;
            }
            goto LABEL_547;
          case JobObjectIoPriorityLimit:
            Object[0] = 0LL;
            if ( PreviousMode )
            {
              v138 = RtlReadULong64FromUser(JobObjectInformation);
              Object[0] = (PVOID)v138;
            }
            else
            {
              RtlCopyVolatileMemory(Object, JobObjectInformation, 8uLL);
              LODWORD(v138) = Object[0];
            }
            if ( (v138 & 0xFFFFFFFE) != 0 )
              goto LABEL_83;
            v12 = HIDWORD(Object[0]);
            if ( HIDWORD(Object[0]) >= 5 )
              goto LABEL_547;
            v16 = Event;
            PspSetIoPriorityLimitJobTree(Event);
            break;
          case JobObjectPagePriorityLimit:
            Object[0] = 0LL;
            if ( PreviousMode )
            {
              v137 = RtlReadULong64FromUser(JobObjectInformation);
              Object[0] = (PVOID)v137;
            }
            else
            {
              RtlCopyVolatileMemory(Object, JobObjectInformation, 8uLL);
              LODWORD(v137) = Object[0];
            }
            if ( (v137 & 0xFFFFFFFE) != 0 )
              goto LABEL_83;
            v12 = HIDWORD(Object[0]);
            if ( HIDWORD(Object[0]) >= 8 )
              goto LABEL_547;
            v16 = Event;
            if ( (v137 & 1) != 0 && !HIDWORD(Object[0]) )
              goto LABEL_535;
            PspSetPagePriorityLimitJobTree(Event);
            break;
          case JobObjectCpuPartition:
            if ( PreviousMode )
              v136 = RtlReadULong64FromUser(JobObjectInformation);
            else
              v136 = *(_QWORD *)JobObjectInformation;
            v183 = v136;
            LOBYTE(v12) = PreviousMode;
            v16 = Event;
            Silo = PspSetJobCpuPartition(Event, v12, v136);
            goto LABEL_485;
          default:
            goto LABEL_523;
        }
LABEL_267:
        v13 = 0;
        goto LABEL_582;
      }
      v158[0] = 0LL;
      if ( PreviousMode )
        v158[0] = (PSECURITY_SUBJECT_CONTEXT)RtlReadULong64FromUser(JobObjectInformation);
      else
        RtlCopyVolatileMemory(v158, JobObjectInformation, 8uLL);
      v16 = Event;
      v82 = PspSetEnergyTrackingStateJobTree(Event, (__int64)v158);
      goto LABEL_296;
    }
    v16 = Event;
    if ( ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) == 0 )
      goto LABEL_417;
    v171 = 0LL;
    if ( PreviousMode )
    {
      v159 = 0LL;
      v159.m128i_i32[0] = RtlReadULongFromUser((unsigned int *)JobObjectInformation);
      v159.m128i_i64[1] = RtlReadULong64FromUser((char *)JobObjectInformation + 8);
      v141 = v159;
    }
    else
    {
      *(_OWORD *)v158 = 0LL;
      LODWORD(v158[0]) = *(_DWORD *)JobObjectInformation;
      v158[1] = *((PSECURITY_SUBJECT_CONTEXT *)JobObjectInformation + 1);
      v141 = *(__m128i *)v158;
    }
    *(__m128i *)Object = v141;
    v159 = v141;
    *(__m128i *)BugCheckParameter1 = v141;
    v142 = (volatile void *)_mm_srli_si128(v141, 8).m128i_u64[0];
    if ( !v142
      || (v143 = v159.m128i_u16[0], (unsigned __int16)(v159.m128i_i16[0] - 1) > 0x206u)
      || (v159.m128i_i8[0] & 1) != 0 )
    {
      v13 = -1073741811;
      v155 = -1073741811;
      goto LABEL_582;
    }
    if ( PreviousMode == 1 )
      ProbeForRead(v142, v159.m128i_u16[0], 2u);
    v144 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v145 = v144;
    v171 = v144;
    if ( !v144 )
    {
      v13 = -1073741670;
      v155 = -1073741670;
      goto LABEL_582;
    }
    if ( PreviousMode )
      RtlCopyFromUser(v144, (void *)v142, v143);
    else
      RtlCopyVolatileMemory(v144, (const void *)v142, v143);
    if ( wcsnlen(v145, v143 >> 1) == v143 >> 1 )
    {
      BugCheckParameter1[1] = (ULONG_PTR)v145;
      v13 = PspAssignSiloSystemRootPath((__int64)v16, (unsigned __int16 *)BugCheckParameter1);
    }
    else
    {
      v13 = -1073741811;
    }
    if ( v145 )
    {
      v133 = 1918071632;
      v134 = (wchar_t *)v145;
      goto LABEL_511;
    }
LABEL_582:
    v147 = Thread;
    v9 = Thread->SpecialApcDisable++ == -1;
    if ( v9 && ($241382875694CED3D471BC5892DE3337 *)v147->ApcState.ApcListHead[0].Flink != &v147->152 )
      KiCheckForKernelApcDelivery((__int64)v147, v12);
    if ( v13 )
    {
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery((_DWORD)v16, v154, 0, 0, v13, 1831);
    }
    ObfDereferenceObjectWithTag(v16, 0x79517350u);
    return v13;
  }
  return result;
}
