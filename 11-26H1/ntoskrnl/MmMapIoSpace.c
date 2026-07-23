/*
 * XREFs of MmMapIoSpace @ 0x1404B1B90
 * Callers:
 *     DifMmMapIoSpaceWrapper @ 0x14066B180 (DifMmMapIoSpaceWrapper.c)
 *     SfsInitialize @ 0x1406E141C (SfsInitialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 */

PVOID __stdcall MmMapIoSpace(PHYSICAL_ADDRESS PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  int v3; // eax
  unsigned int v4; // r8d

  v3 = (unsigned __int8)CacheType;
  if ( (unsigned __int8)CacheType >= (unsigned int)MmMaximumCacheType )
    return 0LL;
  v4 = 64;
  if ( v3 != 1 )
  {
    v4 = 576;
    if ( v3 == 2 )
      v4 = 1028;
  }
  return (PVOID)MmMapIoSpaceEx(PhysicalAddress.QuadPart, NumberOfBytes, v4);
}
