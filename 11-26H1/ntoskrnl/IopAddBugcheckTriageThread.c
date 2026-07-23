/*
 * XREFs of IopAddBugcheckTriageThread @ 0x1405D6CDC
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404424BC (IopAddBugcheckTriageDataFromParameters.c)
 *     IoAddBugcheckTriageThread @ 0x1405C8A20 (IoAddBugcheckTriageThread.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x1405D649C (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x1405D658C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405D6604 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckTriagePowerIrpWorkers @ 0x1405D6B68 (IopAddBugcheckTriagePowerIrpWorkers.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1405D6E64 (IopAddBugcheckTriageWorkQueue.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405EA4DC (KiCollectTriageDumpDataBlocks.c)
 *     PopBSDiagBugcheckCallback @ 0x140610A90 (PopBSDiagBugcheckCallback.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x1405CC08C (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x1405D6A08 (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r14d
  __int64 v4; // r8
  unsigned int v5; // edx
  ULONG v6; // esi
  unsigned int MaxValidMemorySize; // eax
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // r15

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(MaxDataSize, 1944LL) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x798);
    if ( (*(_DWORD *)(MaxDataSize + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(MaxDataSize + 88);
      v5 = 0x3FFF;
      if ( (unsigned __int64)(*(_QWORD *)(MaxDataSize + 56) - v4) < 0x3FFF )
        v5 = *(_DWORD *)(MaxDataSize + 56) - v4;
      v6 = (v4 + 7) & 0xFFFFFFF8;
      MaxValidMemorySize = IopGetMaxValidMemorySize((v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL, v5);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v6, (PVOID)MaxValidMemorySize);
    }
    v8 = (_QWORD *)(MaxDataSize + 1344);
    v9 = *(_QWORD **)(MaxDataSize + 1344);
    v10 = v8;
    while ( v9 && v9 != v8 && v3 < 10 )
    {
      ++v3;
      if ( !IopIsAddressRangeValid((__int64)(v9 - 4), 208LL) || (_QWORD *)v9[1] != v10 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(v9 - 4), 1);
      v10 = v9;
      v9 = (_QWORD *)*v9;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
