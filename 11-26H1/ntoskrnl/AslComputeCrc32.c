/*
 * XREFs of AslComputeCrc32 @ 0x14088E458
 * Callers:
 *     AslpFileGetCrcChecksum @ 0x140892EA4 (AslpFileGetCrcChecksum.c)
 *     AslpFileLargeGetCrcChecksum @ 0x140895D1C (AslpFileLargeGetCrcChecksum.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     AslpComputeCrc32Impl @ 0x14088EB88 (AslpComputeCrc32Impl.c)
 *     AslpComputeCrc32Uma @ 0x14088EBC4 (AslpComputeCrc32Uma.c)
 */

__int64 __fastcall AslComputeCrc32(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  if ( MmIsUserAddress(a2) )
    return AslpComputeCrc32Uma(a1, a2, a3);
  else
    return AslpComputeCrc32Impl(a1, a2, a3);
}
