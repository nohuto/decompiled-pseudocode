/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x140A69154
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x1402A51B0 (MmGetNumberOfFreeSystemPtes.c)
 *     MiFreePoolPagesLeft @ 0x140477C24 (MiFreePoolPagesLeft.c)
 *     MmGetTotalCommitLimit @ 0x14048B380 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x14048B3A0 (MmGetPeakCommitment.c)
 *     MmGetTotalCommittedPages @ 0x14048B4F0 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x14048C960 (MmGetAvailablePages.c)
 *     MmGetResidentAvailablePages @ 0x14048E17C (MmGetResidentAvailablePages.c)
 *     MiMaximumCommitmentAvailable @ 0x14049191C (MiMaximumCommitmentAvailable.c)
 *     MmGetSharedCommit @ 0x1404A0224 (MmGetSharedCommit.c)
 *     MmGetProcessPartitionId @ 0x1404A34A8 (MmGetProcessPartitionId.c)
 *     ExQueryPoolUsage @ 0x1404A4738 (ExQueryPoolUsage.c)
 *     MmGetWorkingSetLeafSize @ 0x1404A8AF4 (MmGetWorkingSetLeafSize.c)
 *     MmGetSystemPageCounts @ 0x1404D3070 (MmGetSystemPageCounts.c)
 *     MmGetMdlPagesAllocated @ 0x1404D3AEC (MmGetMdlPagesAllocated.c)
 *     MmGetContiguousPagesAllocated @ 0x1404D488C (MmGetContiguousPagesAllocated.c)
 *     MmGetSystemPageTableCommit @ 0x1404D54DC (MmGetSystemPageTableCommit.c)
 *     MmGetPfnDatabaseCommit @ 0x1404D54EC (MmGetPfnDatabaseCommit.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PsQueryRuntimeProcess @ 0x140A69970 (PsQueryRuntimeProcess.c)
 */

__int64 __fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, int a3, char a4)
{
  void *v4; // r13
  __int64 v5; // rdi
  int v6; // esi
  unsigned __int64 v7; // rax
  ULONG v8; // r14d
  LARGE_INTEGER v9; // rcx
  ULONG v10; // r15d
  __int64 SchedulerAssistLastYieldBoostTime; // rdx
  __int64 v12; // r10
  __int64 *v13; // rbx
  __int64 *v14; // r11
  __int64 v15; // r12
  int v16; // edx
  int v17; // r8d
  __int64 *v18; // rcx
  unsigned __int16 ProcessPartitionId; // si
  unsigned __int64 AvailablePages; // rax
  int v21; // ecx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int64 v23; // rdx
  unsigned int v24; // ecx
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int64 v26; // rdx
  int v27; // ecx
  unsigned __int64 PeakCommitment; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // ecx
  int v31; // r9d
  int v32; // r10d
  int v33; // r11d
  int v34; // r14d
  int v35; // r15d
  int v36; // r12d
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // r8d
  __int64 *v41; // rdx
  __int64 v42; // r8
  int v43; // r13d
  char *NumberOfFreeSystemPtes; // rax
  unsigned __int64 WorkingSetLeafSize; // rax
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r8
  int v51; // ecx
  int v52; // edx
  int v53; // r8d
  int v54; // r9d
  int v55; // r10d
  int v56; // r11d
  int v57; // r14d
  int v58; // r15d
  int v59; // r12d
  int v60; // edi
  int v61; // r13d
  int v62; // esi
  _DWORD *v63; // rax
  bool v64; // zf
  unsigned __int16 v66; // [rsp+40h] [rbp-218h]
  int v67; // [rsp+44h] [rbp-214h]
  int v68; // [rsp+48h] [rbp-210h]
  int v69; // [rsp+4Ch] [rbp-20Ch]
  int v70; // [rsp+50h] [rbp-208h]
  int v71; // [rsp+54h] [rbp-204h]
  int v72; // [rsp+58h] [rbp-200h]
  __int64 v73; // [rsp+60h] [rbp-1F8h] BYREF
  size_t Size; // [rsp+68h] [rbp-1F0h]
  void *v75; // [rsp+70h] [rbp-1E8h]
  __int128 v76; // [rsp+78h] [rbp-1E0h] BYREF
  _QWORD Src[4]; // [rsp+90h] [rbp-1C8h] BYREF
  ULONG v78; // [rsp+B0h] [rbp-1A8h]
  ULONG v79; // [rsp+B4h] [rbp-1A4h]
  int v80; // [rsp+B8h] [rbp-1A0h]
  int v81; // [rsp+BCh] [rbp-19Ch]
  unsigned int v82; // [rsp+C0h] [rbp-198h]
  int v83; // [rsp+C4h] [rbp-194h]
  unsigned int v84; // [rsp+C8h] [rbp-190h]
  int v85; // [rsp+CCh] [rbp-18Ch]
  int v86; // [rsp+D0h] [rbp-188h]
  int v87; // [rsp+D4h] [rbp-184h]
  int v88; // [rsp+D8h] [rbp-180h]
  int v89; // [rsp+DCh] [rbp-17Ch]
  int v90; // [rsp+E0h] [rbp-178h]
  int v91; // [rsp+E4h] [rbp-174h]
  int v92; // [rsp+E8h] [rbp-170h]
  int v93; // [rsp+ECh] [rbp-16Ch]
  int v94; // [rsp+F0h] [rbp-168h]
  int v95; // [rsp+F4h] [rbp-164h]
  int v96; // [rsp+F8h] [rbp-160h]
  int v97; // [rsp+FCh] [rbp-15Ch]
  char v98; // [rsp+100h] [rbp-158h] BYREF
  char v99; // [rsp+104h] [rbp-154h] BYREF
  char v100; // [rsp+108h] [rbp-150h] BYREF
  char v101; // [rsp+10Ch] [rbp-14Ch] BYREF
  _BYTE v102[4]; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v103[4]; // [rsp+114h] [rbp-144h] BYREF
  int v104; // [rsp+118h] [rbp-140h]
  int v105; // [rsp+11Ch] [rbp-13Ch]
  int v106; // [rsp+120h] [rbp-138h]
  int v107; // [rsp+124h] [rbp-134h]
  _BYTE v108[4]; // [rsp+128h] [rbp-130h] BYREF
  _BYTE v109[4]; // [rsp+12Ch] [rbp-12Ch] BYREF
  int v110; // [rsp+130h] [rbp-128h]
  int v111; // [rsp+134h] [rbp-124h]
  int v112; // [rsp+138h] [rbp-120h]
  int v113; // [rsp+13Ch] [rbp-11Ch]
  __int64 v114; // [rsp+140h] [rbp-118h]
  __int64 v115; // [rsp+148h] [rbp-110h]
  int v116; // [rsp+150h] [rbp-108h]
  int v117; // [rsp+154h] [rbp-104h]
  __int64 v118; // [rsp+158h] [rbp-100h]
  __int64 v119; // [rsp+160h] [rbp-F8h]
  __int64 v120; // [rsp+168h] [rbp-F0h]
  __int64 v121; // [rsp+170h] [rbp-E8h]
  __int64 v122; // [rsp+178h] [rbp-E0h]
  __int64 v123; // [rsp+180h] [rbp-D8h]
  __int64 v124; // [rsp+188h] [rbp-D0h]
  __int64 v125; // [rsp+190h] [rbp-C8h]
  __int64 v126; // [rsp+198h] [rbp-C0h]
  __int64 v127; // [rsp+1A0h] [rbp-B8h]
  __int64 v128; // [rsp+1A8h] [rbp-B0h]
  __int64 v129; // [rsp+1B0h] [rbp-A8h]
  int v130; // [rsp+1B8h] [rbp-A0h]
  __int64 v131; // [rsp+1BCh] [rbp-9Ch]
  int v132; // [rsp+1C4h] [rbp-94h]
  __int64 v133; // [rsp+1C8h] [rbp-90h]
  __int64 v134; // [rsp+1D0h] [rbp-88h]
  __int64 ResidentAvailablePages; // [rsp+1D8h] [rbp-80h]
  __int64 SharedCommit; // [rsp+1E0h] [rbp-78h]
  __int64 MdlPagesAllocated; // [rsp+1E8h] [rbp-70h]
  struct _KTHREAD *PfnDatabaseCommit; // [rsp+1F0h] [rbp-68h]
  struct _LIST_ENTRY *SystemPageTableCommit; // [rsp+1F8h] [rbp-60h]
  __int64 ContiguousPagesAllocated; // [rsp+200h] [rbp-58h]

  LODWORD(Size) = a3;
  v4 = a2;
  v75 = a2;
  v5 = a1;
  memset_0(Src, 0, 0x178uLL);
  v76 = 0LL;
  v6 = IopPerfIoTrackingLock.Padding[4];
  v7 = IopPerfIoTrackingLock.Padding[0];
  v8 = IoReadOperationCount;
  v9 = IoReadTransferCount;
  v10 = IoWriteOperationCount;
  SchedulerAssistLastYieldBoostTime = IopPerfIoTrackingLock.SchedulerAssistLastYieldBoostTime;
  v12 = (unsigned int)v5;
  v13 = KiProcessorBlock;
  if ( (_DWORD)v5 )
  {
    v14 = KiProcessorBlock;
    v15 = (unsigned int)v5;
    do
    {
      v6 += *(_DWORD *)(*v14 + 11620);
      v7 += *(_QWORD *)(*v14 + 11640);
      v8 += *(_DWORD *)(*v14 + 11612);
      v9.QuadPart += *(_QWORD *)(*v14 + 11624);
      v10 += *(_DWORD *)(*v14 + 11616);
      SchedulerAssistLastYieldBoostTime += *(_QWORD *)(*v14++ + 11632);
      --v15;
    }
    while ( v15 );
  }
  Src[1] = v9.QuadPart;
  Src[2] = SchedulerAssistLastYieldBoostTime;
  Src[3] = v7;
  v78 = v8;
  v79 = v10;
  v80 = v6;
  v16 = 0;
  v17 = 0;
  if ( (_DWORD)v5 )
  {
    v18 = KiProcessorBlock;
    do
    {
      v17 += *(_DWORD *)(*v18 + 11580);
      v16 += *(_DWORD *)(*v18++ + 11576);
      --v12;
    }
    while ( v12 );
  }
  v130 = v17;
  v131 = 0LL;
  v132 = v16;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  v66 = ProcessPartitionId;
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  v21 = -1;
  if ( AvailablePages <= 0xFFFFFFFF )
    v21 = AvailablePages;
  v81 = v21;
  TotalCommittedPages = MmGetTotalCommittedPages(ProcessPartitionId);
  v24 = v23;
  if ( TotalCommittedPages <= v23 )
    v24 = TotalCommittedPages;
  v82 = v24;
  TotalCommitLimit = MmGetTotalCommitLimit(ProcessPartitionId);
  v27 = v26;
  if ( TotalCommitLimit <= v26 )
    v27 = TotalCommitLimit;
  v83 = v27;
  PeakCommitment = MmGetPeakCommitment(ProcessPartitionId);
  v30 = v29;
  if ( PeakCommitment <= v29 )
    v30 = PeakCommitment;
  if ( v30 < v82 )
    v30 = v82;
  v84 = v30;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v67 = 0;
  v38 = 0;
  v68 = 0;
  v39 = 0;
  v69 = 0;
  v40 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  LODWORD(v73) = 0;
  if ( (_DWORD)v5 )
  {
    v41 = KiProcessorBlock;
    v42 = v5;
    v43 = 0;
    do
    {
      v31 += *(_DWORD *)(*v41 + 11536);
      v32 += *(_DWORD *)(*v41 + 11540);
      v33 += *(_DWORD *)(*v41 + 11544);
      v34 += *(_DWORD *)(*v41 + 34856);
      v35 += *(_DWORD *)(*v41 + 11548);
      v36 += *(_DWORD *)(*v41 + 11552);
      v67 += *(_DWORD *)(*v41 + 11556);
      v68 += *(_DWORD *)(*v41 + 34860);
      v69 += *(_DWORD *)(*v41 + 34864);
      v70 += *(_DWORD *)(*v41 + 11560);
      v71 += *(_DWORD *)(*v41 + 11564);
      v72 += *(_DWORD *)(*v41 + 11568);
      v43 += *(_DWORD *)(*v41++ + 11572);
      --v42;
    }
    while ( v42 );
    LODWORD(v73) = v43;
    v4 = v75;
    v37 = v67;
    v38 = v68;
    v39 = v69;
    v40 = v70;
  }
  v85 = v31;
  v86 = v32;
  v87 = v33;
  v88 = v34;
  v89 = v35;
  v90 = v36;
  v91 = v37;
  v92 = v38;
  v93 = v39;
  v94 = v40;
  v95 = v71;
  v96 = v72;
  v97 = v73;
  NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
  if ( (unsigned __int64)NumberOfFreeSystemPtes > 0xFFFFFFFF )
    LODWORD(NumberOfFreeSystemPtes) = -1;
  v104 = (int)NumberOfFreeSystemPtes;
  MmGetSystemPageCounts((__int64)&v76);
  v105 = v76;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(1);
  if ( WorkingSetLeafSize > v46 )
    LODWORD(WorkingSetLeafSize) = v46;
  v111 = WorkingSetLeafSize;
  v47 = MmGetWorkingSetLeafSize(2);
  if ( v47 > v48 )
    LODWORD(v47) = v48;
  v112 = v47;
  v107 = DWORD2(v76);
  v113 = DWORD1(v76);
  v106 = HIDWORD(v76);
  MiFreePoolPagesLeft(5);
  v49 = MiMaximumCommitmentAvailable();
  if ( v50 > v49 )
    LODWORD(v50) = v49;
  v110 = v50;
  Src[0] = PsQueryRuntimeProcess(PsIdleProcess, &v73) * KeMaximumIncrement;
  ExQueryPoolUsage(
    (int)&v98,
    (int)&v99,
    (int)&v100,
    (int)&v101,
    (__int64)v109,
    (__int64)v102,
    (__int64)v103,
    (__int64)v108);
  v51 = 0;
  v114 = 0LL;
  v52 = 0;
  v53 = 0;
  v115 = 0LL;
  v54 = 0;
  v55 = 0;
  v116 = 0;
  v56 = *(_DWORD *)&EmpParseLock.PriorityFloorCounts[28];
  v117 = *(_DWORD *)&EmpParseLock.PriorityFloorCounts[28];
  v57 = 0;
  v118 = 0LL;
  v58 = 0;
  v59 = 0;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  if ( (_DWORD)v5 )
  {
    v73 = v5;
    v60 = HIDWORD(v119);
    v61 = 0;
    v62 = HIDWORD(v120);
    do
    {
      v63 = (_DWORD *)*v13;
      v51 += *(_DWORD *)(*v13 + 11588);
      LODWORD(v114) = v51;
      v52 += v63[2898];
      HIDWORD(v114) = v52;
      v53 += v63[8704];
      LODWORD(v115) = v53;
      v54 += v63[2899];
      HIDWORD(v115) = v54;
      v55 += v63[8688];
      v116 = v55;
      v56 += v63[8689];
      v117 = v56;
      v57 += v63[8706];
      LODWORD(v118) = v57;
      v58 += v63[8690];
      HIDWORD(v118) = v58;
      v59 += v63[8691];
      LODWORD(v119) = v59;
      HIDWORD(v119) = v63[8692] + v60;
      v61 += v63[8707];
      LODWORD(v120) = v61;
      v62 += v63[8708];
      HIDWORD(v120) = v62;
      LODWORD(v121) = v63[8693] + v121;
      HIDWORD(v121) += v63[8694];
      LODWORD(v122) = v63[8695] + v122;
      HIDWORD(v122) += v63[8709];
      LODWORD(v123) = v63[8710] + v123;
      HIDWORD(v123) += v63[2900];
      LODWORD(v124) = v63[2901] + v124;
      HIDWORD(v124) += v63[2902];
      LODWORD(v125) = v63[8705] + v125;
      HIDWORD(v125) += v63[8696];
      LODWORD(v126) = v63[8697] + v126;
      HIDWORD(v126) += v63[8711];
      LODWORD(v127) = v63[8712] + v127;
      HIDWORD(v127) += v63[8713];
      LODWORD(v128) = v63[8699] + v128;
      HIDWORD(v128) += v63[8700];
      LODWORD(v129) = v63[8701] + v129;
      HIDWORD(v129) += v63[8702];
      ++v13;
      v64 = v73-- == 1;
      v60 = HIDWORD(v119);
    }
    while ( !v64 );
    ProcessPartitionId = v66;
    v4 = v75;
  }
  v133 = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  v134 = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages(ProcessPartitionId);
  SharedCommit = MmGetSharedCommit();
  MdlPagesAllocated = MmGetMdlPagesAllocated();
  PfnDatabaseCommit = MmGetPfnDatabaseCommit();
  SystemPageTableCommit = MmGetSystemPageTableCommit();
  ContiguousPagesAllocated = MmGetContiguousPagesAllocated();
  if ( a4 )
    RtlCopyToUser(v4, Src, (unsigned int)Size);
  else
    RtlCopyVolatileMemory(v4, Src, (unsigned int)Size);
  return 0LL;
}
