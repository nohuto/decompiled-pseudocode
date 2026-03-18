/*
 * XREFs of RtlComputeCrc32 @ 0x1404843E0
 * Callers:
 *     PoClearTransitionMarker @ 0x1407C881C (PoClearTransitionMarker.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140B31A48 (PopUpdateBsdPowerTransitionReferenceTime.c)
 * Callees:
 *     crc32_z @ 0x140484400 (crc32_z.c)
 */

__int64 __fastcall RtlComputeCrc32(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return crc32_z(a1, a2, a3);
  return result;
}
