/*
 * XREFs of PspInitPhase0 @ 0x140D0D27C
 * Callers:
 *     PsInitSystem @ 0x140C85D24 (PsInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExCreateHandleTable @ 0x1409BCDDC (ExCreateHandleTable.c)
 *     PspValidateMitigationOptions @ 0x140A78928 (PspValidateMitigationOptions.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     PsChangeQuantumTable @ 0x140AB8200 (PsChangeQuantumTable.c)
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 *     PspValidateMitigationAuditOptions @ 0x140B42824 (PspValidateMitigationAuditOptions.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     PspInitializeCpuPartitionsPhase0 @ 0x140CDED10 (PspInitializeCpuPartitionsPhase0.c)
 *     PspInitializeSiloStructures @ 0x140CDF024 (PspInitializeSiloStructures.c)
 *     PspInitializeJobStructures @ 0x140CDF360 (PspInitializeJobStructures.c)
 *     PspTlsInitialize @ 0x140CDF468 (PspTlsInitialize.c)
 *     PspIumInitialize @ 0x140CDF4BC (PspIumInitialize.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140CDF5A8 (PspInitializeSystemPartitionPhase0.c)
 */

char __fastcall PspInitPhase0(PVOID StartContext)
{
  char *v1; // r9
  __int64 v2; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  int *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  size_t v10; // rbx
  _RTL_RUN_ONCE *v11; // rcx
  _RTL_RUN_ONCE *v12; // rcx
  __int64 v13; // rax
  _RTL_RUN_ONCE *v14; // rcx
  _RTL_RUN_ONCE *v15; // rcx
  __int64 v16; // rax
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rcx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  _SINGLE_LIST_ENTRY *v20; // rcx
  __int64 v21; // rax
  _KPROCESS *Process; // rcx
  size_t v23; // rax
  unsigned __int16 *p_AffinityPrimaryGroup; // rdi
  int v25; // ebx
  _QWORD *v26; // rbx
  void *v27; // rcx
  NTSTATUS v28; // eax
  PVOID v29; // rcx
  PEPROCESS v30; // rbx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // [rsp+60h] [rbp-A0h]
  __int16 v34; // [rsp+70h] [rbp-90h] BYREF
  char v35; // [rsp+72h] [rbp-8Eh]
  __int64 v36; // [rsp+74h] [rbp-8Ch]
  __int128 v37; // [rsp+7Ch] [rbp-84h]
  int v38; // [rsp+8Ch] [rbp-74h]
  int v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+94h] [rbp-6Ch]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  void *v43; // [rsp+A8h] [rbp-58h]
  void *v44; // [rsp+B0h] [rbp-50h]
  void *v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+F0h] [rbp-10h]
  char v48; // [rsp+F4h] [rbp-Ch] BYREF
  int v49; // [rsp+F8h] [rbp-8h]
  char v50; // [rsp+FCh] [rbp-4h]
  int v51; // [rsp+100h] [rbp+0h]
  char v52; // [rsp+104h] [rbp+4h]
  int v53; // [rsp+108h] [rbp+8h]
  char v54; // [rsp+10Ch] [rbp+Ch]
  int v55; // [rsp+110h] [rbp+10h]
  char v56; // [rsp+114h] [rbp+14h]
  int v57; // [rsp+118h] [rbp+18h]
  char v58; // [rsp+11Ch] [rbp+1Ch]
  _OWORD v59[2]; // [rsp+120h] [rbp+20h] BYREF
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF
  HANDLE ThreadHandle; // [rsp+180h] [rbp+80h] BYREF

  v1 = &v48;
  v49 = 2;
  v59[0] = _mm_load_si128((const __m128i *)&_xmm);
  ThreadHandle = 0LL;
  v47 = 0;
  v55 = 4;
  v48 = 1;
  v50 = 3;
  v2 = 6LL;
  v51 = 3;
  v52 = 1;
  v53 = 1;
  v54 = 1;
  v56 = 1;
  v58 = 1;
  v57 = 5;
  v59[1] = _mm_load_si128((const __m128i *)&_xmm);
  PspSiloMonitorLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)50;
  *(_QWORD *)PspSiloMonitorLock.PriorityFloorCounts = 345LL;
  PspHardenedMitigationOptionsMap = 0LL;
  qword_140FC1700 = 0LL;
  do
  {
    v4 = (unsigned int)(4 * *((_DWORD *)v1 - 1));
    v5 = (unsigned __int8)*v1;
    v6 = (4 * *(v1 - 4)) & 0x3F;
    v1 += 8;
    *((_QWORD *)&PspHardenedMitigationOptionsMap + (v4 >> 6)) = (v5 << v6) | *((_QWORD *)&PspHardenedMitigationOptionsMap
                                                                             + (v4 >> 6)) & ~(3LL << v6);
    --v2;
  }
  while ( v2 );
  if ( (unsigned int)PspSystemMitigationOptionsLength < 0x18 )
    memset_0(
      (void *)(0x140000000LL + (unsigned int)PspSystemMitigationOptionsLength + 16519752LL),
      0,
      24LL - (unsigned int)PspSystemMitigationOptionsLength);
  DestinationString = *(UNICODE_STRING *)&stru_140FC11F0.KernelStack;
  PspSystemMitigationOptionsLength = 24;
  SchedulingGroup = stru_140FC11F0.SchedulingGroup;
  if ( (int)PspValidateMitigationOptions((__m128i *)&DestinationString, 1) < 0 )
  {
    *(_OWORD *)&stru_140FC11F0.KernelStack = 0LL;
    stru_140FC11F0.SchedulingGroup = 0LL;
  }
  v7 = (int *)v59;
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    *((_QWORD *)&stru_140FC11F0.KernelStack + ((unsigned __int64)(unsigned int)(4 * v9) >> 6)) &= ~(3LL << (4 * (unsigned __int8)v9));
    --v8;
  }
  while ( v8 );
  v10 = (unsigned int)PspSystemMitigationAuditOptionsLength;
  if ( (unsigned int)PspSystemMitigationAuditOptionsLength < 0x18 )
    memset_0(
      &stru_140FC11F0.SchedulerApcFill5[(unsigned int)PspSystemMitigationAuditOptionsLength + 72],
      0,
      24LL - (unsigned int)PspSystemMitigationAuditOptionsLength);
  DestinationString = *(UNICODE_STRING *)&stru_140FC11F0.SchedulerApcFill5[72];
  SchedulingGroup = *(_KSCHEDULING_GROUP *volatile *)&stru_140FC11F0.SuspendEvent.Header.Lock;
  if ( (int)PspValidateMitigationAuditOptions((__int128 *)&DestinationString) < 0 )
    memset_0(&stru_140FC11F0.SchedulerApcFill5[72], 0, v10);
  v11 = &PspCreateThreadNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v11);
    v11 = v12 + 1;
  }
  while ( v13 != 1 );
  v14 = &PspCreateProcessNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v14);
    v14 = v15 + 1;
  }
  while ( v16 != 1 );
  p_PropagateBoostsEntry = &NormalizationListLock.PropagateBoostsEntry;
  do
  {
    CmSiRWLockInitialize((PRTL_RUN_ONCE)p_PropagateBoostsEntry);
    p_PropagateBoostsEntry = v20 + 1;
  }
  while ( v21 != 1 );
  PsChangeQuantumTable(0, (unsigned int)PsRawPrioritySeparation, v18, v19);
  PspActiveProcessLock = 0LL;
  PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Blink = &PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry;
  PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink = &PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry;
  PsAltSystemCallRegistrationLock.AffinityVersion = (unsigned __int64)&PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup;
  *(_QWORD *)&PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup = &PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  Process[1].ProfileListHead.Blink = 0LL;
  Process->KernelTime = 0LL;
  *(_DWORD *)&NormalizationListLock.WaitBlockFill11[56] = 128;
  *(_QWORD *)&NormalizationListLock.WaitBlockFill11[64] = &NormalizationListLock.WaitBlock[1].Thread;
  *(_OWORD *)&NormalizationListLock.WaitBlockFill11[72] = 0LL;
  NormalizationListLock.WaitBlock[0].SparePtr = 0LL;
  if ( (unsigned __int8)Win32kAsyncProcessFreezeThawSupportIsActive() )
  {
    PsAltSystemCallRegistrationLock.NpxState = 0LL;
    PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)&PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[0].Blink;
    PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[0].Blink;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.SavedApcStateFill[40] = PspPostFreezeOperationWorker;
    *(_QWORD *)&PsAltSystemCallRegistrationLock.SchedulerApc.Type = &PsAltSystemCallRegistrationLock.NpxState;
    PsAltSystemCallRegistrationLock.SavedApcState.ApcListHead[0].Flink = 0LL;
    *(_OWORD *)&PsAltSystemCallRegistrationLock.SavedApcStateFill[24] = 0uLL;
  }
  PsAltSystemCallRegistrationLock.SchedulerApc.Reserved[2] = PspProcessQosChangeNotificationWorker;
  *(_OWORD *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[8] = 0uLL;
  *(_OWORD *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[16] = 0uLL;
  *(_OWORD *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[24] = 0uLL;
  PsAltSystemCallRegistrationLock.SchedulerApc.NormalContext = 0LL;
  *(_OWORD *)&PsAltSystemCallRegistrationLock.SchedulerApcFill5[32] = 0uLL;
  memset_0(&v34, 0, 0x80uLL);
  DestinationString.Buffer = (wchar_t *)L"Session";
  v34 = 128;
  v40 = 512;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v23 = 2 * wcslen(L"Session");
  v42 = 40;
  v38 = 983043;
  if ( v23 >= 0xFFFE )
    LOWORD(v23) = -4;
  DestinationString.Length = v23;
  DestinationString.MaximumLength = v23 + 2;
  v35 |= 0xCu;
  v45 = PsSessionObjectDelete;
  v37 = PspSessionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&MmSessionObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Job");
  v35 &= 0x7Bu;
  v45 = PspJobDelete;
  v36 = 2048LL;
  v44 = PspJobClose;
  v41 = 0;
  v42 = 1848;
  v38 = 2031679;
  v37 = PspJobMapping;
  v46 = 1;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&PsJobType) < 0 )
    return 0;
  HIDWORD(v36) = 176;
  RtlInitUnicodeString(&DestinationString, L"Process");
  v35 |= 0xC2u;
  v45 = PspProcessDelete;
  LODWORD(v36) = 32;
  v43 = PspProcessOpen;
  v41 = 4096;
  v44 = PspProcessClose;
  v42 = 2112;
  v38 = 0x1FFFFF;
  v39 = 1052672;
  v37 = PspProcessMapping;
  v46 = 3;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&PsProcessType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Thread");
  v35 |= 0x80u;
  v45 = PspThreadDelete;
  LODWORD(v36) = 4;
  v43 = PspThreadOpen;
  v41 = 0;
  v42 = 1944;
  v44 = 0LL;
  v38 = 0x1FFFFF;
  v39 = 1054720;
  v37 = PspThreadMapping;
  v46 = 3;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&PsThreadType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Partition");
  memset_0(&v34, 0, 0x80uLL);
  v35 |= 0xCu;
  v43 = PspOpenPartitionHandle;
  v34 = 128;
  v44 = PspClosePartitionHandle;
  HIDWORD(v36) = 16;
  v45 = PspDeletePartition;
  v38 = 2031619;
  v37 = PspPartitionMapping;
  v40 = 512;
  v42 = 144;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&PsPartitionType) < 0 )
    return 0;
  memset_0(&v34, 0, 0x80uLL);
  v40 = 512;
  v34 = 128;
  v35 = v35 & 0x7D | 2;
  p_AffinityPrimaryGroup = &ExpPlatformBinaryLock.AffinityPrimaryGroup;
  HIDWORD(v36) = 176;
  v25 = 0;
  v37 = PspMemReserveMapping;
  v38 = 983043;
  while ( v25 < 2 )
  {
    v42 = *(_DWORD *)p_AffinityPrimaryGroup;
    if ( (int)ObCreateObjectType(
                (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v25],
                &v34,
                0LL,
                (__int64)(&stru_140FC11F0.SchedulerApc.ApcListEntry.Blink + v25)) < 0 )
      return 0;
    ++v25;
    p_AffinityPrimaryGroup += 4;
  }
  RtlInitUnicodeString(&DestinationString, L"ActivityReference");
  memset_0(&v34, 0, 0x80uLL);
  v35 |= 4u;
  v34 = 128;
  v40 = 1;
  v41 = 8;
  HIDWORD(v36) = 402;
  v37 = PspActivityReferenceMapping;
  v38 = 2031616;
  v44 = PspCloseActivityReference;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&stru_140FC11F0.AffinityVersion) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ProcessStateChange");
  memset_0(&v34, 0, 0x80uLL);
  v35 |= 6u;
  v34 = 128;
  HIDWORD(v36) = 146;
  v38 = 983041;
  v40 = 1;
  v41 = 24;
  v43 = 0LL;
  v37 = PspProcessStateChangeMapping;
  v44 = 0LL;
  v45 = PspDeleteProcessStateChange;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&stru_140FC11F0.WaitBlock[1].Thread) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ThreadStateChange");
  memset_0(&v34, 0, 0x80uLL);
  v35 |= 6u;
  v34 = 128;
  HIDWORD(v36) = 146;
  v38 = 983041;
  v40 = 1;
  v37 = PspThreadStateChangeMapping;
  v41 = 24;
  v43 = 0LL;
  v44 = 0LL;
  v45 = PspDeleteThreadStateChange;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&stru_140FC11F0.WaitBlockFill11[64]) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"CpuPartition");
  memset_0(&v34, 0, 0x80uLL);
  v35 |= 4u;
  v34 = 128;
  HIDWORD(v36) = 128;
  v38 = 983047;
  v40 = 512;
  v37 = PspCpuPartitionMapping;
  v42 = 40;
  v43 = 0LL;
  v44 = 0LL;
  v45 = PspDeleteCpuPartition;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&PsCpuPartitionType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"SchedulerSharedData");
  memset_0(&v34, 0, 0x80uLL);
  v35 |= 6u;
  v34 = 128;
  HIDWORD(v36) = 146;
  v38 = 983041;
  v40 = 512;
  v37 = PspSchedulerSharedDataMapping;
  v41 = 248;
  v43 = 0LL;
  v44 = 0LL;
  v45 = PspSchedulerSharedDataRegionDelete;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&PspSchedulerSharedDataType) < 0 )
    return 0;
  if ( !PspInitializeJobStructures() )
    return 0;
  if ( !PspInitializeSiloStructures() )
    return 0;
  *(_QWORD *)&stru_140FC11F0.Header.Lock = 0LL;
  qword_140FC11E8 = (__int64)&PspWorkingSetChangeHead;
  PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
  *(_QWORD *)&PspSiloMonitorLock.AffinityPrimaryGroup = 0LL;
  PspCidTable = ExCreateHandleTable(0LL, 0);
  if ( !PspCidTable )
    return 0;
  CmSiRWLockInitialize(&PsWin32CallBack);
  CmSiRWLockInitialize(&PsWin32NullCallBack);
  *(_BYTE *)(PspCidTable + 44) |= 1u;
  PsAltSystemCallRegistrationLock.WaitBlock[2].Object = PspReaper;
  PsAltSystemCallRegistrationLock.Process = (_KPROCESS *)PspProcessRundownWorker;
  *(_QWORD *)&PsAltSystemCallRegistrationLock.ThreadFlags2 = PspProcessRundownWorkerSingle;
  *(_OWORD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[136] = 0uLL;
  *(_QWORD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[112] = 0LL;
  PsAltSystemCallRegistrationLock.UserAffinity = 0LL;
  PsAltSystemCallRegistrationLock.QueueListEntry.Blink = 0LL;
  PsAltSystemCallRegistrationLock.QueueListEntry.Flink = 0LL;
  PsAltSystemCallRegistrationLock.Spare18 = 0LL;
  if ( (int)PspTlsInitialize() < 0 )
    return 0;
  PspBootAccessToken = *((_QWORD *)PsIdleProcess + 73) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (int)PspInitializeSystemPartitionPhase0() < 0 )
    return 0;
  v26 = PspSystemPartition;
  if ( (int)PspInitializeCpuPartitionsPhase0() < 0 )
    return 0;
  if ( PspCreateProcess(v26 + 16, 0x1FFFFF, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) < 0 )
    return 0;
  v27 = (void *)v26[16];
  Object = 0LL;
  v28 = ObReferenceObjectByHandle(v27, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  v29 = Object;
  v26[15] = Object;
  if ( v28 < 0 )
    return 0;
  PsInitialSystemProcess = (PEPROCESS)v29;
  _InterlockedOr((volatile signed __int32 *)v29 + 468, 0x40000000u);
  _InterlockedOr((volatile signed __int32 *)&PsInitialSystemProcess[4].ThreadListHead.Flink + 1, 0x2000u);
  _InterlockedOr((volatile signed __int32 *)&PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1] + 1, 0x1000u);
  strcpy_s((char *)PsIdleProcess + 824, 0xFuLL, "Idle");
  strcpy_s((char *)&PsInitialSystemProcess[1].SecureState, 0xFuLL, "System");
  v30 = PsInitialSystemProcess;
  v30[1].LastRebalanceQpc = ExAllocatePool2(64LL, 0x10uLL, 0x61506553u);
  if ( !PsInitialSystemProcess[1].LastRebalanceQpc )
    return 0;
  if ( PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         0LL,
         0LL,
         0LL,
         (PKSTART_ROUTINE)Phase1Initialization,
         StartContext) < 0 )
    return 0;
  ObCloseHandle(ThreadHandle, 0);
  if ( !PspIumInitialize() )
    return 0;
  PsAltSystemCallRegistrationLock.Timer.Header.WaitListHead.Blink = 0LL;
  return 1;
}
