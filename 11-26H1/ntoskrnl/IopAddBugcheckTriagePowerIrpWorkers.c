/*
 * XREFs of IopAddBugcheckTriagePowerIrpWorkers @ 0x1405D6B68
 * Callers:
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x1405D649C (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1405D66C4 (IopAddBugcheckPowerTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 */

__int64 __fastcall IopAddBugcheckTriagePowerIrpWorkers(_QWORD **MaxDataSize)
{
  unsigned int v2; // esi
  int v3; // ebp
  _QWORD *v4; // rbx
  _QWORD *v5; // r14

  v2 = -1073741823;
  if ( MaxDataSize )
  {
    v3 = 0;
    if ( IopIsAddressRangeValid((__int64)MaxDataSize, 16LL) )
    {
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x10);
      v4 = *MaxDataSize;
      v5 = MaxDataSize;
      while ( v4 && v4 != MaxDataSize && v3 < 10 )
      {
        ++v3;
        if ( !IopIsAddressRangeValid((__int64)v4, 24LL) )
          return v2;
        IoAddTriageDumpDataBlock((ULONG)v4, (PVOID)0x18);
        if ( (_QWORD *)v4[1] != v5 )
          return v2;
        v5 = v4;
        v2 = IopAddBugcheckTriageThread(v4[2]);
        v4 = (_QWORD *)*v4;
      }
      return 0;
    }
  }
  return v2;
}
