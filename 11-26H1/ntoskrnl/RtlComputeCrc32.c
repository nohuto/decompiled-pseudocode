/*
 * XREFs of RtlComputeCrc32 @ 0x14047DD50
 * Callers:
 *     PoClearTransitionMarker @ 0x1407CB8BC (PoClearTransitionMarker.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140B33C48 (PopUpdateBsdPowerTransitionReferenceTime.c)
 * Callees:
 *     crc32_z @ 0x14047DD70 (crc32_z.c)
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG32 result; // eax

  result = 0;
  if ( Buffer )
    return crc32_z(PartialCrc, Buffer, Length);
  return result;
}
