/*
 * XREFs of IopIsAddressRangeValid @ 0x1404E57CC
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140442108 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404424BC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddTriageDumpDataBlock @ 0x140442DE0 (IopAddTriageDumpDataBlock.c)
 *     IopWriteDriverList @ 0x1404E55E0 (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404E5730 (IoGetLoadedDriverInfo.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x1405D649C (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x1405D658C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405D6604 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1405D66C4 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x1405D6754 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1405D6810 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405D6918 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1405D6A08 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x1405D6B68 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x1405D6C1C (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1405D6DD0 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1405D6E64 (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x1405D7BEC (IopCalculateStackInformation.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
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
