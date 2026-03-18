/*
 * XREFs of MiInitNucleus @ 0x140CF2CBC
 * Callers:
 *     MmInitSystem @ 0x140C7FD84 (MmInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x1404A0C04 (MiEnumerateSlabAllocatorsEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExInitializePoolHeapManagement @ 0x1406D2B44 (ExInitializePoolHeapManagement.c)
 *     MxInstallMoreMemory @ 0x1406E73E8 (MxInstallMoreMemory.c)
 *     MiFreeUnusedPfnPages @ 0x1406E88D0 (MiFreeUnusedPfnPages.c)
 *     MiInitializePageFaultResources @ 0x1406F76AC (MiInitializePageFaultResources.c)
 *     MiInitializeDebuggerSupport @ 0x1406FEDCC (MiInitializeDebuggerSupport.c)
 *     MiInitializeCommitment @ 0x1407059A4 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x140864CD8 (MiInitializeSections.c)
 *     MiInitializeSystemWorkingSetList @ 0x1408676D4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeWsSwapping @ 0x14087A814 (MiInitializeWsSwapping.c)
 *     MmInitializeProcessor @ 0x140C0013C (MmInitializeProcessor.c)
 *     MiInitializeNumaRangesPermanent @ 0x140CF1354 (MiInitializeNumaRangesPermanent.c)
 *     MiInitializeNumaRangesTemporary @ 0x140CF13DC (MiInitializeNumaRangesTemporary.c)
 *     MiInitializeBootDefaults @ 0x140CF1C18 (MiInitializeBootDefaults.c)
 *     MiCreatePfnDatabase @ 0x140CF2818 (MiCreatePfnDatabase.c)
 *     MiExamineHalVa @ 0x140CF2A08 (MiExamineHalVa.c)
 *     MiFillPfnGaps @ 0x140CF2AE8 (MiFillPfnGaps.c)
 *     MiInitializeDummyPages @ 0x140CF32F0 (MiInitializeDummyPages.c)
 *     MiInitializeFunctionOverrides @ 0x140CF351C (MiInitializeFunctionOverrides.c)
 *     MiInitializeKasan @ 0x140CF35B0 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF36E4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiInitializeSystemDefaults @ 0x140CF3840 (MiInitializeSystemDefaults.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MiZeroBootMappings @ 0x140CF4038 (MiZeroBootMappings.c)
 *     MxMarkValidMappings @ 0x140CF40A8 (MxMarkValidMappings.c)
 *     MxConstructLoaderMemoryTree @ 0x140CF53CC (MxConstructLoaderMemoryTree.c)
 *     MxInitializePfnsForValidMappings @ 0x140CF70A8 (MxInitializePfnsForValidMappings.c)
 *     MxSwitchToPfns @ 0x140CF8360 (MxSwitchToPfns.c)
 *     MiCreateHugeIoRanges @ 0x140CF89F0 (MiCreateHugeIoRanges.c)
 *     MiInitializePartitions @ 0x140CF8CA4 (MiInitializePartitions.c)
 *     MiInitializeDynamicVa @ 0x140CF97E4 (MiInitializeDynamicVa.c)
 *     MiBuildPagedPool @ 0x140CF9A9C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140CF9BA8 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140CF9F28 (MiBuildSystemDataViews.c)
 *     MiCheckLargePageOk @ 0x140CFAE64 (MiCheckLargePageOk.c)
 *     MiMemoryLicense @ 0x140CFB138 (MiMemoryLicense.c)
 *     MiInitializeKernelStacks @ 0x140CFC600 (MiInitializeKernelStacks.c)
 *     MiInitializeChannelRangesPermanent @ 0x140CFC9E0 (MiInitializeChannelRangesPermanent.c)
 *     MiInitializeChannelRangesTemporary @ 0x140CFCA64 (MiInitializeChannelRangesTemporary.c)
 *     MiInitializeZeroingAttributes @ 0x140CFDAC8 (MiInitializeZeroingAttributes.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140CFEB84 (MiMeasureDemandCoalesceTimeBounds.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140CFEDA4 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140CFF020 (MiInitializeSystemPtes.c)
 *     MiInitMachineDependent @ 0x140D017C8 (MiInitMachineDependent.c)
 *     MiInitializeSystemPteTracker @ 0x140D01888 (MiInitializeSystemPteTracker.c)
 *     MiInitializeDecayPfns @ 0x140D018DC (MiInitializeDecayPfns.c)
 *     MiCreateTopLevelUltraMappings @ 0x140D01988 (MiCreateTopLevelUltraMappings.c)
 */

