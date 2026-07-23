/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x1405D658C
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404424BC (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x1405D6754 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405D6918 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1405D6E64 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpTriageData(ULONG a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = 0;
  IopAddBugcheckTriageThread(a1);
  if ( IopIsAddressRangeValid(a2, 40LL) && *(_WORD *)a2 == 0x8001 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x28);
    IopAddBugcheckTriageCompletionQueue(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 16));
    v4 = *(_QWORD *)(a2 + 32);
    if ( v4 )
      IopAddBugcheckTriageDeviceNode(v4);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
