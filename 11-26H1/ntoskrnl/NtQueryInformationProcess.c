/*
 * XREFs of NtQueryInformationProcess @ 0x140A4A1F0
 * Callers:
 *     DifNtQueryInformationProcessWrapper @ 0x140683110 (DifNtQueryInformationProcessWrapper.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140200980 (KeFindFirstSetRightGroupMask.c)
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     PsGetEffectiveServerSilo @ 0x140216800 (PsGetEffectiveServerSilo.c)
 *     KeQuerySystemTimePrecise @ 0x14021B070 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PspLockProcessShared @ 0x140276700 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KeIsEmptyGroupMask @ 0x14040B460 (KeIsEmptyGroupMask.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     KeTestBitGroupMask @ 0x14044BF80 (KeTestBitGroupMask.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryCpuSetsProcess @ 0x140462EDC (KeQueryCpuSetsProcess.c)
 *     KeQueryAffinityProcess @ 0x140469110 (KeQueryAffinityProcess.c)
 *     KeClearBitGroupMask @ 0x14047042C (KeClearBitGroupMask.c)
 *     MmQueryWorkingSetInformation @ 0x140476F50 (MmQueryWorkingSetInformation.c)
 *     PsGetWin32KFilterSet @ 0x1404807C0 (PsGetWin32KFilterSet.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140485264 (ExQueryHandleExceptionsPermanency.c)
 *     KeQueryGroupMaskProcess @ 0x140499E54 (KeQueryGroupMaskProcess.c)
 *     PsQueryProcessCommandLine @ 0x1404B54B0 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x1404C804C (MmQueryCommitReleaseState.c)
 *     PspQueryInformationProcessAvailableCpus @ 0x14052CCA8 (PspQueryInformationProcessAvailableCpus.c)
 *     xKdEnumerateDebuggingDevices @ 0x1405306C0 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x140725ED0 (ZwQueryInformationJobObject.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x14077429C (EtwQueryProcessTelemetryCoverage.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ExEnumHandleTable @ 0x1408FBBA0 (ExEnumHandleTable.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     PsQueryStatisticsProcess @ 0x140952680 (PsQueryStatisticsProcess.c)
 *     PsQueryProcessEnergyValues @ 0x140952980 (PsQueryProcessEnergyValues.c)
 *     ObGetProcessHandleCount @ 0x1409533C0 (ObGetProcessHandleCount.c)
 *     PsGetProcessDeepFreezeStats @ 0x140953FC0 (PsGetProcessDeepFreezeStats.c)
 *     PspFindFirstThreadByTebValue @ 0x140955E54 (PspFindFirstThreadByTebValue.c)
 *     PsQueryProcessAttributes @ 0x1409675B0 (PsQueryProcessAttributes.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 *     DbgkOpenProcessDebugPort @ 0x140987150 (DbgkOpenProcessDebugPort.c)
 *     IoQueryFileDosDeviceName @ 0x1409FC050 (IoQueryFileDosDeviceName.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ObQueryDeviceMapInformation @ 0x140A181D0 (ObQueryDeviceMapInformation.c)
 *     MiCopyVirtualMemory @ 0x140A22370 (MiCopyVirtualMemory.c)
 *     ExQueryProcessHandleInformation @ 0x140A32DCC (ExQueryProcessHandleInformation.c)
 *     PsQueryRuntimeProcess @ 0x140A5C9B0 (PsQueryRuntimeProcess.c)
 *     PspQueryQuotaLimits @ 0x140A6B5B0 (PspQueryQuotaLimits.c)
 *     ExReferenceHandleDebugInfo @ 0x140A78C00 (ExReferenceHandleDebugInfo.c)
 *     PsQueryFullProcessImageName @ 0x140A83F60 (PsQueryFullProcessImageName.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x140A882E0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     KeGetExecuteOptions @ 0x140A8BEEC (KeGetExecuteOptions.c)
 *     PspQueryWorkingSetWatch @ 0x140A8C1D4 (PspQueryWorkingSetWatch.c)
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A8F474 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A8F64C (ExDereferenceHandleDebugInfo.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140AA40B0 (PsQueryTotalCycleTimeProcess.c)
 *     PsReferenceProcessFilePointer @ 0x140AAE560 (PsReferenceProcessFilePointer.c)
 *     VslGetSecurePebAddress @ 0x140AEF304 (VslGetSecurePebAddress.c)
 *     PspGetRedirectionTrustPolicy @ 0x140AFE274 (PspGetRedirectionTrustPolicy.c)
 *     PsGetSiloIdentifier @ 0x140B09670 (PsGetSiloIdentifier.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140B0ADD8 (PsIumGetOnDemandDebugChallenge.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140B2A010 (PoQueryProcessEnergyTrackingState.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     VslLiveDumpCaptureProcess @ 0x140B480F8 (VslLiveDumpCaptureProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x140B6DF2C (PspQueryPooledQuotaLimits.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

int __fastcall NtQueryInformationProcess(void *a1, int a2, void *a3, unsigned int a4, struct _EX_RUNDOWN_REF *a5)
{
  size_t v5; // rsi
  unsigned __int64 v6; // r12
  __int64 Count; // r14
  unsigned __int8 PreviousMode; // r13
  __int64 v10; // rcx
  int v11; // edi
  int ULongFromUser; // eax
  unsigned int v13; // eax
  int result; // eax
  int v15; // eax
  __int128 *v16; // rdx
  int DeviceMapInformation; // edi
  _QWORD *v18; // rbx
  char v19; // di
  char v20; // si
  struct _KLOCK_ENTRIES *v21; // r9
  unsigned int v22; // ebx
  _KPROCESS *v23; // rcx
  unsigned __int16 v24; // dx
  size_t v25; // r8
  __int64 *v26; // rdx
  int v27; // eax
  PVOID v28; // rbx
  int v29; // ebx
  unsigned int v30; // ebx
  struct _EX_RUNDOWN_REF *v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  struct _EX_RUNDOWN_REF *v34; // rbx
  char v35; // si
  struct _FILE_OBJECT *v36; // rbx
  int v37; // ebx
  POBJECT_NAME_INFORMATION v38; // rdi
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  void *v41; // rcx
  __m128i v42; // xmm6
  HANDLE v43; // rbx
  void *Process; // r10
  void *v45; // r10
  __int64 *v46; // rax
  struct _KLOCK_ENTRIES *v47; // r9
  struct _KTHREAD *v48; // rax
  __int64 *p_Lock; // rdi
  signed __int64 *v50; // rbx
  void *v51; // rdx
  LegacyAutoBoost *v52; // rsi
  signed __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r8
  struct _KLOCK_ENTRIES *v56; // r9
  HANDLE v57; // rbx
  _KPROCESS *v58; // rcx
  int ProcessCommandLine; // eax
  bool v60; // cf
  PVOID v61; // rsi
  PVOID v62; // rcx
  int v63; // ebx
  int v64; // edi
  PVOID v65; // r13
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rbx
  unsigned int *v69; // rbx
  unsigned __int64 v70; // rax
  __int64 v71; // rbx
  int *p_LockNV; // rbx
  __int64 v73; // rax
  __int64 v74; // rax
  struct _KTHREAD *v75; // r14
  struct _EX_RUNDOWN_REF *v76; // rbx
  unsigned int *v77; // rax
  __int64 v78; // rdx
  int ProcessHandleInformation; // edi
  struct _EX_RUNDOWN_REF *v80; // rcx
  __int64 v81; // rbx
  size_t v82; // r8
  int v83; // eax
  unsigned __int64 v84; // rax
  HANDLE v85; // rbx
  HANDLE v86; // rcx
  bool v87; // zf
  int v88; // eax
  unsigned int v89; // ecx
  __int64 v90; // rax
  unsigned int v91; // eax
  int v92; // edi
  unsigned __int16 FirstSetRightGroupMask; // ax
  unsigned __int16 v94; // di
  unsigned int v95; // ebx
  int v96; // eax
  int ProcessHandleCount; // edi
  struct _KTHREAD *v98; // rdi
  __int64 v99; // rax
  ULONG_PTR v100; // rbx
  __int64 v101; // rsi
  PVOID v102; // rbx
  __int64 v103; // rdi
  int v104; // r12d
  int v105; // ebx
  int v106; // ebx
  struct _EX_RUNDOWN_REF *v107; // rbx
  unsigned int *v108; // rax
  size_t v109; // r15
  HANDLE v110; // rbx
  struct _EX_RUNDOWN_REF *v111; // rsi
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // ebx
  PVOID v116; // rdi
  int v117; // esi
  HANDLE v118; // rdi
  int v119; // ebx
  _KPROCESS *v120; // rax
  struct _LIST_ENTRY *Blink; // rdx
  int v122; // ebx
  int v123; // eax
  struct _EX_RUNDOWN_REF *v124; // rsi
  struct _EX_RUNDOWN_REF *v125; // rax
  __int64 v126; // rax
  void *ULong64FromUser; // r9
  _DWORD *v128; // r8
  unsigned int v129; // esi
  unsigned int i; // edx
  _OWORD *v131; // rax
  int v132; // eax
  HANDLE v133; // rbx
  int v134; // ecx
  unsigned int ProcessTelemetryCoverage; // eax
  int v136; // ecx
  int v137; // ecx
  int NoChildProcessRestrictedPolicy; // eax
  int v139; // ecx
  unsigned __int64 v140; // rax
  int v141; // eax
  int v142; // eax
  __int64 v143; // rax
  _KPROCESS *v144; // rcx
  __int64 v145; // rcx
  __int64 *ReadyTime; // rax
  __int128 *v147; // rbx
  int FirstThreadByTebValue; // eax
  int v149; // eax
  void *v150; // rcx
  int v151; // eax
  int v152; // eax
  int v153; // eax
  unsigned int v154; // edx
  int v155; // edx
  int v156; // ecx
  __int16 v157; // ax
  int Spare0e; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // esi
  unsigned __int64 v161; // rbx
  int v162; // eax
  bool IsCurrentThreadInServerSilo; // al
  PVOID v164; // rbx
  __int64 EffectiveServerSilo; // rax
  unsigned __int64 v166; // rax
  struct _KLOCK_ENTRIES *v167; // r9
  int v168; // eax
  int RedirectionTrustPolicy; // eax
  int v170; // eax
  int v171; // ecx
  int v172; // ecx
  int v173; // eax
  int v174; // eax
  unsigned int v175; // edx
  int v176; // edx
  __int64 v177; // rax
  int v178; // eax
  __int64 v179; // rcx
  int v180; // ebx
  int v181; // edx
  unsigned int v182; // eax
  char v183; // dl
  unsigned int v184; // ebx
  int v185; // eax
  int v186; // eax
  int v187; // eax
  __int64 v188; // rdx
  int v189; // eax
  int v190; // edx
  int v191; // eax
  unsigned __int8 v192; // r8
  unsigned int v193; // edx
  int v194; // edx
  __int64 v195; // r8
  struct _KLOCK_ENTRIES *v196; // r9
  __int64 v197; // rdx
  signed __int32 v198[8]; // [rsp+0h] [rbp-AC8h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-AA8h]
  unsigned __int8 v200; // [rsp+40h] [rbp-A88h]
  PVOID Object; // [rsp+48h] [rbp-A80h] BYREF
  __int64 v202; // [rsp+50h] [rbp-A78h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A70h]
  _BYTE v204[4]; // [rsp+60h] [rbp-A68h] BYREF
  int v205; // [rsp+64h] [rbp-A64h] BYREF
  int v206; // [rsp+68h] [rbp-A60h] BYREF
  int v207; // [rsp+6Ch] [rbp-A5Ch]
  __int16 v208; // [rsp+70h] [rbp-A58h] BYREF
  bool v209; // [rsp+72h] [rbp-A56h]
  HANDLE P; // [rsp+78h] [rbp-A50h] BYREF
  PVOID v211[2]; // [rsp+80h] [rbp-A48h] BYREF
  PVOID v212[2]; // [rsp+90h] [rbp-A38h] BYREF
  unsigned int v213; // [rsp+A0h] [rbp-A28h]
  HANDLE v214[2]; // [rsp+B0h] [rbp-A18h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+C0h] [rbp-A08h] BYREF
  __int16 v216; // [rsp+C8h] [rbp-A00h] BYREF
  PVOID v217; // [rsp+D0h] [rbp-9F8h]
  int v218; // [rsp+D8h] [rbp-9F0h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-9E8h]
  __int64 v220; // [rsp+E8h] [rbp-9E0h] BYREF
  void *v221; // [rsp+F0h] [rbp-9D8h] BYREF
  unsigned int v222; // [rsp+F8h] [rbp-9D0h]
  unsigned int v223; // [rsp+FCh] [rbp-9CCh]
  char v224[4]; // [rsp+100h] [rbp-9C8h] BYREF
  int v225[3]; // [rsp+104h] [rbp-9C4h] BYREF
  PEX_RUNDOWN_REF RunRef[2]; // [rsp+110h] [rbp-9B8h] BYREF
  __int128 v227; // [rsp+120h] [rbp-9A8h]
  __int64 v228; // [rsp+130h] [rbp-998h] BYREF
  _DWORD v229[2]; // [rsp+138h] [rbp-990h] BYREF
  __int64 v230; // [rsp+140h] [rbp-988h] BYREF
  __int64 v231; // [rsp+148h] [rbp-980h]
  __int64 v232; // [rsp+150h] [rbp-978h]
  struct _LIST_ENTRY *Flink; // [rsp+158h] [rbp-970h]
  __int64 v234; // [rsp+160h] [rbp-968h]
  __int64 v235; // [rsp+168h] [rbp-960h]
  int v236; // [rsp+184h] [rbp-944h]
  int v237; // [rsp+210h] [rbp-8B8h]
  int v238[8]; // [rsp+280h] [rbp-848h] BYREF
  __int128 v239; // [rsp+2A0h] [rbp-828h] BYREF
  int v240; // [rsp+2B0h] [rbp-818h]
  unsigned __int64 v241; // [rsp+2B8h] [rbp-810h]
  __int64 v242; // [rsp+2C0h] [rbp-808h] BYREF
  unsigned int v243; // [rsp+2C8h] [rbp-800h]
  __int128 v244; // [rsp+2D0h] [rbp-7F8h] BYREF
  __int128 v245; // [rsp+2E0h] [rbp-7E8h]
  __int128 v246; // [rsp+2F0h] [rbp-7D8h]
  __int128 v247; // [rsp+300h] [rbp-7C8h]
  __int128 v248; // [rsp+310h] [rbp-7B8h]
  __int128 v249; // [rsp+320h] [rbp-7A8h]
  __int128 v250; // [rsp+330h] [rbp-798h]
  __int128 v251; // [rsp+340h] [rbp-788h]
  __int128 v252; // [rsp+350h] [rbp-778h]
  __int128 v253; // [rsp+360h] [rbp-768h]
  PVOID v254; // [rsp+370h] [rbp-758h]
  ULONG_PTR v255; // [rsp+378h] [rbp-750h]
  unsigned __int64 v256; // [rsp+380h] [rbp-748h]
  __int128 v257; // [rsp+388h] [rbp-740h] BYREF
  __int64 v258; // [rsp+3A0h] [rbp-728h] BYREF
  __int128 v259; // [rsp+3A8h] [rbp-720h]
  int v260; // [rsp+3B8h] [rbp-710h]
  __int128 v261; // [rsp+3C0h] [rbp-708h]
  __int128 v262; // [rsp+3D0h] [rbp-6F8h]
  __int128 v263; // [rsp+3E0h] [rbp-6E8h]
  __int128 v264; // [rsp+3F0h] [rbp-6D8h]
  __int128 v265; // [rsp+400h] [rbp-6C8h]
  __int128 v266; // [rsp+410h] [rbp-6B8h]
  __int128 v267; // [rsp+420h] [rbp-6A8h]
  __int128 v268; // [rsp+430h] [rbp-698h]
  __int128 v269; // [rsp+440h] [rbp-688h] BYREF
  PEX_RUNDOWN_REF Src; // [rsp+450h] [rbp-678h] BYREF
  __int128 v271; // [rsp+458h] [rbp-670h]
  __int128 v272; // [rsp+468h] [rbp-660h] BYREF
  __int64 v273; // [rsp+478h] [rbp-650h]
  __int64 v274; // [rsp+480h] [rbp-648h]
  __int64 v275; // [rsp+488h] [rbp-640h]
  __int64 v276; // [rsp+490h] [rbp-638h]
  __int64 v277; // [rsp+498h] [rbp-630h]
  __int64 v278; // [rsp+4A0h] [rbp-628h]
  __int64 v279; // [rsp+4A8h] [rbp-620h]
  _QWORD v280[2]; // [rsp+4B0h] [rbp-618h] BYREF
  __int128 v281; // [rsp+4C0h] [rbp-608h] BYREF
  __int128 v282; // [rsp+4D0h] [rbp-5F8h] BYREF
  __int128 v283; // [rsp+4E0h] [rbp-5E8h] BYREF
  _DWORD v284[4]; // [rsp+4F0h] [rbp-5D8h] BYREF
  __int128 v285; // [rsp+500h] [rbp-5C8h] BYREF
  _OWORD v286[3]; // [rsp+510h] [rbp-5B8h] BYREF
  __int128 v287; // [rsp+540h] [rbp-588h]
  __int128 v288; // [rsp+550h] [rbp-578h]
  __int64 v289; // [rsp+560h] [rbp-568h]
  __int64 v290; // [rsp+570h] [rbp-558h] BYREF
  _QWORD v291[33]; // [rsp+578h] [rbp-550h] BYREF
  char v292[16]; // [rsp+680h] [rbp-448h] BYREF
  int v293; // [rsp+690h] [rbp-438h]
  __int64 v294; // [rsp+6F8h] [rbp-3D0h]
  __int64 v295; // [rsp+710h] [rbp-3B8h]
  _BYTE v296[144]; // [rsp+720h] [rbp-3A8h] BYREF
  _OWORD v297[28]; // [rsp+7B0h] [rbp-318h] BYREF
  _BYTE v298[256]; // [rsp+970h] [rbp-158h] BYREF

  v5 = a4;
  v6 = (unsigned __int64)a3;
  Handle = a1;
  v221 = a1;
  v217 = a3;
  v213 = a4;
  RunRef[0] = a5;
  memset(v286, 0, sizeof(v286));
  Count = 0LL;
  v214[0] = 0LL;
  v206 = 0;
  memset_0(&v290, 0, 0x108uLL);
  v211[0] = 0LL;
  v283 = 0LL;
  v225[0] = 0;
  memset_0(v292, 0, 0x98uLL);
  v257 = 0LL;
  v287 = 0LL;
  v288 = 0LL;
  v289 = 0LL;
  ObjectNameInformation = 0LL;
  LOWORD(v205) = 0;
  v216 = 0;
  Object = 0LL;
  v220 = 0LL;
  P = 0LL;
  v212[0] = 0LL;
  memset_0(&v244, 0, 0x68uLL);
  memset_0(&Src, 0, 0x70uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v200 = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  if ( !PreviousMode )
  {
    v11 = 1;
    goto LABEL_25;
  }
  if ( a2 != 18 && a2 != 61 )
  {
    if ( a2 == 65 )
    {
      v10 = 7LL;
      goto LABEL_7;
    }
    if ( ((a2 - 70) & 0xFFFFFFFB) != 0 )
    {
      if ( a2 == 92 )
      {
        v10 = 7LL;
        goto LABEL_7;
      }
      if ( a2 == 94 )
      {
        v10 = 7LL;
        goto LABEL_7;
      }
      if ( a2 != 87 )
      {
        v11 = 1;
        if ( a2 == 47 )
        {
          v10 = 1LL;
        }
        else
        {
          v10 = 7LL;
          if ( a2 != 115 )
          {
            v13 = 3;
            if ( a2 == 117 )
              v13 = 7;
            v10 = v13;
          }
        }
        goto LABEL_8;
      }
    }
  }
  v10 = 0LL;
LABEL_7:
  v11 = 1;
LABEL_8:
  if ( (_DWORD)v5 && (v10 & v6) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a5 )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)a5);
    RtlWriteULongToUser(a5, ULongFromUser);
  }
LABEL_25:
  if ( a2 == 1 )
    return PspQueryQuotaLimits((ULONG_PTR)Handle, (__int64)a5, PreviousMode);
  if ( a2 == 27 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)Handle,
               4096LL,
               PsProcessType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    if ( (unsigned int)v5 < 0x10 )
    {
      v15 = 0;
    }
    else
    {
      Count = v6 + 16;
      v15 = v5 - 16;
    }
    v205 = v15;
    v16 = &v257;
    if ( (unsigned int)v5 >= 0x10 )
      v16 = (__int128 *)v6;
    LOBYTE(ObjectType) = PreviousMode;
    DeviceMapInformation = PsQueryFullProcessImageName(Object, v16, Count, &v205, (_DWORD)ObjectType);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( DeviceMapInformation >= 0 && !Count )
      DeviceMapInformation = -1073741820;
    if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
    {
      v27 = v205 + 16;
      if ( PreviousMode )
        RtlWriteULongToUser(a5, v27);
      else
        LODWORD(a5->Count) = v27;
    }
    return DeviceMapInformation;
  }
  if ( a2 )
  {
    if ( a2 != 3 )
    {
      switch ( a2 )
      {
        case 2:
          if ( (_DWORD)v5 != 48 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          PsQueryStatisticsProcess(Object, &v244, v55, v56);
          Src = (PEX_RUNDOWN_REF)*((_QWORD *)&v246 + 1);
          v271 = v247;
          v272 = v248;
          v273 = v249;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, &Src, 0x30uLL);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, 0x30uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 48);
            else
              LODWORD(a5->Count) = 48;
          }
          return DeviceMapInformation;
        case 4:
          if ( (_DWORD)v5 != 32 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          v32 = PsQueryRuntimeProcess(Object, v212) * (unsigned int)KeMaximumIncrement;
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)(v6 + 16), v32);
          else
            *(_QWORD *)(v6 + 16) = v32;
          v33 = (_QWORD *)(v6 + 24);
          if ( PreviousMode )
            RtlWriteULong64ToUser(v33, (unsigned __int64)v212[0] * (unsigned int)KeMaximumIncrement);
          else
            *v33 = (unsigned __int64)v212[0] * (unsigned int)KeMaximumIncrement;
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)v6, v31[63].Count);
          else
            *(struct _EX_RUNDOWN_REF *)v6 = v31[63];
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)(v6 + 8), v31[184].Count);
          else
            *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v31[184];
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 32);
            else
              LODWORD(a5->Count) = 32;
          }
          goto LABEL_133;
        case 7:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v81 = -(__int64)(*((_QWORD *)Object + 97) != 0LL);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)v6, v81);
          else
            *(_QWORD *)v6 = v81;
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_194;
          LODWORD(a5->Count) = 8;
          return 0;
        case 10:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1040LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
          goto LABEL_639;
        case 12:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v29 = *((_DWORD *)Object + 226);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v29);
          else
            *(_DWORD *)v6 = v29;
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_948;
          LODWORD(a5->Count) = 4;
          return 0;
        case 14:
          return PspQueryPooledQuotaLimits((ULONG_PTR)Handle, (void *)v6, PreviousMode);
        case 15:
        case 42:
          return PspQueryWorkingSetWatch((ULONG_PTR)Handle, (__int64)a5, PreviousMode);
        case 18:
          if ( (_DWORD)v5 != 2 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          LOBYTE(v216) = 0;
          HIBYTE(v216) = *((_BYTE *)Object + 839);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteUShortToUser((_WORD *)v6, v216);
          else
            RtlCopyVolatileMemory((void *)v6, &v216, 2uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 2);
            else
              LODWORD(a5->Count) = 2;
          }
          return 0;
        case 19:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                   (ULONG_PTR)Handle,
                                   1024LL,
                                   PsProcessType,
                                   PreviousMode,
                                   0x79517350u,
                                   &Object,
                                   0LL,
                                   0LL);
          if ( DeviceMapInformation < 0 )
            return DeviceMapInformation;
          v115 = *((_BYTE *)Object + 503) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v115);
          else
            *(_DWORD *)v6 = v115;
          if ( !a5 )
            return DeviceMapInformation;
          if ( PreviousMode )
            goto LABEL_547;
          LODWORD(a5->Count) = 4;
          return DeviceMapInformation;
        case 20:
          v205 = 0;
          if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &v205);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( (_DWORD)v5 == 4 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)v6, ProcessHandleCount);
            else
              *(_DWORD *)v6 = ProcessHandleCount;
          }
          else
          {
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)v6, ProcessHandleCount);
            else
              *(_DWORD *)v6 = ProcessHandleCount;
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)(v6 + 4), v205);
            else
              *(_DWORD *)(v6 + 4) = v205;
          }
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_948;
          LODWORD(a5->Count) = 4;
          return 0;
        case 21:
          if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (*((_DWORD *)Object + 34) & 0x1000) != 0 )
          {
            DeviceMapInformation = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return DeviceMapInformation;
          }
          v290 = 2097153LL;
          memset_0(v291, 0, 0x100uLL);
          KeQueryAffinityProcess((__int64)v31, (__int64)&v290, &v283, 0LL, &v205);
          v179 = v291[(unsigned __int16)v205];
          v220 = v179;
          if ( (_DWORD)v5 == 16 )
          {
            if ( PreviousMode )
              RtlWriteUShortToUser((_WORD *)(v6 + 8), v205);
            else
              *(_WORD *)(v6 + 8) = v205;
            if ( PreviousMode )
              RtlWriteULong64ToUser((_QWORD *)v6, v220);
            else
              *(_QWORD *)v6 = v220;
          }
          else if ( PreviousMode )
          {
            RtlWriteULong64ToUser((_QWORD *)v6, v179);
          }
          else
          {
            RtlCopyVolatileMemory((void *)v6, &v220, 8uLL);
          }
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, v5);
            else
              LODWORD(a5->Count) = v5;
          }
          goto LABEL_133;
        case 22:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                   (ULONG_PTR)Handle,
                                   4096LL,
                                   PsProcessType,
                                   PreviousMode,
                                   0x79517350u,
                                   &Object,
                                   0LL,
                                   0LL);
          if ( DeviceMapInformation < 0 )
            return DeviceMapInformation;
          v119 = (*((_DWORD *)Object + 34) >> 1) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v119);
          else
            *(_DWORD *)v6 = v119;
          if ( !a5 )
            return DeviceMapInformation;
          if ( PreviousMode )
            goto LABEL_547;
          LODWORD(a5->Count) = 4;
          return DeviceMapInformation;
        case 23:
          if ( (unsigned int)v5 < 0x24 )
            return -1073741820;
          if ( (_DWORD)v5 == 48 )
          {
            if ( PreviousMode )
              v30 = RtlReadULongFromUser((unsigned int *)(v6 + 40));
            else
              v30 = *(_DWORD *)(v6 + 40);
            v243 = v30;
            if ( (v30 & 0xFFFFFFFE) != 0 )
              return -1073741811;
          }
          else
          {
            if ( (_DWORD)v5 != 36 )
              return -1073741820;
            v30 = 0;
          }
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, (void *)v6, v30, PreviousMode);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( DeviceMapInformation >= 0 && a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, v5);
            else
              LODWORD(a5->Count) = v5;
          }
          return DeviceMapInformation;
        case 24:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          LODWORD(Src) = PsGetSessionId((__int64)Object);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, (int)Src);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, 4uLL);
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_948;
          LODWORD(a5->Count) = 4;
          return 0;
        case 26:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v46 = (__int64 *)*((_QWORD *)Object + 98);
          if ( v46 )
            Count = *v46;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)v6, Count);
          else
            *(_QWORD *)v6 = Count;
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_194;
          LODWORD(a5->Count) = 8;
          return 0;
        case 28:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, 1);
          else
            *(_DWORD *)v6 = 1;
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_35;
          LODWORD(a5->Count) = 4;
          return 0;
        case 29:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v122 = (*((_DWORD *)Object + 125) >> 13) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v122);
          else
            *(_DWORD *)v6 = v122;
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_948;
          LODWORD(a5->Count) = 4;
          return 0;
        case 30:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v117 = DbgkOpenProcessDebugPort((__int64)Object, PreviousMode, v214);
            v118 = v214[0];
            if ( v117 < 0 )
              v118 = 0LL;
            v214[0] = v118;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( PreviousMode )
              RtlWriteULong64ToUser((_QWORD *)v6, (__int64)v118);
            else
              *(_QWORD *)v6 = v118;
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 8);
              else
                LODWORD(a5->Count) = 8;
            }
            return v117;
          }
          return result;
        case 31:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v63 = result;
          if ( result < 0 )
            return result;
          v116 = Object;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, (*((_DWORD *)Object + 125) & 2) == 0);
          else
            *(_DWORD *)v6 = (*((_DWORD *)Object + 125) & 2) == 0;
          if ( !a5 )
            goto LABEL_528;
          if ( PreviousMode )
            goto LABEL_525;
          LODWORD(a5->Count) = 4;
          goto LABEL_528;
        case 32:
          memset_0(&v258, 0, 0xA0uLL);
          v206 = 0;
          if ( (unsigned int)v5 < 0x10 )
            return -1073741820;
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, &v206) )
            return -1073741790;
          v212[0] = (PVOID)((unsigned int)(v5 - 16) / 0xA0uLL);
          v211[0] = (PVOID)(v6 + 16);
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v92 = result;
          if ( result < 0 )
            return result;
          v124 = (struct _EX_RUNDOWN_REF *)Object;
          v125 = (struct _EX_RUNDOWN_REF *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          RunRef[0] = v125;
          if ( v125 )
          {
            v126 = ExReferenceHandleDebugInfo(v125);
            v214[0] = (HANDLE)v126;
            if ( v126 )
            {
              LOBYTE(v205) = 0;
              if ( (*(_DWORD *)(v126 + 8) & 3) != 0 )
              {
                ExAcquireFastMutex((PKGUARDED_MUTEX)(v126 + 16));
                LOBYTE(v205) = 1;
              }
              if ( PreviousMode )
                ULong64FromUser = (void *)RtlReadULong64FromUser((volatile void *)v6);
              else
                ULong64FromUser = *(void **)v6;
              v217 = ULong64FromUser;
              v236 = 0;
              v128 = v214[0];
              v129 = *((_DWORD *)v214[0] + 18) % *((_DWORD *)v214[0] + 1);
              v222 = v129;
              for ( i = 0; ; ++i )
              {
                v223 = i;
                if ( i >= v128[1] )
                  break;
                v131 = &v128[40 * v129];
                v244 = v131[5];
                v245 = v131[6];
                v246 = v131[7];
                v247 = v131[8];
                v248 = v131[9];
                v249 = v131[10];
                v250 = v131[11];
                v251 = v131[12];
                v252 = v131[13];
                v253 = v131[14];
                if ( (ULong64FromUser == (void *)v245 || !ULong64FromUser) && DWORD2(v245) )
                {
                  LODWORD(Count) = Count + 1;
                  v236 = Count;
                  if ( LODWORD(v212[0]) )
                  {
                    v212[0] = (PVOID)(unsigned int)(LODWORD(v212[0]) - 1);
                    v240 = (int)v212[0];
                    memset_0(&v258, 0, 0xA0uLL);
                    v258 = v245;
                    v259 = v244;
                    v260 = DWORD2(v245);
                    if ( !v206 )
                    {
                      v261 = v246;
                      v262 = v247;
                      v263 = v248;
                      v264 = v249;
                      v265 = v250;
                      v266 = v251;
                      v267 = v252;
                      v268 = v253;
                    }
                    if ( PreviousMode )
                      RtlCopyToUser(v211[0], &v258, 0xA0uLL);
                    else
                      RtlCopyVolatileMemory(v211[0], &v258, 0xA0uLL);
                    v211[0] = (char *)v211[0] + 160;
                    v254 = v211[0];
                    v128 = v214[0];
                    i = v223;
                    ULong64FromUser = v217;
                  }
                  else
                  {
                    v92 = -1073741820;
                    v207 = -1073741820;
                  }
                }
                if ( !v129 )
                  v129 = v128[1];
                v222 = --v129;
              }
              if ( PreviousMode )
                RtlWriteULongToUser((_DWORD *)(v6 + 8), Count);
              else
                *(_DWORD *)(v6 + 8) = Count;
              if ( a5 )
              {
                v132 = LODWORD(v211[0]) - v6;
                if ( PreviousMode )
                  RtlWriteULongToUser(a5, v132);
                else
                  LODWORD(a5->Count) = v132;
              }
              v133 = v214[0];
              if ( (_BYTE)v205 )
                KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)v214[0] + 16));
              ExDereferenceHandleDebugInfo(RunRef[0], v133);
              v124 = (struct _EX_RUNDOWN_REF *)Object;
            }
            else
            {
              v92 = -1073741811;
            }
            ExReleaseRundownProtection_0(v124 + 61);
          }
          else
          {
            v92 = -1073741558;
          }
          goto LABEL_618;
        case 33:
        case 110:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v238[0] = 0;
          v87 = a2 == 33;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          v175 = *((_DWORD *)Object + 125);
          if ( v87 )
          {
            v176 = (v175 >> 27) & 7;
          }
          else
          {
            v176 = (v175 >> 27) & 7;
            v177 = *((_QWORD *)Object + 84);
            if ( v177 )
            {
              v178 = *(_DWORD *)(v177 + 1084);
              if ( v176 >= v178 )
                v176 = v178;
            }
          }
          v238[0] = v176;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v176);
          else
            RtlCopyVolatileMemory((void *)v6, v238, 4uLL);
          if ( !a5 )
            goto LABEL_133;
          if ( PreviousMode )
            goto LABEL_392;
          LODWORD(a5->Count) = 4;
          goto LABEL_133;
        case 34:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          v43 = Handle;
          if ( Handle == (HANDLE)-1LL )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       1024LL,
                       PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            Process = Object;
          }
          DeviceMapInformation = KeGetExecuteOptions(Process, &v206);
          if ( v43 != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(v45, 0x79517350u);
          if ( DeviceMapInformation >= 0 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)v6, v206);
            else
              *(_DWORD *)v6 = v206;
            if ( a5 )
            {
              if ( PreviousMode )
LABEL_547:
                RtlWriteULongToUser(a5, 4);
              else
                LODWORD(a5->Count) = 4;
            }
          }
          return DeviceMapInformation;
        case 36:
          ObjectNameInformation = 0LL;
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          v57 = Handle;
          if ( Handle == (HANDLE)-1LL )
          {
            v58 = KeGetCurrentThread()->ApcState.Process;
            v214[0] = v58;
            Object = v58;
          }
          else
          {
            v212[0] = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsProcessType, PreviousMode, v212, 0LL);
            v58 = (_KPROCESS *)v212[0];
            v214[0] = v212[0];
            Object = v212[0];
            if ( result < 0 )
              return result;
          }
          while ( 1 )
          {
            Spare0e = v58[1].Spare0e;
            if ( Spare0e )
              break;
            KeQuerySystemTimePrecise(&ObjectNameInformation);
            CurrentPrcb = KeGetCurrentPrcb();
            LowPart = KeQueryPerformanceCounter(0LL).LowPart;
            v161 = __rdtsc();
            v162 = ExGenRandom(1, (unsigned __int64)HIDWORD(v161) << 32);
            v58 = (_KPROCESS *)v214[0];
            _InterlockedCompareExchange(
              (volatile signed __int32 *)v214[0] + 174,
              (unsigned int)ObjectNameInformation ^ HIDWORD(ObjectNameInformation) ^ LowPart ^ v161 ^ v162 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
              0);
            v57 = Handle;
          }
          if ( PreviousMode )
          {
            RtlWriteULongToUser((_DWORD *)v6, Spare0e);
            v58 = (_KPROCESS *)v214[0];
          }
          else
          {
            *(_DWORD *)v6 = Spare0e;
          }
          if ( a5 )
          {
            if ( PreviousMode )
            {
              RtlWriteULongToUser(a5, 4);
              v58 = (_KPROCESS *)v214[0];
            }
            else
            {
              LODWORD(a5->Count) = 4;
            }
          }
          if ( v57 != (HANDLE)-1LL )
            ObfDereferenceObject(v58);
          return Count;
        case 37:
          if ( (_DWORD)v5 != 64 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v34 = (struct _EX_RUNDOWN_REF *)Object;
          if ( Object == CurrentThread->Process )
          {
            Count = *((_QWORD *)Object + 85);
            if ( !Count )
              result = -1073741558;
            DeviceMapInformation = result;
            v35 = 0;
          }
          else
          {
            v35 = 1;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
            {
              Count = v34[85].Count;
              if ( Count )
                PsReferenceSiloContext(v34[85].Ptr);
              else
                DeviceMapInformation = -1073741811;
              ExReleaseRundownProtection_0(v34 + 61);
            }
            else
            {
              DeviceMapInformation = -1073741558;
            }
          }
          ObfDereferenceObjectWithTag(v34, 0x79517350u);
          if ( DeviceMapInformation >= 0 )
          {
            DeviceMapInformation = MmGetSectionInformation(Count, 1, (__int64 *)v6);
            if ( v35 )
              ObfDereferenceObject((PVOID)Count);
            if ( DeviceMapInformation >= 0 && a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 64);
              else
                LODWORD(a5->Count) = 64;
            }
          }
          return DeviceMapInformation;
        case 38:
          if ( (_DWORD)v5 != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          v54 = PsQueryTotalCycleTimeProcess(Object, &P);
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)v6, v54);
          else
            *(_QWORD *)v6 = v54;
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)(v6 + 8), (__int64)P);
          else
            *(_QWORD *)(v6 + 8) = P;
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 16);
            else
              LODWORD(a5->Count) = 16;
          }
          goto LABEL_133;
        case 39:
        case 111:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v87 = a2 == 39;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          if ( v87 )
          {
            v88 = (*((_DWORD *)Object + 124) >> 12) & 7;
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)v6, v88);
            else
              *(_DWORD *)v6 = v88;
          }
          else
          {
            v89 = (*((_DWORD *)Object + 124) >> 12) & 7;
            v90 = *((_QWORD *)Object + 84);
            if ( v90 )
            {
              v91 = *(_DWORD *)(v90 + 1092);
              if ( v89 >= v91 )
                v89 = v91;
            }
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)v6, v89);
            else
              *(_DWORD *)v6 = v89;
          }
          if ( !a5 )
            goto LABEL_133;
          if ( PreviousMode )
LABEL_392:
            RtlWriteULongToUser(a5, 4);
          else
            LODWORD(a5->Count) = 4;
          goto LABEL_133;
        case 43:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v36 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 102);
          v217 = v36;
          v211[0] = v36;
          if ( v36 )
          {
            RunRef[0] = (PEX_RUNDOWN_REF)((char *)Object + 488);
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
            {
              PsReferenceSiloContext(v36);
              ExReleaseRundownProtection_0(RunRef[0]);
            }
            else
            {
              DeviceMapInformation = -1073741558;
            }
          }
          else
          {
            DeviceMapInformation = PsReferenceProcessFilePointer(Object, v211);
            v36 = (struct _FILE_OBJECT *)v211[0];
            v217 = v211[0];
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( DeviceMapInformation < 0 )
            return DeviceMapInformation;
          v37 = IoQueryFileDosDeviceName(v36, &ObjectNameInformation);
          ObfDereferenceObject(v217);
          if ( v37 >= 0 )
          {
            v38 = ObjectNameInformation;
            MaximumLength = ObjectNameInformation->Name.MaximumLength;
            v206 = MaximumLength + 16;
            if ( MaximumLength + 16 > (unsigned int)v5 )
            {
              v37 = -1073741820;
              v207 = -1073741820;
            }
            else
            {
              if ( (_WORD)MaximumLength )
              {
                Count = v6 + 16;
                Buffer = ObjectNameInformation->Name.Buffer;
                v41 = (void *)(v6 + 16);
                if ( PreviousMode )
                  RtlCopyToUser(v41, Buffer, MaximumLength);
                else
                  RtlCopyVolatileMemory(v41, Buffer, MaximumLength);
              }
              v38->Name.Buffer = (wchar_t *)Count;
              v42 = *(__m128i *)v38;
              *(struct _OBJECT_NAME_INFORMATION *)RunRef = *v38;
              if ( PreviousMode )
              {
                *(__m128i *)v212 = v42;
                RtlWriteULongToUser((_DWORD *)v6, _mm_cvtsi128_si32(v42));
                RtlWriteULong64ToUser((_QWORD *)(v6 + 8), _mm_srli_si128(v42, 8).m128i_i64[0]);
              }
              else
              {
                *(_DWORD *)v6 = RunRef[0];
                *(PEX_RUNDOWN_REF *)(v6 + 8) = RunRef[1];
              }
            }
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, v206);
              else
                LODWORD(a5->Count) = v206;
            }
            ExFreePoolWithTag(v38, 0);
          }
          return v37;
        case 44:
          v212[0] = 0LL;
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          if ( PreviousMode )
            v100 = RtlReadULong64FromUser((volatile void *)v6);
          else
            v100 = *(_QWORD *)v6;
          v255 = v100;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v37 = ObpReferenceObjectByHandleWithTag(
                  v100,
                  1048608LL,
                  IoFileObjectType,
                  PreviousMode,
                  0x79517350u,
                  v211,
                  0LL,
                  0LL);
          v62 = Object;
          if ( v37 < 0 )
          {
LABEL_250:
            ObfDereferenceObjectWithTag(v62, 0x79517350u);
            return v37;
          }
          ProcessHandleInformation = PsReferenceProcessFilePointer(Object, v212);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v80 = (struct _EX_RUNDOWN_REF *)v211[0];
          if ( ProcessHandleInformation < 0 )
            goto LABEL_332;
          v101 = *((_QWORD *)v211[0] + 5);
          v102 = v212[0];
          v103 = *((_QWORD *)v212[0] + 5);
          v104 = 0;
          if ( v101 != v103 )
            v104 = -1073741823;
          ObfDereferenceObject(v211[0]);
          ObfDereferenceObject(v102);
          result = v104;
          if ( v101 == v103 && a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 0);
            else
              LODWORD(a5->Count) = 0;
            return v104;
          }
          return result;
        case 45:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v105 = *((_DWORD *)Object + 124);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( (v105 & 0x80000) != 0 )
            LODWORD(Count) = 1;
          LODWORD(Src) = Count;
          if ( (v105 & 0x40000) != 0 )
          {
            LODWORD(Count) = Count | 2;
            LODWORD(Src) = Count;
          }
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, Count);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, 4uLL);
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_948;
          LODWORD(a5->Count) = 4;
          return 0;
        case 46:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v180 = *((_DWORD *)Object + 125);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v181 = (int)Src;
          if ( (v180 & 0x200000) != 0 )
            v181 = 1;
          LODWORD(Src) = v181;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v181);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, 4uLL);
          if ( !a5 )
            return 0;
          if ( PreviousMode )
            goto LABEL_948;
          LODWORD(a5->Count) = 4;
          return 0;
        case 47:
          if ( !a5 || (v5 & 1) != 0 )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v205 = 0;
          v283 = *KeQueryGroupMaskProcess(&v269, (__int64)Object);
          do
          {
            FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v283);
            v94 = FirstSetRightGroupMask;
            v225[0] = FirstSetRightGroupMask;
            v95 = Count + 2;
            v205 = Count + 2;
            if ( (int)Count + 2 <= (unsigned int)v5 )
            {
              if ( PreviousMode )
                RtlWriteUShortToUser((_WORD *)v6, FirstSetRightGroupMask);
              else
                *(_WORD *)v6 = FirstSetRightGroupMask;
              v6 += 2LL;
              v256 = v6;
            }
            KeClearBitGroupMask((__int64)&v283, v94);
            LODWORD(Count) = Count + 2;
            LOBYTE(v96) = KeIsEmptyGroupMask((unsigned __int64 *)&v283);
          }
          while ( !v96 );
          if ( PreviousMode )
            RtlWriteULongToUser(a5, v95);
          else
            LODWORD(a5->Count) = v95;
          v22 = (unsigned int)v5 < v95 ? 0xC0000023 : 0;
          v207 = v22;
          goto LABEL_640;
        case 49:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v71 = *((_QWORD *)Object + 91);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)v6, v71);
          else
            *(_QWORD *)v6 = v71;
          if ( !a5 )
            return 0;
          if ( PreviousMode )
LABEL_194:
            RtlWriteULongToUser(a5, 8);
          else
            LODWORD(a5->Count) = 8;
          return 0;
        case 50:
          v218 = 0;
          *(_OWORD *)v214 = 0LL;
          v221 = 0LL;
          v241 = 0LL;
          if ( PreviousMode != 1 )
            return -1073741823;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     1,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v64 = result;
          if ( result >= 0 )
          {
            v65 = Object;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
            {
              KiStackAttachProcess((_KPROCESS *)v65, 0, (__int64)v286);
              v66 = 0LL;
              v67 = (__int64 *)*((_QWORD *)v65 + 98);
              if ( v67 )
                v66 = *v67;
              if ( v66 )
              {
                v69 = (unsigned int *)(unsigned int)RtlReadULongFromUser((unsigned int *)(v66 + 16));
                v218 = RtlReadULongFromUser(v69 + 26);
                v70 = RtlReadULong64FromUser(v69 + 28);
                LOWORD(v69) = v70;
                P = (HANDLE)v70;
                v212[0] = (PVOID)v70;
                ObjectNameInformation = (POBJECT_NAME_INFORMATION)HIDWORD(v70);
                v241 = v70;
                LODWORD(v214[0]) = v70;
                v214[1] = (HANDLE)HIDWORD(v70);
              }
              else
              {
                v68 = RtlReadULong64FromUser((volatile void *)(*((_QWORD *)v65 + 92) + 32LL));
                v218 = RtlReadULongFromUser((unsigned int *)(v68 + 164));
                v69 = (unsigned int *)(v68 + 176);
                *(_OWORD *)v212 = 0LL;
                LODWORD(v212[0]) = RtlReadULongFromUser(v69);
                v212[1] = (PVOID)RtlReadULong64FromUser(v69 + 2);
                *(_OWORD *)v214 = *(_OWORD *)v212;
                ObjectNameInformation = (POBJECT_NAME_INFORMATION)_mm_srli_si128(*(__m128i *)v212, 8).m128i_u64[0];
                LODWORD(v69) = _mm_cvtsi128_si32(*(__m128i *)v212);
                P = (HANDLE)(unsigned int)v69;
              }
              KiUnstackDetachProcess((__int64)v286, 0);
              if ( v64 >= 0 )
              {
                v182 = (unsigned __int16)v69 + 6;
                v213 = v182;
                if ( a5 )
                {
                  RtlWriteULongToUser(a5, v182);
                  v182 = v213;
                }
                if ( (unsigned int)v5 >= v182 )
                {
                  RtlWriteULongToUser((_DWORD *)v6, v218);
                  RtlWriteUShortToUser((_WORD *)(v6 + 4), (__int16)v69);
                }
                else
                {
                  v64 = -1073741820;
                  v207 = -1073741820;
                  LOWORD(v69) = (_WORD)P;
                }
                if ( v64 >= 0 && (_WORD)v69 )
                  v64 = MiCopyVirtualMemory(
                          (__int64)v65,
                          (__int64)ObjectNameInformation,
                          (__int64)KeGetCurrentThread()->ApcState.Process,
                          v6 + 6,
                          (unsigned __int16)v69,
                          1,
                          (__int64 *)&v221,
                          0);
              }
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v65 + 61);
              ObfDereferenceObjectWithTag(v65, 0x79517350u);
              return v64;
            }
            else
            {
              ObfDereferenceObjectWithTag(v65, 0x79517350u);
              return -1073741558;
            }
          }
          return result;
        case 51:
          if ( (unsigned int)v5 < 0x10 )
          {
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 16);
              else
                LODWORD(a5->Count) = 16;
            }
            return -1073741820;
          }
          v212[0] = 0LL;
          result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, PreviousMode, v212, 0LL);
          if ( result >= 0 )
          {
            v75 = CurrentThread;
            --CurrentThread->KernelApcDisable;
            v76 = (struct _EX_RUNDOWN_REF *)v212[0];
            v77 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v212[0]);
            if ( v77 )
            {
              ProcessHandleInformation = ExQueryProcessHandleInformation(v77, (_QWORD *)v6, v5, (int *)a5, PreviousMode);
              ExReleaseRundownProtection_0(v76 + 61);
            }
            else
            {
              ProcessHandleInformation = -1073741558;
            }
            KiLeaveCriticalRegionUnsafe((__int64)v75, v78);
            v80 = v76;
LABEL_332:
            ObfDereferenceObject(v80);
            return ProcessHandleInformation;
          }
          return result;
        case 52:
          LOBYTE(v205) = 0;
          v204[0] = 0;
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          v202 = 0LL;
          v109 = 0LL;
          if ( PreviousMode )
            LODWORD(v202) = RtlReadULongFromUser((unsigned int *)v6);
          else
            RtlCopyVolatileMemory(&v202, (const void *)v6, 4uLL);
          v110 = Handle;
          if ( Handle == (HANDLE)-1LL )
          {
            v111 = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
            Object = v111;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       4096LL,
                       PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v111 = (struct _EX_RUNDOWN_REF *)Object;
          }
          if ( (_DWORD)v202 == 1 )
          {
            v202 = 1LL;
            v109 = 4LL;
            v134 = (v111[234].Count & 0x40) == 0;
            HIDWORD(v202) = v134;
            if ( (v111[234].Count & 0x10) != 0 )
            {
              v134 |= 2u;
              HIDWORD(v202) = v134;
            }
            if ( (v111[234].Count & 0x20) != 0 )
            {
              v134 |= 4u;
              HIDWORD(v202) = v134;
            }
            if ( (v111[234].Count & 8) != 0 )
            {
              v137 = v134 | 8;
              goto LABEL_696;
            }
          }
          else
          {
            if ( (_DWORD)v202 == 13 )
            {
              NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v111);
              v109 = 4LL;
              v139 = 0;
              HIDWORD(v202) = 0;
              if ( NoChildProcessRestrictedPolicy != 1 )
              {
                v170 = NoChildProcessRestrictedPolicy - 2;
                if ( v170 )
                {
LABEL_962:
                  if ( v170 == 1 )
                    HIDWORD(v202) = 2;
                  goto LABEL_628;
                }
                v139 = 4;
              }
              v137 = v139 | 1;
              goto LABEL_696;
            }
            if ( (_DWORD)v202 != 12 )
            {
              if ( (_DWORD)v202 == 9 )
              {
                v202 = 9LL;
                v109 = 4LL;
                v149 = v111[234].Count;
                if ( (v149 & 0x10000) != 0 )
                {
                  HIDWORD(v202) = 1;
                }
                else if ( (v149 & 0x20000) != 0 )
                {
                  HIDWORD(v202) = 2;
                }
              }
              else
              {
                switch ( (int)v202 )
                {
                  case 2:
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    if ( (v111[234].Count & 0x100) != 0 )
                    {
                      HIDWORD(v202) = 1;
                    }
                    else
                    {
                      v152 = 0;
                      if ( (v111[234].Count & 0x800) != 0 )
                        v152 = 8;
                      v11 = v152;
                      HIDWORD(v202) = v152;
                    }
                    if ( (v111[234].Count & 0x200) != 0 )
                    {
                      v11 |= 2u;
                      HIDWORD(v202) = v11;
                    }
                    if ( (v111[234].Count & 0x400) != 0 )
                      HIDWORD(v202) = v11 | 4;
                    goto LABEL_628;
                  case 3:
                    v109 = 4LL;
                    v166 = ObReferenceProcessHandleTable(v111);
                    if ( !v166 )
                    {
                      LODWORD(Count) = -1073741558;
                      goto LABEL_629;
                    }
                    ExQueryHandleExceptionsPermanency(v166, &v205, v204, v167);
                    HIDWORD(v202) = (_BYTE)v205 != 0;
                    if ( v204[0] )
                      HIDWORD(v202) = ((_BYTE)v205 != 0) | 2;
                    ExReleaseRundownProtection_0(v111 + 61);
                    goto LABEL_628;
                  case 4:
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    if ( (v111[234].Count & 0x1000) != 0 )
                    {
                      HIDWORD(v202) = 1;
                    }
                    else
                    {
                      v168 = 0;
                      if ( (v111[234].Count & 0x2000) != 0 )
                        v168 = 2;
                      v11 = v168;
                      HIDWORD(v202) = v168;
                    }
                    v151 = v111[251].Count;
                    if ( (v151 & 2) != 0 )
                    {
                      HIDWORD(v202) = v11 | 4;
                    }
                    else if ( (v151 & 4) != 0 )
                    {
                      v11 |= 8u;
LABEL_961:
                      HIDWORD(v202) = v11;
                    }
                    goto LABEL_628;
                  case 6:
                    v109 = 4LL;
                    HIDWORD(v202) = (LODWORD(v111[234].Count) & 0x80u) != 0;
                    goto LABEL_628;
                  case 7:
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    v156 = (v111[234].Count & 1) != 0;
                    HIDWORD(v202) = v156;
                    if ( (v111[234].Count & 2) != 0 )
                    {
                      v156 |= 2u;
                      HIDWORD(v202) = v156;
                    }
                    if ( (v111[234].Count & 4) == 0 )
                      goto LABEL_628;
                    v137 = v156 | 4;
                    goto LABEL_696;
                  case 8:
                    v109 = 4LL;
                    PsQueryProcessSignatureMitigationPolicy(v111, (char *)&v202 + 4);
                    goto LABEL_628;
                  case 10:
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    v112 = v111[234].Count;
                    if ( (v112 & 0x80000) != 0 )
                    {
                      HIDWORD(v202) = 1;
                    }
                    else
                    {
                      v60 = (v112 & 0x100000) != 0;
                      v113 = 0;
                      if ( v60 )
                        v113 = 8;
                      v11 = v113;
                      HIDWORD(v202) = v113;
                    }
                    v114 = v111[234].Count;
                    if ( (v114 & 0x200000) != 0 )
                    {
                      v11 |= 2u;
LABEL_507:
                      HIDWORD(v202) = v11;
                      goto LABEL_508;
                    }
                    if ( (v114 & 0x400000) != 0 )
                    {
                      v11 |= 0x10u;
                      goto LABEL_507;
                    }
LABEL_508:
                    if ( (v111[234].Count & 0x40000) != 0 )
                      HIDWORD(v202) = v11 | 4;
                    break;
                  case 11:
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    HIDWORD(v202) = PsGetWin32KFilterSet() & 0xF;
                    goto LABEL_628;
                  case 14:
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    v171 = (v111[234].Count & 0x40000000) != 0;
                    HIDWORD(v202) = v171;
                    if ( SLODWORD(v111[234].Count) < 0 )
                    {
                      v171 |= 2u;
                      HIDWORD(v202) = v171;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x1000) != 0 )
                    {
                      v171 |= 4u;
                      HIDWORD(v202) = v171;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x2000) != 0 )
                    {
                      v171 |= 8u;
                      HIDWORD(v202) = v171;
                    }
                    if ( (v111[251].Count & 1) == 0 )
                      goto LABEL_628;
                    v137 = v171 | 0x10;
                    goto LABEL_696;
                  case 15:
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    v172 = (HIDWORD(v111[234].Ptr) & 0x4000) != 0;
                    HIDWORD(v202) = v172;
                    if ( (HIDWORD(v111[234].Ptr) & 0x8000) != 0 )
                    {
                      v172 |= 2u;
                      HIDWORD(v202) = v172;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x20000) != 0 )
                    {
                      v172 |= 4u;
                      HIDWORD(v202) = v172;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x40000) != 0 )
                    {
                      v172 |= 8u;
                      HIDWORD(v202) = v172;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x100000) != 0 )
                    {
                      v172 |= 0x10u;
                      HIDWORD(v202) = v172;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x200000) != 0 )
                    {
                      v172 |= 0x20u;
                      HIDWORD(v202) = v172;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x400000) != 0 )
                    {
                      v172 |= 0x40u;
                      HIDWORD(v202) = v172;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x800000) != 0 )
                    {
                      v172 |= 0x80u;
                      HIDWORD(v202) = v172;
                    }
                    if ( (HIDWORD(v111[234].Ptr) & 0x40000000) != 0 )
                    {
                      v172 |= 0x100u;
                      HIDWORD(v202) = v172;
                    }
                    if ( SHIDWORD(v111[234].Ptr) >= 0 )
                      goto LABEL_628;
                    v137 = v172 | 0x200;
                    goto LABEL_696;
                  case 16:
                    RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(v111);
                    v109 = 4LL;
                    HIDWORD(v202) = 0;
                    v170 = RedirectionTrustPolicy - 1;
                    if ( v170 )
                      goto LABEL_962;
                    goto LABEL_961;
                  default:
                    LODWORD(Count) = -1073741637;
                    goto LABEL_628;
                }
              }
              goto LABEL_628;
            }
            v202 = 12LL;
            v109 = 4LL;
            v136 = (BYTE4(v111[234].Ptr) & 1) != 0;
            HIDWORD(v202) = v136;
            if ( (HIDWORD(v111[234].Ptr) & 4) != 0 )
            {
              v136 |= 4u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x400) != 0 )
            {
              v136 |= 0x10u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x10) != 0 )
            {
              v136 |= 0x40u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x40) != 0 )
            {
              v136 |= 0x100u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x100) != 0 )
            {
              v136 |= 0x400u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 2) != 0 )
            {
              v136 |= 2u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 8) != 0 )
            {
              v136 |= 8u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x800) != 0 )
            {
              v136 |= 0x20u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x20) != 0 )
            {
              v136 |= 0x80u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x80u) != 0 )
            {
              v136 |= 0x200u;
              HIDWORD(v202) = v136;
            }
            if ( (HIDWORD(v111[234].Ptr) & 0x200) != 0 )
            {
              v137 = v136 | 0x800;
LABEL_696:
              HIDWORD(v202) = v137;
            }
          }
LABEL_628:
          if ( (int)Count >= 0 )
          {
            v150 = (void *)(v6 + 4);
            if ( PreviousMode )
              RtlCopyToUser(v150, (char *)&v202 + 4, v109);
            else
              RtlCopyVolatileMemory(v150, (char *)&v202 + 4, v109);
          }
LABEL_629:
          if ( v110 == (HANDLE)-1LL )
            return Count;
          ObfDereferenceObjectWithTag(v111, 0x79517350u);
          return Count;
        case 54:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          v140 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( !v140 )
            goto LABEL_860;
          if ( (*(_BYTE *)(v140 + 44) & 2) != 0 )
          {
            if ( PreviousMode )
              goto LABEL_370;
            *(_DWORD *)v6 = 1;
          }
          else
          {
            if ( PreviousMode )
              goto LABEL_373;
            *(_DWORD *)v6 = 0;
          }
          goto LABEL_375;
        case 55:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          v141 = *((_DWORD *)Object + 459) & 0x7FFFFFFF;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v141);
          else
            *(_DWORD *)v6 = v141;
          v142 = HIDWORD(v31[233].Ptr) & 0x7FFFFFFF;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)(v6 + 4), v142);
          else
            *(_DWORD *)(v6 + 4) = v142;
          goto LABEL_133;
        case 58:
          v212[0] = 0LL;
          P = 0LL;
          if ( (unsigned int)v5 < 4 )
            return -1073741820;
          result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, 1, v212, (struct _MDL **)&P);
          if ( result >= 0 )
          {
            v106 = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1088LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
            if ( v106 < 0 )
            {
              ExUnlockUserBuffer((struct _MDL *)P);
              return v106;
            }
            else
            {
              v239 = 0LL;
              v107 = (struct _EX_RUNDOWN_REF *)Object;
              v108 = (unsigned int *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
              if ( v108 )
              {
                *(PVOID *)&v239 = v212[0];
                *((_QWORD *)&v239 + 1) = (unsigned int)v5 >> 2;
                ExEnumHandleTable(v108, (__int64)PspHandleTableWalker, (__int64)&v239, 0LL);
                ExReleaseRundownProtection_0(v107 + 61);
              }
              else
              {
                LODWORD(Count) = -1073741558;
              }
              ObfDereferenceObjectWithTag(v107, 0x79517350u);
              if ( a5 )
              {
                v123 = 4 * HIDWORD(v239);
                if ( PreviousMode )
                  RtlWriteULongToUser(a5, v123);
                else
                  LODWORD(a5->Count) = v123;
              }
              ExUnlockUserBuffer((struct _MDL *)P);
              return Count;
            }
          }
          return result;
        case 59:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1024LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          v83 = (*((_DWORD *)Object + 34) >> 5) & 1;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, v83);
          else
            *(_DWORD *)v6 = v83;
          goto LABEL_133;
        case 60:
          DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                   (ULONG_PTR)Handle,
                                   4096LL,
                                   PsProcessType,
                                   PreviousMode,
                                   0x79517350u,
                                   &Object,
                                   0LL,
                                   0LL);
          if ( DeviceMapInformation < 0 )
            return DeviceMapInformation;
          v28 = Object;
          ProcessCommandLine = PsQueryProcessCommandLine(
                                 (PRKPROCESS)Object,
                                 (unsigned __int16 *)v6,
                                 v5,
                                 PreviousMode,
                                 (unsigned int *)a5);
          goto LABEL_232;
        case 61:
          v224[0] = 0;
          v37 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)Handle,
                  4096LL,
                  PsProcessType,
                  PreviousMode,
                  0x79517350u,
                  &Object,
                  0LL,
                  0LL);
          if ( v37 < 0 )
            return v37;
          v60 = (_DWORD)v5 == 0;
          v61 = Object;
          if ( v60 )
          {
            v37 = -1073741820;
          }
          else
          {
            v183 = *((_BYTE *)Object + 1530);
            v224[0] = v183;
            if ( PreviousMode )
              RtlWriteUCharToUser((_BYTE *)v6, v183);
            else
              RtlCopyVolatileMemory((void *)v6, v224, 1uLL);
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 1);
              else
                LODWORD(a5->Count) = 1;
            }
            v37 = 0;
          }
          if ( !v61 )
            return v37;
          ObfDereferenceObjectWithTag(v61, 0x79517350u);
          return v37;
        case 64:
          DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                                   (ULONG_PTR)Handle,
                                   4096LL,
                                   PsProcessType,
                                   PreviousMode,
                                   0x79517350u,
                                   &Object,
                                   0LL,
                                   0LL);
          if ( DeviceMapInformation < 0 )
            return DeviceMapInformation;
          v28 = Object;
          ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                                 (__int64)Object,
                                 (_DWORD *)v6,
                                 (unsigned int)v5,
                                 PreviousMode,
                                 (unsigned int *)a5);
LABEL_232:
          DeviceMapInformation = ProcessCommandLine;
          if ( !v28 )
            return DeviceMapInformation;
          goto LABEL_95;
        case 65:
          v281 = 0LL;
          v282 = 0LL;
          v206 = 0;
          if ( (_DWORD)v5 == 32 )
          {
            if ( PreviousMode )
              RtlCopyFromUser(&v281, (void *)v6, 0x20uLL);
            else
              RtlCopyVolatileMemory(&v281, (const void *)v6, 0x20uLL);
            if ( (_DWORD)v281 == 3 )
            {
              if ( (DWORD1(v281) & 0xFFFFFFF8) != 0 || *((_QWORD *)&v281 + 1) )
              {
                v37 = -1073741811;
              }
              else
              {
                v37 = ObpReferenceObjectByHandleWithTag(
                        (ULONG_PTR)Handle,
                        4096LL,
                        PsProcessType,
                        PreviousMode,
                        0x79517350u,
                        &Object,
                        0LL,
                        0LL);
                if ( v37 >= 0 )
                {
                  MmQueryCommitReleaseState((__int64)Object, &v206, (_QWORD *)&v281 + 1, &v282, (_QWORD *)&v282 + 1);
                  DWORD1(v281) = v206 & 1 | DWORD1(v281) & 0xFFFFFFFE;
                  *((_QWORD *)&v281 + 1) <<= 12;
                  *(_QWORD *)&v282 = (_QWORD)v282 << 12;
                  *((_QWORD *)&v282 + 1) <<= 12;
                  if ( PreviousMode )
                    RtlCopyToUser((void *)v6, &v281, 0x20uLL);
                  else
                    RtlCopyVolatileMemory((void *)v6, &v281, 0x20uLL);
                  v37 = 0;
                }
              }
            }
            else
            {
              v37 = -1073741735;
            }
          }
          else
          {
            v37 = -1073741820;
          }
          v62 = Object;
          if ( Object )
            goto LABEL_250;
          return v37;
        case 66:
        case 67:
          if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v213 = result;
          if ( result >= 0 )
          {
            LOBYTE(Count) = a2 == 67;
            v184 = 8 * KeQueryCpuSetsProcess((__int64)Object, (__int64)v298, 0x20u, Count);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, v184);
              else
                LODWORD(a5->Count) = v184;
            }
            if ( v184 >= (unsigned int)v5 )
              v184 = v5;
            if ( PreviousMode )
              RtlCopyToUser((void *)v6, v298, v184);
            else
              RtlCopyVolatileMemory((void *)v6, v298, v184);
            return v213;
          }
          return result;
        case 69:
          if ( (_DWORD)v5 != 40 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          p_LockNV = (int *)Object;
          if ( *((_QWORD *)Object + 84) )
          {
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v286);
            ZwQueryInformationJobObject(0LL, 28LL);
            ObjectType = 0LL;
            ZwQueryInformationJobObject(0LL, 9LL);
            KiUnstackDetachProcess((__int64)v286, 0);
            v271 = v287;
            Src = (PEX_RUNDOWN_REF)v288;
            v73 = *((_QWORD *)&v272 + 1);
            if ( (v293 & 0x200000) != 0 )
              v73 = v295;
            *((_QWORD *)&v272 + 1) = v73;
            v74 = v272;
            if ( (v293 & 0x200) != 0 )
              v74 = v294;
            *(_QWORD *)&v272 = v74;
            if ( PreviousMode )
              RtlCopyToUser((void *)v6, &Src, 0x28uLL);
            else
              RtlCopyVolatileMemory((void *)v6, &Src, 0x28uLL);
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 40);
              else
                LODWORD(a5->Count) = 40;
            }
          }
          else
          {
            LODWORD(Count) = -1073741394;
          }
          goto LABEL_326;
        case 70:
          if ( (_DWORD)v5 != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          if ( *((int *)Object + 124) >= 0 )
          {
            if ( PreviousMode )
              goto LABEL_290;
            *(_BYTE *)v6 = 0;
          }
          else
          {
            if ( PreviousMode )
              goto LABEL_287;
            *(_BYTE *)v6 = 1;
          }
          goto LABEL_133;
        case 71:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          v84 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v84 )
          {
            if ( (*(_BYTE *)(v84 + 44) & 0x10) != 0 )
            {
              if ( PreviousMode )
LABEL_370:
                RtlWriteULongToUser((_DWORD *)v6, 1);
              else
                *(_DWORD *)v6 = 1;
            }
            else if ( PreviousMode )
            {
LABEL_373:
              RtlWriteULongToUser((_DWORD *)v6, 0);
            }
            else
            {
              *(_DWORD *)v6 = 0;
            }
LABEL_375:
            ExReleaseRundownProtection_0(v31 + 61);
            ObfDereferenceObjectWithTag(v31, 0x79517350u);
          }
          else
          {
LABEL_860:
            DeviceMapInformation = -1073741558;
LABEL_133:
            ObfDereferenceObjectWithTag(v31, 0x79517350u);
          }
          return DeviceMapInformation;
        case 72:
          return PsIumGetOnDemandDebugChallenge(Handle, v6, (unsigned int)v5, a5);
        case 73:
          v208 = 0;
          v209 = 0;
          if ( (_DWORD)v5 != 3 )
            return -1073741820;
          v85 = Handle;
          if ( Handle == (HANDLE)-1LL )
          {
            p_Lock = (__int64 *)&KeGetCurrentThread()->ApcState.Process->Header.Lock;
            Object = p_Lock;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       1024LL,
                       PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            p_Lock = (__int64 *)Object;
          }
          v185 = PspGetNoChildProcessRestrictedPolicy(p_Lock);
          v208 = 0;
          v209 = 0;
          v186 = v185 - 1;
          if ( !v186 )
            goto LABEL_1012;
          v187 = v186 - 1;
          if ( v187 )
          {
            v209 = v187 == 1;
          }
          else
          {
            HIBYTE(v208) = 1;
LABEL_1012:
            LOBYTE(v208) = 1;
          }
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, &v208, 3uLL);
          else
            RtlCopyVolatileMemory((void *)v6, &v208, 3uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 3);
            else
              LODWORD(a5->Count) = 3;
          }
          if ( v85 != (HANDLE)-1LL )
            goto LABEL_656;
          return Count;
        case 74:
          if ( (_DWORD)v5 != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (*((_DWORD *)Object + 383) & 0x200) != 0 )
          {
            if ( PreviousMode )
LABEL_287:
              RtlWriteUCharToUser((_BYTE *)v6, 1);
            else
              *(_BYTE *)v6 = 1;
          }
          else if ( PreviousMode )
          {
LABEL_290:
            RtlWriteUCharToUser((_BYTE *)v6, 0);
          }
          else
          {
            *(_BYTE *)v6 = 0;
          }
          goto LABEL_133;
        case 75:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v63 = result;
          if ( result < 0 )
            return result;
          v116 = Object;
          if ( *((_QWORD *)Object + 200) )
          {
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)v6, qword_140F0A070);
            else
              *(_DWORD *)v6 = qword_140F0A070;
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser((_DWORD *)v6, 0);
          }
          else
          {
            *(_DWORD *)v6 = 0;
          }
          if ( a5 )
          {
            if ( PreviousMode )
LABEL_525:
              RtlWriteULongToUser(a5, 4);
            else
              LODWORD(a5->Count) = 4;
          }
          goto LABEL_528;
        case 76:
          memset_0(v297, 0, 0x1B8uLL);
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          PsQueryProcessEnergyValues(Object, v297);
          v82 = 432LL;
          if ( (unsigned int)v5 <= 0x1B0 )
            v82 = (unsigned int)v5;
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, v297, v82);
          else
            RtlCopyVolatileMemory((void *)v6, v297, v82);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 432);
            else
              LODWORD(a5->Count) = 432;
          }
          goto LABEL_133;
        case 77:
          if ( (_DWORD)v5 != 12 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v284[0] = 1;
          v48 = KeGetCurrentThread();
          --v48->KernelApcDisable;
          p_Lock = (__int64 *)Object;
          v50 = (signed __int64 *)((char *)Object + 2080);
          v52 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)Object + 2080, 0LL, 0LL, v47);
          v53 = 17LL;
          if ( _InterlockedCompareExchange64(v50, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v50, 0, v52, (struct _KTHREAD *)v50);
            v53 = 17LL;
          }
          if ( v52 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v52, v51);
            else
              *((_BYTE *)v52 + 10) = 1;
          }
          v284[1] = *((_DWORD *)p_Lock + 523);
          v284[2] = *((_DWORD *)p_Lock + 524);
          if ( v53 != _InterlockedCompareExchange64(v50, 0LL, v53) )
            ExfReleasePushLockShared(v50);
          KeAbPostRelease((unsigned __int64)v50);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v188);
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, v284, 0xCuLL);
          else
            RtlCopyVolatileMemory((void *)v6, v284, 0xCuLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 12);
            else
              LODWORD(a5->Count) = 12;
          }
          v207 = 0;
          goto LABEL_656;
        case 79:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          v86 = Handle;
          if ( Handle == (HANDLE)-1LL )
          {
            p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
            Object = p_LockNV;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       1024LL,
                       PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            p_LockNV = (int *)Object;
            v86 = Handle;
          }
          v189 = p_LockNV[468];
          v190 = (v189 & 0x4000) != 0;
          v237 = v190;
          if ( (v189 & 0x8000) != 0 )
          {
            v190 |= 2u;
            v237 = v190;
          }
          if ( PreviousMode )
          {
            RtlWriteULongToUser((_DWORD *)v6, v190);
            v86 = Handle;
          }
          else
          {
            *(_DWORD *)v6 = v190;
          }
          v191 = p_LockNV[442];
          if ( PreviousMode )
          {
            RtlWriteULongToUser((_DWORD *)(v6 + 4), v191);
            v86 = Handle;
          }
          else
          {
            *(_DWORD *)(v6 + 4) = v191;
          }
          if ( a5 )
          {
            if ( PreviousMode )
            {
              RtlWriteULongToUser(a5, 8);
              v86 = Handle;
            }
            else
            {
              LODWORD(a5->Count) = 8;
            }
          }
          if ( v86 != (HANDLE)-1LL )
          {
LABEL_326:
            ObfDereferenceObjectWithTag(p_LockNV, 0x79517350u);
            return Count;
          }
          return Count;
        case 81:
          if ( PreviousMode )
            return -1073741790;
          if ( (_DWORD)v5 != 48 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     0,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v28 = Object;
            DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
            if ( DeviceMapInformation >= 0 && a5 )
            {
              LODWORD(a5->Count) = 48;
              ObfDereferenceObjectWithTag(v28, 0x79517350u);
              return DeviceMapInformation;
            }
            else
            {
LABEL_95:
              ObfDereferenceObjectWithTag(v28, 0x79517350u);
              return DeviceMapInformation;
            }
          }
          return result;
        case 82:
          memset_0(v296, 0, sizeof(v296));
          if ( (unsigned int)v5 < 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          p_Lock = (__int64 *)Object;
          PoQueryProcessEnergyTrackingState(Object, v296);
          if ( (unsigned int)v5 >= 0x90 )
            LODWORD(v5) = 144;
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, v296, (unsigned int)v5);
          else
            RtlCopyVolatileMemory((void *)v6, v296, (unsigned int)v5);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, v5);
            else
              LODWORD(a5->Count) = v5;
          }
          v207 = 0;
          goto LABEL_656;
        case 84:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     1048LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v116 = Object;
          if ( *((_QWORD *)Object + 46) )
          {
            v63 = VslLiveDumpCaptureProcess(Object);
LABEL_528:
            ObfDereferenceObjectWithTag(v116, 0x79517350u);
            return v63;
          }
          else
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741790;
          }
        case 85:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(
                                       (_KPROCESS *)Object,
                                       (char *)v6,
                                       v5,
                                       (unsigned int *)a5,
                                       PreviousMode);
LABEL_639:
          v22 = ProcessTelemetryCoverage;
          goto LABEL_640;
        case 87:
        case 96:
          if ( a2 == 87 && !(_DWORD)v5 || (unsigned int)v5 < 4 && a2 == 96 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v92 = result;
          if ( result < 0 )
            return result;
          v124 = (struct _EX_RUNDOWN_REF *)Object;
          v192 = HIBYTE(*((_DWORD *)Object + 124)) & 3;
          if ( a2 == 96 )
          {
            v193 = v192 | ((*((_DWORD *)Object + 383) & 0x80000 | *((_DWORD *)Object + 383) & 0x100000 | ((*((_DWORD *)Object + 383) & 0x10000000 | (*((_DWORD *)Object + 383) >> 2) & 0x8000000u) >> 6)) >> 17);
            if ( PreviousMode )
              RtlWriteULongToUser((_DWORD *)v6, v193);
            else
              *(_DWORD *)v6 = v193;
          }
          else if ( PreviousMode )
          {
            RtlWriteUCharToUser((_BYTE *)v6, v192);
          }
          else
          {
            *(_BYTE *)v6 = v192;
          }
LABEL_618:
          ObfDereferenceObjectWithTag(v124, 0x79517350u);
          return v92;
        case 88:
          *(_OWORD *)RunRef = 0LL;
          v227 = 0LL;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v98 = CurrentThread;
          p_LockNV = (int *)Object;
          PspLockProcessShared((__int64)Object, (__int64)CurrentThread);
          v99 = *((_QWORD *)p_LockNV + 212) >> 61;
          if ( (v99 == 3 || v99 == 4)
            && (*((_QWORD *)&v272 + 1) = *((_QWORD *)p_LockNV + 212) & 0x1FFFFFFFFFFFFFFFLL,
                *((_QWORD *)&v271 + 1) = *((_QWORD *)p_LockNV + 211),
                *(_QWORD *)&v272 = *((_QWORD *)&v271 + 1) - *((_QWORD *)p_LockNV + 208),
                *((_QWORD *)p_LockNV + 212) >> 61 == 3) )
          {
            v194 = v274 | 0x200;
            LODWORD(v274) = v274 | 0x200;
          }
          else
          {
            v194 = v274;
          }
          LODWORD(v274) = v194 & 0xFFFFFE00 | *((_BYTE *)p_LockNV + 1531) & 7 | (2
                                                                               * (*((_BYTE *)p_LockNV + 1531) & 0x38 | (32 * (p_LockNV[383] & 4))));
          PspUnlockProcessShared((__int64)p_LockNV, (__int64)v98);
          PsGetProcessDeepFreezeStats((__int64)p_LockNV, RunRef, v195, v196);
          Src = RunRef[0];
          *(PEX_RUNDOWN_REF *)&v271 = RunRef[1];
          v273 = v227;
          if ( !(_QWORD)v272 )
            *(_QWORD *)&v272 = (char *)RunRef[0] - *((_QWORD *)p_LockNV + 208);
          if ( !*((_QWORD *)&v272 + 1) )
            *((_QWORD *)&v272 + 1) = (char *)RunRef[1] - *((_QWORD *)p_LockNV + 209) - v227;
          if ( (unsigned int)v5 >= 0x38 )
            LODWORD(v5) = 56;
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, &Src, (unsigned int)v5);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, (unsigned int)v5);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, v5);
            else
              LODWORD(a5->Count) = v5;
          }
          v207 = 0;
          goto LABEL_326;
        case 89:
          P = 0LL;
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          if ( PreviousMode )
          {
            v143 = RtlReadULong64FromUser((volatile void *)v6);
            RtlWriteULong64ToUser((_QWORD *)v6, v143);
          }
          v144 = KeGetCurrentThread()->ApcState.Process;
          if ( Handle != (HANDLE)-1LL || v144 != CurrentThread->Process )
            return -1073741790;
          v37 = ObOpenObjectByPointer((PVOID)v144[1].Padding[4], 0, 0LL, 5u, MmSectionObjectType, PreviousMode, &P);
          if ( v37 >= 0 )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser((_QWORD *)v6, (__int64)P);
            else
              *(_QWORD *)v6 = P;
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 8);
              else
                LODWORD(a5->Count) = 8;
            }
          }
          return v37;
        case 92:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v31 = (struct _EX_RUNDOWN_REF *)Object;
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)v6, *((_QWORD *)Object + 207));
          else
            *(_QWORD *)v6 = *((_QWORD *)Object + 207);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 8);
            else
              LODWORD(a5->Count) = 8;
          }
          goto LABEL_133;
        case 94:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          p_Lock = (__int64 *)Object;
          if ( (*((_DWORD *)Object + 124) & 0x8000) != 0 )
          {
            _InterlockedOr(v198, 0);
            v197 = p_Lock[236];
            v242 = v197;
            if ( PreviousMode )
              RtlWriteULong64ToUser((_QWORD *)v6, v197);
            else
              RtlCopyVolatileMemory((void *)v6, &v242, 8uLL);
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 8);
              else
                LODWORD(a5->Count) = 8;
            }
            v207 = 0;
LABEL_656:
            ObfDereferenceObjectWithTag(p_Lock, 0x79517350u);
            return 0;
          }
          else
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741700;
          }
        case 97:
          if ( (_DWORD)v5 == 8 )
          {
            if ( Handle != (HANDLE)-1LL )
              return -1073741811;
            v120 = KeGetCurrentThread()->ApcState.Process;
            Blink = v120[1].ProcessListEntry.Blink;
            if ( !Blink )
              goto LABEL_559;
            v145 = 0LL;
            ReadyTime = (__int64 *)v120[1].ReadyTime;
            if ( ReadyTime )
              v145 = *ReadyTime;
            if ( v145 )
            {
              if ( (RtlReadULongFromUser((unsigned int *)(v145 + 1140)) & 1) != 0 )
LABEL_740:
                LODWORD(Src) = (unsigned int)Src | 1;
            }
            else if ( (RtlReadULongFromUser((unsigned int *)&Blink[124]) & 1) != 0 )
            {
              goto LABEL_740;
            }
LABEL_559:
            if ( PreviousMode )
              RtlCopyToUser((void *)v6, &Src, 8uLL);
            else
              RtlCopyVolatileMemory((void *)v6, &Src, 8uLL);
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 8);
              else
                LODWORD(a5->Count) = 8;
            }
            return Count;
          }
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 8);
            else
              LODWORD(a5->Count) = 8;
          }
          break;
        case 106:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          LODWORD(Src) = 16;
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, &Src, 4uLL);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, 4uLL);
          if ( !a5 )
            return 0;
          if ( PreviousMode )
LABEL_35:
            RtlWriteULongToUser(a5, 4);
          else
            LODWORD(a5->Count) = 4;
          return 0;
        case 109:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
          v164 = Object;
          if ( !IsCurrentThreadInServerSilo )
          {
            EffectiveServerSilo = PsGetEffectiveServerSilo(*((_QWORD *)Object + 84));
            LODWORD(Src) = PsGetSiloIdentifier(EffectiveServerSilo);
          }
          ObfDereferenceObjectWithTag(v164, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)v6, (int)Src);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, 4uLL);
          if ( !a5 )
            return 0;
          if ( PreviousMode )
LABEL_948:
            RtlWriteULongToUser(a5, 4);
          else
            LODWORD(a5->Count) = 4;
          return 0;
        case 114:
          if ( (_DWORD)v5 != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     4096LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v37 = result;
          if ( result < 0 )
            return result;
          Src = (PEX_RUNDOWN_REF)**((_QWORD **)Object + 254);
          *(_QWORD *)&v271 = *(_QWORD *)(*((_QWORD *)Object + 254) + 8LL);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( PreviousMode )
            RtlCopyToUser((void *)v6, &Src, 0x10uLL);
          else
            RtlCopyVolatileMemory((void *)v6, &Src, 0x10uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 16);
            else
              LODWORD(a5->Count) = 16;
          }
          return v37;
        case 115:
          v285 = 0LL;
          if ( (_DWORD)v5 != 16 )
            return -1073741820;
          if ( Handle != (HANDLE)-1LL )
            return -1073741811;
          if ( PreviousMode )
          {
            RtlCopyFromUser(&v285, (void *)v6, 0x10uLL);
            if ( (v6 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v173 = RtlReadULongFromUser((unsigned int *)v6);
            RtlWriteULongToUser((_DWORD *)v6, v173);
            v147 = &v285;
          }
          else
          {
            v147 = (__int128 *)v6;
          }
          FirstThreadByTebValue = PspFindFirstThreadByTebValue(
                                    (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
                                    *((unsigned int *)v147 + 1),
                                    *((_QWORD *)v147 + 1),
                                    v147);
          DeviceMapInformation = FirstThreadByTebValue;
          if ( FirstThreadByTebValue == -1073741275 )
          {
            *(_DWORD *)v147 = 0;
            DeviceMapInformation = 0;
          }
          else if ( FirstThreadByTebValue < 0 )
          {
            return DeviceMapInformation;
          }
          if ( PreviousMode )
          {
            RtlWriteULongToUser((_DWORD *)v6, *(_DWORD *)v147);
            if ( a5 )
              RtlWriteULongToUser(a5, 4);
          }
          else if ( a5 )
          {
            LODWORD(a5->Count) = 4;
          }
          return DeviceMapInformation;
        case 117:
          v290 = 2097153LL;
          memset_0(v291, 0, 0x100uLL);
          return PspQueryInformationProcessAvailableCpus(
                   Handle,
                   (char *)v6,
                   v5,
                   PreviousMode,
                   (unsigned __int16 *)&v290);
        default:
          return -1073741821;
      }
      return -1073741820;
    }
    if ( (_DWORD)v5 != 112 && (_DWORD)v5 != 88 && (_DWORD)v5 != 96 )
      return -1073741820;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)Handle,
               4096LL,
               PsProcessType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v18 = Object;
    Src = (PEX_RUNDOWN_REF)*((_QWORD *)Object + 68);
    *(_QWORD *)&v271 = *((_QWORD *)Object + 69);
    DWORD2(v271) = *((_DWORD *)Object + 257);
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v286);
    DeviceMapInformation = MmQueryWorkingSetInformation(&v272, (_QWORD *)&v272 + 1, v280, v212, RunRef, v225);
    KiUnstackDetachProcess((__int64)v286, 0);
    v274 = v18[65];
    v273 = v18[67];
    v276 = v18[64];
    v275 = v18[66];
    v277 = v18[123] << 12;
    v278 = v18[124] << 12;
    v280[1] = v18[213] << 12;
    v279 = v277;
    ObfDereferenceObjectWithTag(v18, 0x79517350u);
    if ( DeviceMapInformation >= 0 )
    {
      if ( PreviousMode )
        RtlCopyToUser((void *)v6, &Src, v5);
      else
        RtlCopyVolatileMemory((void *)v6, &Src, v5);
      if ( a5 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(a5, v5);
        else
          LODWORD(a5->Count) = v5;
      }
      return 0;
    }
    return DeviceMapInformation;
  }
  v228 = 0LL;
  v229[1] = 0;
  v231 = 0LL;
  v232 = 0LL;
  Flink = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v19 = 0;
  v204[0] = 0;
  if ( (_DWORD)v5 == 64 )
  {
    v228 = 64LL;
    v206 = 64;
    v20 = 1;
  }
  else
  {
    if ( (_DWORD)v5 != 48 )
      return -1073741820;
    v206 = 48;
    v20 = 0;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Handle,
             4096LL,
             PsProcessType,
             PreviousMode,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  v22 = result;
  if ( result < 0 )
    return result;
  v23 = (_KPROCESS *)Object;
  v229[0] = *((_DWORD *)Object + 341);
  v230 = *((_QWORD *)Object + 92);
  if ( (*((_BYTE *)Object + 368) & 1) != 0 )
  {
    VslGetSecurePebAddress(Object, &v230);
    v23 = (_KPROCESS *)Object;
  }
  if ( (*(_DWORD *)&v23->0 & 0x1000) == 0 || v23 == CurrentThread->Process )
  {
    v290 = 2097153LL;
    memset_0(v291, 0, 0x100uLL);
    KeQueryAffinityProcess((__int64)Object, (__int64)&v290, &v283, 0LL, &v205);
    v23 = (_KPROCESS *)Object;
    if ( Object != CurrentThread->Process )
    {
      v24 = v205;
      goto LABEL_73;
    }
    v174 = KeTestBitGroupMask((const signed __int64 *)&v283, CurrentThread->UserAffinityPrimaryGroup);
    v23 = (_KPROCESS *)Object;
    if ( v174 )
    {
LABEL_73:
      if ( v24 != 32 )
      {
        v220 = v291[v24];
        v23 = (_KPROCESS *)Object;
      }
    }
  }
  if ( v20 )
  {
    PsQueryProcessAttributes((__int64)v23, v204, 0LL, v21);
    v19 = v204[0];
    v23 = (_KPROCESS *)Object;
  }
  v231 = v220;
  LODWORD(v232) = v23->BasePriority;
  Flink = v23[1].Header.WaitListHead.Flink;
  v234 = *(_QWORD *)&v23[1].StackCount.Value;
  if ( v20 )
  {
    LODWORD(v235) = 0;
    if ( (v23[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 )
      LODWORD(Count) = 1;
    LODWORD(v235) = Count;
    if ( v23[1].ReadyTime )
    {
      v157 = WORD2(v23[3].PerProcessorCycleTimes);
      if ( v157 == 332 || v157 == 452 )
        LODWORD(v235) = Count | 2;
    }
    v153 = v235;
    if ( (v23[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
    {
      v153 = v235 | 4;
      LODWORD(v235) = v235 | 4;
    }
    v154 = v153 & 0xFFFFFFF7 | (LODWORD(v23[1].DirectoryTableBase) >> 4) & 8;
    LODWORD(v235) = v154;
    if ( v23->FreezeCount + ((*(_DWORD *)&v23->0 >> 3) & 1) )
      LODWORD(v235) = v154 | 0x10;
    if ( v23[1].Padding[3] && *(_DWORD *)(v23[1].Padding[3] + 1072) )
    {
      v155 = v235 | 0x20;
      LODWORD(v235) = v235 | 0x20;
    }
    else
    {
      v155 = v235;
    }
    if ( v19 )
    {
      v155 |= 0x40u;
      LODWORD(v235) = v155;
    }
    if ( (v23->SecureState.EntireField & 1) != 0 )
    {
      v155 |= 0x80u;
      LODWORD(v235) = v155;
    }
    if ( (v23->SecureState.EntireField & 2) != 0 )
    {
      v155 |= 0x200u;
      LODWORD(v235) = v155;
    }
    if ( v23[3].Padding[5] )
      LODWORD(v235) = v155 | 0x100;
  }
  if ( v20 )
  {
    v25 = 64LL;
    v26 = &v228;
  }
  else
  {
    v25 = 48LL;
    v26 = (__int64 *)v229;
  }
  if ( PreviousMode )
    RtlCopyToUser((void *)v6, v26, v25);
  else
    RtlCopyVolatileMemory((void *)v6, v26, v25);
  if ( a5 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a5, v206);
    else
      LODWORD(a5->Count) = v206;
  }
LABEL_640:
  ObfDereferenceObjectWithTag(Object, 0x79517350u);
  return v22;
}
