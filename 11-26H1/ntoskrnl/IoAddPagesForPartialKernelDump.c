/*
 * XREFs of IoAddPagesForPartialKernelDump @ 0x1405D6F18
 * Callers:
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     DumpCtlCheckErrorLocation @ 0x1405C897C (DumpCtlCheckErrorLocation.c)
 *     DumpCtlCheckExitStatus @ 0x1405C89A0 (DumpCtlCheckExitStatus.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405CB638 (IopDumpCallRemovePagesCallbacks.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopCompactRemovePagesArray @ 0x1405D7CCC (IopCompactRemovePagesArray.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x1406D6EA0 (ExpHeapDumpEnumLargeAllocs.c)
 */

__int64 __fastcall IoAddPagesForPartialKernelDump(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int i; // ebx
  __int64 j; // rdi
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // r9d
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned __int64 v19; // rdx

  AvailablePagesForPartialDump = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  IopDumpCallRemovePagesCallbacks(a1);
  IoSaveBugCheckProgress(34);
  if ( MmIsAddressValidEx((__int64)IopRemoveLargeAllocsFromPartialDump) )
  {
    for ( i = 0; i < HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink); ++i )
    {
      for ( j = 0LL; (unsigned int)j <= 1; j = (unsigned int)(j + 1) )
      {
        if ( *((_QWORD *)&stru_140E6BFE8.SListFaultAddress + 1048 * i + j) && (int)ExpHeapDumpEnumLargeAllocs() < 0 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  IoSaveBugCheckProgress(40);
  IopCompactRemovePagesArray();
  v13 = IopAddMiniDumpPagesToPartialKernelDump(a1, a2, a3, a4, a5, a6, a7);
  v14 = DumpCtlCheckErrorLocation(v13, 16908289);
  v16 = ((v14 >> 31) & 1) + 16908288;
  if ( v14 >= 0 )
  {
    v17 = IopAddLiveDumpPagesToPartialKernelDump(a1, a2, a3, v15, a5);
    v14 = DumpCtlCheckErrorLocation(v17, 16908290);
    if ( v14 < 0 )
      v16 = v18;
  }
  if ( v14 == -1073741789 )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 0x10u;
    v14 = 0;
  }
  v19 = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  if ( v19 > AvailablePagesForPartialDump )
    *(_QWORD *)(*(_QWORD *)(CrashdmpDumpBlock + 8) + 40LL) = v19 - AvailablePagesForPartialDump;
  if ( v14 < 0 )
  {
    DumpCtlCheckExitStatus(v16, (unsigned int)v14);
    IoSetBugCheckProgressFlag(0x4000000);
  }
  IoSaveBugCheckProgress(42);
  return (unsigned int)v14;
}
