/*
 * XREFs of AslComputeCrc32 @ 0x14088805C
 * Callers:
 *     AslpFileGetCrcChecksum @ 0x14088CAA8 (AslpFileGetCrcChecksum.c)
 *     AslpFileLargeGetCrcChecksum @ 0x14088F920 (AslpFileLargeGetCrcChecksum.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     AslpComputeCrc32Impl @ 0x14088878C (AslpComputeCrc32Impl.c)
 *     AslpComputeCrc32Uma @ 0x1408887C8 (AslpComputeCrc32Uma.c)
 */

__int64 __fastcall AslComputeCrc32(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  if ( MmIsUserAddress(a2) )
    return AslpComputeCrc32Uma(a1, a2, a3);
  else
    return AslpComputeCrc32Impl(a1, a2, a3);
}
