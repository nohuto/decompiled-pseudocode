/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x140472358
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x140471990 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalEfiSetEnvironmentVariable @ 0x140471C74 (HalEfiSetEnvironmentVariable.c)
 *     HalGetEnvironmentVariableEx @ 0x140471D30 (HalGetEnvironmentVariableEx.c)
 *     HalEfiGetTime @ 0x140533554 (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x140586BA8 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x140586DE8 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14059A7C0 (HalpQueryCapsuleCapabilities.c)
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
