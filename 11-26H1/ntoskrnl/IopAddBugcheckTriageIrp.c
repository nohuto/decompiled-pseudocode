/*
 * XREFs of IopAddBugcheckTriageIrp @ 0x1405D6A08
 * Callers:
 *     IopAddBugcheckPowerTriageData @ 0x1405D66C4 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405D6918 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriagePowerIrps @ 0x1405D6C1C (IopAddBugcheckTriagePowerIrps.c)
 *     IopAddBugcheckTriageThread @ 0x1405D6CDC (IopAddBugcheckTriageThread.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405D6918 (IopAddBugcheckTriageDeviceNode.c)
 */

__int64 __fastcall IopAddBugcheckTriageIrp(__int64 MaxDataSize, char a2)
{
  int v4; // r15d
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // r14d
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  int v10; // ebp
  int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // r14

  v4 = 0;
  v5 = 0;
  if ( !IopIsAddressRangeValid(MaxDataSize, 208LL) )
    return (unsigned int)-1073741823;
  v6 = *(unsigned __int16 *)(MaxDataSize + 2);
  if ( (unsigned __int16)v6 > 0x800u
    || (v7 = *(char *)(MaxDataSize + 66), *(char *)(MaxDataSize + 66) > 64)
    || (v8 = (unsigned __int64)(v6 + 7) >> 3,
        v9 = *(unsigned __int16 *)(MaxDataSize + 2),
        !IopIsAddressRangeValid(MaxDataSize, 8 * v8)) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0xD0);
    return (unsigned int)-1073741823;
  }
  IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)(unsigned int)(8 * v8));
  if ( a2 == 1 )
  {
    v10 = 0;
    v11 = v7;
    while ( v10 < v11 )
    {
      if ( MaxDataSize + 280 + 72LL * (char)v10 > (unsigned __int64)(MaxDataSize + v9) )
        return (unsigned int)-1073741823;
      v12 = *(_QWORD *)(MaxDataSize + 72LL * (char)v10 + 248);
      if ( v12 )
      {
        while ( 1 )
        {
          ++v4;
          if ( !IopIsAddressRangeValid(v12, 336LL) )
            break;
          v13 = *(_QWORD *)(v12 + 312);
          if ( !IopIsAddressRangeValid(v13, 112LL) )
            break;
          v12 = *(_QWORD *)(v13 + 48);
          if ( !v12 )
          {
            v5 = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(v13 + 40));
            goto LABEL_17;
          }
          if ( v4 >= 10 )
            goto LABEL_17;
        }
        v5 = -1073741823;
      }
LABEL_17:
      ++v10;
    }
  }
  return v5;
}
