/*
 * XREFs of MiAddRangeToCrashDump @ 0x1406F61BC
 * Callers:
 *     IopLiveDumpAddIptTraceBuffers @ 0x1405CC4C0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1405CC770 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1405D02F4 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405D04D8 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1405D0640 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D0778 (IopLiveDumpMarkRequiredDumpData.c)
 *     IoAddProcessThreadsToDump @ 0x1405D48DC (IoAddProcessThreadsToDump.c)
 *     IoAddProcessesToDump @ 0x1405D4980 (IoAddProcessesToDump.c)
 *     IoAddThreadStackToDump @ 0x1405D4A40 (IoAddThreadStackToDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D5088 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x1405D5320 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x1405D5358 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x1405D5734 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x1405D5BB0 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x1405D5CAC (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x1405D5EA0 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     ExAddPrivateDataToCrashDump @ 0x1406CB960 (ExAddPrivateDataToCrashDump.c)
 *     MiAddPartitionDataToCrashDump @ 0x1406F5D34 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x1406F5F4C (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x1406F62F4 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x1406F677C (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x1406F68A0 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x1406F6934 (MmGetDumpRange.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     MiSystemVaTypeToVm @ 0x140285CBC (MiSystemVaTypeToVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x1406EA2E0 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiAddRangeToCrashDump(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  _KPROCESS *Process; // rdi
  int SystemRegionType; // eax
  __int64 v11; // rdx
  void *p_Blink; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // [rsp+28h] [rbp-79h] BYREF
  int v16; // [rsp+30h] [rbp-71h]
  unsigned int v17; // [rsp+34h] [rbp-6Dh]
  _DWORD v18[2]; // [rsp+38h] [rbp-69h] BYREF
  char v19; // [rsp+41h] [rbp-60h]
  void *v20; // [rsp+58h] [rbp-49h]
  unsigned __int64 v21; // [rsp+60h] [rbp-41h]
  unsigned __int64 v22; // [rsp+68h] [rbp-39h]
  __int64 (__fastcall *v23)(); // [rsp+E0h] [rbp+3Fh]
  __int64 *v24; // [rsp+F0h] [rbp+4Fh]

  memset_0(v18, 0, 0xC0uLL);
  v17 = 0;
  if ( !a3 )
    return 0LL;
  v21 = a2;
  v15 = a1;
  v22 = a2 + a3 - 1;
  v23 = MiFilterCrashDumpPte;
  v16 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v24 = &v15;
  if ( MiSystemInSingleProcessorMode() )
  {
    v18[0] = 70400;
    MiWalkPageTables((__int64)v18);
  }
  else
  {
    v18[0] = 7;
    SystemRegionType = MiGetSystemRegionType(a2);
    p_Blink = (void *)MiSystemVaTypeToVm(SystemRegionType);
    if ( !(_DWORD)v13 )
      p_Blink = &Process[2].ReadyListHead.Blink;
    if ( !p_Blink )
      p_Blink = MiGetAnyMultiplexedVm(6);
    v20 = p_Blink;
    if ( KeGetCurrentIrql() == 2 )
    {
      v19 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)p_Blink);
    }
    else
    {
      v19 = MiLockWorkingSetShared((__int64)p_Blink, v11, v13);
    }
    MiWalkPageTables((__int64)v18);
    LOBYTE(v14) = v19;
    MiUnlockWorkingSetShared((__int64)p_Blink, v14);
  }
  return v17;
}