__int64 __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned int i; // ebx
  __int64 PoolMm; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  char *AnyMultiplexedVm; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // r9

  if ( LODWORD(stru_140E2EB88.Affinity) )
    KeBugCheckEx(0x1Au, 0x300uLL, SLODWORD(stru_140E2EB88.Affinity), 0LL, 0LL);
  MiInitializeSystemDefaults();
  MiInitMachineDependent();
  MiLowHalVa = MiExamineHalVa();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  v2 = qword_140E35E40;
  v3 = 2LL;
  do
  {
    *v2 = 0LL;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  xmmword_140E35EC0 = 0LL;
  MiInitializeDynamicVa();
  MiInitializeNumaRangesTemporary();
  MiInitializeChannelRangesTemporary();
  v4 = dword_140FBE22C;
  if ( dword_140FBE22C == 6881367 )
  {
    v5 = 1;
    dword_140FBE22C = 0;
  }
  else
  {
    dword_140FBE22C = 1;
    v5 = (v4 != 6357068) + 2;
  }
  *(_DWORD *)(MmWriteableSharedUserData + 612) = v5;
  MiMemoryLicense();
  qword_140FFB950 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxConstructLoaderMemoryTree(BugCheckParameter2);
  qword_140FFB948 = KeQueryPerformanceCounter(0LL).QuadPart;
  qword_140E2D790 = -1LL;
  MiCheckLargePageOk(BugCheckParameter2);
  xmmword_140E2EAA0 = 0LL;
  xmmword_140E2EA90 = 0LL;
  xmmword_140E2EA80 = 0LL;
  *((_QWORD *)&xmmword_140E2EA90 + 1) = 1LL;
  LODWORD(xmmword_140E2EAA0) = 4587522;
  *((_QWORD *)&xmmword_140E2EAA0 + 1) = 0x40010000000000LL;
  xmmword_140E2EAB0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140E2EA80);
  xmmword_140E2EAC0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140E2EA90);
  xmmword_140E2EAD0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140E2EAA0);
  *((_QWORD *)&xmmword_140E2EAC0 + 1) &= 0xC000000000000000uLL;
  LODWORD(xmmword_140E2EAD0) = xmmword_140E2EAD0 & 0xFFF80000 | 0x50000;
  MxMarkValidMappings(0xFFFFF6FB7DBED800uLL, 0xFFFFF6FB7DBEDFF8uLL, 3LL, BugCheckParameter2);
  qword_140FFB960 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiCreatePfnDatabase(BugCheckParameter2);
  qword_140FFB968 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxInitializePfnsForValidMappings(BugCheckParameter2);
  qword_140FFB970 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxSwitchToPfns(BugCheckParameter2);
  qword_140FFB978 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeZeroingAttributes();
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
    MxInstallMoreMemory(1);
  MiInitializeDebuggerSupport(v7, v6, v8, v9);
  MiProtectSharedUserPage();
  if ( !(unsigned int)MiInitializeNonPagedPool() )
    MxInstallMoreMemory(5);
  MiMapDummyPages();
  MiInitializeKasan(BugCheckParameter2);
  qword_140FFB980 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((((unsigned __int64)MiFlags >> 17) & 1) << 10) < 0 )
    MxInstallMoreMemory(11);
  if ( !(unsigned int)MiInitializePartitions(1LL) )
    MxInstallMoreMemory(40);
  MiInitializePhysicalMemoryBlocks(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeFunctionOverrides(BugCheckParameter2);
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140E348F0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E348F0 = 0LL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; *(_QWORD *)(384 * v15 + qword_140E2D6B8 + 376) = v12 )
  {
    PoolMm = ExAllocatePoolMm(64LL, 0x3C0uLL, 1867082061, i | 0x80000000);
    v12 = (_QWORD *)PoolMm;
    if ( !PoolMm )
      MxInstallMoreMemory(12);
    v13 = (_QWORD *)(PoolMm + 720);
    v14 = 4LL;
    do
    {
      v13[1] = 0LL;
      *(v13 - 1) = 0x3FFFFFFFFFLL;
      *v13 = 0x3FFFFFFFFFLL;
      v13 += 4;
      --v14;
    }
    while ( v14 );
    v12[107] = 0LL;
    v15 = i++;
    v12[105] = 0x3FFFFFFFFFLL;
    v12[106] = 0x3FFFFFFFFFLL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v17 = &qword_140E37800;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v17 = (__int64 *)(AnyMultiplexedVm + 192);
  *v17 = (__int64)&stru_140E2D150.IoSelfBoostsEntry;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0LL) < 0 )
    MxInstallMoreMemory(16);
  MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)&unk_140E376C0, 9, 0LL);
  if ( !(unsigned int)MiInitializeKernelStacks() )
    MxInstallMoreMemory(13);
  if ( !(unsigned int)MiInitializeNonCachedMappingRegion() )
    MxInstallMoreMemory(48);
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
    MxInstallMoreMemory(14);
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
    MxInstallMoreMemory(15);
  if ( !(unsigned int)MiBuildSystemDataViews() )
    MxInstallMoreMemory(51);
  MiFillPfnGaps();
  qword_140FFB988 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiFreeUnusedPfnPages(0LL, v18, v19, v20);
  qword_140FFB990 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources(v22, v21, v23, v24) )
    MxInstallMoreMemory(20);
  if ( !(unsigned int)MiBuildPagedPool() )
    MxInstallMoreMemory(21);
  MiCreateHugeIoRanges(BugCheckParameter2);
  MiInitializeWsSwapping(&MiSystemPartition);
  MiInitializeNumaRangesPermanent();
  MiInitializeChannelRangesPermanent();
  ExInitializeNPagedLookasideListInternal((__int64)&Lookaside, 0LL, 0LL, 512, 192, 1800170829, 0, 0);
  MiMeasureDemandCoalesceTimeBounds();
  MiFlags |= 0x1000000000uLL;
  return MiEnumerateSlabAllocatorsEx((__int64)&MiSystemPartition, (__int64)MiInitialSlabPopulate, 0LL, 0xFFFFFFFF, 9u);
}
