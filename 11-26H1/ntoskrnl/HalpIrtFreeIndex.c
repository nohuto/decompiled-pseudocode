/*
 * XREFs of HalpIrtFreeIndex @ 0x140784A78
 * Callers:
 *     HalpInterruptRemap @ 0x14057BD44 (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     HalpIommuFreeRemappingTableEntry @ 0x140587DD0 (HalpIommuFreeRemappingTableEntry.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140784B3C (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtFreeIndex(unsigned int a1, ULONG a2, int a3)
{
  __int64 result; // rax
  ULONG v7; // edi
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( HalpIrtTotalEntries )
  {
    v7 = a1 % HalpIrtEntriesPerRange;
    v8 = a1 / HalpIrtEntriesPerRange;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(&HalpIrtRanges + v8, v7, a2);
    KeReleaseGuardedMutex(&HalpIrtLock);
    if ( a3 == 3 && (HalpIrtAllocationFlags & 2) != 0 )
      HalpIommuFreeRemappingTableEntry(a1);
    result = (unsigned int)HalpIrtAllocationFlags;
    if ( (HalpIrtAllocationFlags & 4) != 0 )
      return HalpIrtReleaseDeviceAperture(a1 / HalpIrtEntriesPerDeviceAperture, a2);
  }
  return result;
}
