/*
 * XREFs of IopAddBugcheckDirectedTransitionTriageData @ 0x1405D649C
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404424BC (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     IopAddBugcheckTriageDevice @ 0x1405D6810 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x1405D6B68 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x1405D6C1C (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1405D6E64 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckDirectedTransitionTriageData(ULONG MaxDataSize, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned __int8 v7; // [rsp+40h] [rbp+18h]

  v4 = -1073741823;
  if ( (Feature_Bugcheck0x9FDirectedTransitionDump__private_featureState & 0x10) == 0 )
  {
    v7 = Feature_Bugcheck0x9FDirectedTransitionDump__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Bugcheck0x9FDirectedTransitionDump__private_descriptor,
      Feature_Bugcheck0x9FDirectedTransitionDump__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v7,
      3,
      (__int64)&Feature_Bugcheck0x9FDirectedTransitionDump__private_descriptor);
  }
  IopAddBugcheckTriageDevice(MaxDataSize);
  if ( IopIsAddressRangeValid(a2, 72LL) && *(_WORD *)a2 == 0x8005 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x48);
    IopAddBugcheckTriagePowerIrps(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriagePowerIrpWorkers(*(_QWORD *)(a2 + 16));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 24));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 32));
    v5 = *(_QWORD *)(a2 + 56);
    if ( v5 )
      IopAddBugcheckTriageThread(v5);
    return 0;
  }
  return v4;
}
