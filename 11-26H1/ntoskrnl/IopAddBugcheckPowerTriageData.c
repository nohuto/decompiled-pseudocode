/*
 * XREFs of IopAddBugcheckPowerTriageData @ 0x1405D3ED4
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14044A38C (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404EC1EC (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDevice @ 0x1405D4020 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x1405D4218 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x1405D4378 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x1405D442C (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1405D4674 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPowerTriageData(ULONG a1, __int64 a2, ULONG a3)
{
  unsigned int v5; // edi

  v5 = 0;
  IopAddBugcheckTriageDevice(a1);
  IopAddBugcheckTriageIrp(a3);
  if ( IopIsAddressRangeValid(a2, 40LL) && *(_WORD *)a2 == 0x8000 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x28);
    IopAddBugcheckTriagePowerIrps(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriagePowerIrpWorkers(*(_QWORD *)(a2 + 16));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 24));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 32));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
