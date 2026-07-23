/*
 * XREFs of IopAddBugcheckTriageCompletionQueue @ 0x1405D6754
 * Callers:
 *     IopAddBugcheckPnpTriageData @ 0x1405D658C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405D6604 (IopAddBugcheckPnpWatchdogTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1405D6918 (IopAddBugcheckTriageDeviceNode.c)
 */

__int64 __fastcall IopAddBugcheckTriageCompletionQueue(_QWORD **MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r14d
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid((__int64)MaxDataSize, 16LL) )
  {
    IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x10);
    v4 = *MaxDataSize;
    if ( *MaxDataSize && v4 != MaxDataSize )
    {
      v5 = MaxDataSize;
      while ( v4 && v4 != MaxDataSize && v3 < 10 )
      {
        ++v3;
        if ( !IopIsAddressRangeValid((__int64)v4, 24LL) )
          return (unsigned int)-1073741823;
        IoAddTriageDumpDataBlock((ULONG)v4, (PVOID)0x18);
        if ( (_QWORD *)v4[1] != v5 )
          return (unsigned int)-1073741823;
        v5 = v4;
        v1 = IopAddBugcheckTriageDeviceNode(v4[2]);
        v4 = (_QWORD *)*v4;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
