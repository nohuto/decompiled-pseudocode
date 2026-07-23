/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x14046BAD8
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x14046B110 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalEfiSetEnvironmentVariable @ 0x14046B3F4 (HalEfiSetEnvironmentVariable.c)
 *     HalGetEnvironmentVariableEx @ 0x14046B4B0 (HalGetEnvironmentVariableEx.c)
 *     HalEfiGetTime @ 0x1405359D4 (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x1405890C8 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x140589308 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059CF40 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpConvertEfiToNtStatus(__int64 a1)
{
  unsigned int i; // eax

  for ( i = 0; i < 0x20; ++i )
  {
    if ( HalEfiToNtStatusMappings[2 * i] == a1 )
      return LODWORD(HalEfiToNtStatusMappings[2 * i + 1]);
  }
  return 3221225473LL;
}
