/*
 * XREFs of NdisFreeMemory @ 0x140050950
 * Callers:
 *     ?ndisVerifierFreeMemory@@YAXPEAXII@Z @ 0x1400C9350 (-ndisVerifierFreeMemory@@YAXPEAXII@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemory(PVOID VirtualAddress, UINT Length, UINT MemoryFlags)
{
  if ( MemoryFlags )
  {
    if ( (MemoryFlags & 2) != 0 )
    {
      MmFreeNonCachedMemory(VirtualAddress, Length);
    }
    else if ( (MemoryFlags & 1) != 0 )
    {
      MmFreeContiguousMemory(VirtualAddress);
    }
  }
  else
  {
    ExFreePoolWithTag(VirtualAddress, 0);
  }
}
