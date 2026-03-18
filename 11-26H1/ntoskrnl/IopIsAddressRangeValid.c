/*
 * XREFs of IopIsAddressRangeValid @ 0x1404EC1EC
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140449FD8 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x14044A38C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddTriageDumpDataBlock @ 0x14044ACB0 (IopAddTriageDumpDataBlock.c)
 *     IopWriteDriverList @ 0x1404EC000 (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404EC150 (IoGetLoadedDriverInfo.c)
 *     IoFillTriageDumpBuffer @ 0x1405C6994 (IoFillTriageDumpBuffer.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x1405D3CAC (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x1405D3D9C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405D3E14 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1405D3ED4 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x1405D3F64 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1405D4020 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405D4128 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1405D4218 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x1405D4378 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x1405D442C (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x1405D44EC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1405D45E0 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1405D4674 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x1405D53FC (IopCalculateStackInformation.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 */

char __fastcall IopIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 i; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  for ( i = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12; ; --i )
  {
    if ( !i )
      return 1;
    if ( v2 < 0x10000 || !MmIsAddressValidEx(v2) )
      break;
    v2 += 4096LL;
  }
  return 0;
}
