/*
 * XREFs of MiAddRangeToCrashDump @ 0x1406FAE2C
 * Callers:
 *     IopLiveDumpAddIptTraceBuffers @ 0x1405CECD0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1405CEF80 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1405D2B04 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405D2CE8 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1405D2E50 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D2F88 (IopLiveDumpMarkRequiredDumpData.c)
 *     IoAddProcessThreadsToDump @ 0x1405D70CC (IoAddProcessThreadsToDump.c)
 *     IoAddProcessesToDump @ 0x1405D7170 (IoAddProcessesToDump.c)
 *     IoAddThreadStackToDump @ 0x1405D7230 (IoAddThreadStackToDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x1405D7B10 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x1405D7B48 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x1405D7F24 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x1405D83A0 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x1405D849C (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x1405D8690 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     ExAddPrivateDataToCrashDump @ 0x1406CF990 (ExAddPrivateDataToCrashDump.c)
 *     MiAddPartitionDataToCrashDump @ 0x1406FA9A4 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x1406FABBC (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x1406FAF64 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x1406FB3EC (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x1406FB510 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x1406FB5A4 (MmGetDumpRange.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x1406EEF80 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
