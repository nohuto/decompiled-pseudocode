/*
 * XREFs of MiInitNucleus @ 0x140CF903C
 * Callers:
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExInitializePoolHeapManagement @ 0x1406D6B74 (ExInitializePoolHeapManagement.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     MiFreeUnusedPfnPages @ 0x1406ED570 (MiFreeUnusedPfnPages.c)
 *     MiInitializePageFaultResources @ 0x1406FC31C (MiInitializePageFaultResources.c)
 *     MiInitializeDebuggerSupport @ 0x140703A9C (MiInitializeDebuggerSupport.c)
 *     MiInitializeCommitment @ 0x14070A674 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x14086B0B8 (MiInitializeSections.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeWsSwapping @ 0x140880C14 (MiInitializeWsSwapping.c)
 *     MmInitializeProcessor @ 0x140C0634C (MmInitializeProcessor.c)
 *     MiInitializeNumaRangesPermanent @ 0x140CF76CC (MiInitializeNumaRangesPermanent.c)
 *     MiInitializeNumaRangesTemporary @ 0x140CF7754 (MiInitializeNumaRangesTemporary.c)
 *     MiInitializeBootDefaults @ 0x140CF7F98 (MiInitializeBootDefaults.c)
 *     MiCreatePfnDatabase @ 0x140CF8B98 (MiCreatePfnDatabase.c)
 *     MiExamineHalVa @ 0x140CF8D88 (MiExamineHalVa.c)
 *     MiFillPfnGaps @ 0x140CF8E68 (MiFillPfnGaps.c)
 *     MiInitializeDummyPages @ 0x140CF9670 (MiInitializeDummyPages.c)
 *     MiInitializeFunctionOverrides @ 0x140CF989C (MiInitializeFunctionOverrides.c)
 *     MiInitializeKasan @ 0x140CF9930 (MiInitializeKasan.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 *     MiInitializeSystemDefaults @ 0x140CF9BC0 (MiInitializeSystemDefaults.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MiZeroBootMappings @ 0x140CFA3B8 (MiZeroBootMappings.c)
 *     MxMarkValidMappings @ 0x140CFA428 (MxMarkValidMappings.c)
 *     MxConstructLoaderMemoryTree @ 0x140CFB74C (MxConstructLoaderMemoryTree.c)
 *     MxInitializePfnsForValidMappings @ 0x140CFD428 (MxInitializePfnsForValidMappings.c)
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 *     MiCreateHugeIoRanges @ 0x140CFED70 (MiCreateHugeIoRanges.c)
 *     MiInitializePartitions @ 0x140CFF024 (MiInitializePartitions.c)
 *     MiInitializeDynamicVa @ 0x140CFFB64 (MiInitializeDynamicVa.c)
 *     MiBuildPagedPool @ 0x140CFFE1C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140D002A8 (MiBuildSystemDataViews.c)
 *     MiCheckLargePageOk @ 0x140D011E4 (MiCheckLargePageOk.c)
 *     MiMemoryLicense @ 0x140D014B8 (MiMemoryLicense.c)
 *     MiInitializeKernelStacks @ 0x140D02980 (MiInitializeKernelStacks.c)
 *     MiInitializeChannelRangesPermanent @ 0x140D02D60 (MiInitializeChannelRangesPermanent.c)
 *     MiInitializeChannelRangesTemporary @ 0x140D02DE4 (MiInitializeChannelRangesTemporary.c)
 *     MiInitializeZeroingAttributes @ 0x140D03E70 (MiInitializeZeroingAttributes.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140D04F24 (MiMeasureDemandCoalesceTimeBounds.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140D05144 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140D053C0 (MiInitializeSystemPtes.c)
 *     MiInitMachineDependent @ 0x140D07B68 (MiInitMachineDependent.c)
 *     MiInitializeSystemPteTracker @ 0x140D07C28 (MiInitializeSystemPteTracker.c)
 *     MiInitializeDecayPfns @ 0x140D07C7C (MiInitializeDecayPfns.c)
 *     MiCreateTopLevelUltraMappings @ 0x140D07D28 (MiCreateTopLevelUltraMappings.c)
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

  if ( LODWORD(stru_140E2ED08.Affinity) )
    KeBugCheckEx(0x1Au, 0x300uLL, SLODWORD(stru_140E2ED08.Affinity), 0LL, 0LL);
  MiInitializeSystemDefaults();
  MiInitMachineDependent();
  MiLowHalVa = MiExamineHalVa();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  v2 = qword_140E35FC0;
  v3 = 2LL;
  do
  {
    *v2 = 0LL;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  xmmword_140E36040 = 0LL;
  MiInitializeDynamicVa();
  MiInitializeNumaRangesTemporary();
  MiInitializeChannelRangesTemporary();
  v4 = dword_140FBF22C;
  if ( dword_140FBF22C == 6881367 )
  {
    v5 = 1;
    dword_140FBF22C = 0;
  }
  else
  {
    dword_140FBF22C = 1;
    v5 = (v4 != 6357068) + 2;
  }
  *(_DWORD *)(MmWriteableSharedUserData + 612) = v5;
  MiMemoryLicense();
  qword_140FFC950 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxConstructLoaderMemoryTree(BugCheckParameter2);
  qword_140FFC948 = KeQueryPerformanceCounter(0LL).QuadPart;
  qword_140E2D910 = -1LL;
  MiCheckLargePageOk(BugCheckParameter2);
  xmmword_140E2EC20 = 0LL;
  xmmword_140E2EC10 = 0LL;
  xmmword_140E2EC00 = 0LL;
  *((_QWORD *)&xmmword_140E2EC10 + 1) = 1LL;
  LODWORD(xmmword_140E2EC20) = 4587522;
  *((_QWORD *)&xmmword_140E2EC20 + 1) = 0x40010000000000LL;
  xmmword_140E2EC30 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140E2EC00);
  xmmword_140E2EC40 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140E2EC10);
  xmmword_140E2EC50 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140E2EC20);
  *((_QWORD *)&xmmword_140E2EC40 + 1) &= 0xC000000000000000uLL;
  LODWORD(xmmword_140E2EC50) = xmmword_140E2EC50 & 0xFFF80000 | 0x50000;
  MxMarkValidMappings(0xFFFFF6FB7DBED800uLL, 0xFFFFF6FB7DBEDFF8uLL, 3LL, BugCheckParameter2);
  qword_140FFC960 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiCreatePfnDatabase(BugCheckParameter2);
  qword_140FFC968 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxInitializePfnsForValidMappings(BugCheckParameter2);
  qword_140FFC970 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxSwitchToPfns(BugCheckParameter2);
  qword_140FFC978 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  qword_140FFC980 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((((unsigned __int64)MiFlags >> 17) & 1) << 10) < 0 )
    MxInstallMoreMemory(11);
  if ( !(unsigned int)MiInitializePartitions(1LL) )
    MxInstallMoreMemory(40);
  MiInitializePhysicalMemoryBlocks(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeFunctionOverrides(BugCheckParameter2);
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140E34A70 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E34A70 = 0LL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; *(_QWORD *)(384 * v15 + qword_140E2D838 + 376) = v12 )
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
  v17 = &qword_140E37980;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v17 = (__int64 *)(AnyMultiplexedVm + 192);
  *v17 = (__int64)&stru_140E2D2D0.IoSelfBoostsEntry;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0LL) < 0 )
    MxInstallMoreMemory(16);
  MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)&unk_140E37840, 9, 0LL);
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
  qword_140FFC988 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiFreeUnusedPfnPages(0LL, v18, v19, v20);
  qword_140FFC990 = KeQueryPerformanceCounter(0LL).QuadPart;
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
