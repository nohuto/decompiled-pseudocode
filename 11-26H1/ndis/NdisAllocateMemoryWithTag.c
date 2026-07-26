/*
 * XREFs of NdisAllocateMemoryWithTag @ 0x140059D30
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x140059140 (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NDIS_STATUS __stdcall NdisAllocateMemoryWithTag(PVOID *VirtualAddress, UINT Length, ULONG Tag)
{
  void *Pool2; // rax
  NDIS_STATUS v5; // ecx

  if ( !Tag )
    *(_QWORD *)&Tag = 1835091022LL;
  Pool2 = (void *)ExAllocatePool2(66LL, Length, *(_QWORD *)&Tag);
  v5 = -1073741823;
  *VirtualAddress = Pool2;
  if ( Pool2 )
    return 0;
  return v5;
}
