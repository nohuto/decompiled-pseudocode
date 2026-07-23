/*
 * XREFs of MiDeterminePoolType @ 0x140353D3C
 * Callers:
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     MiGenerateAccessViolation @ 0x1404E6E58 (MiGenerateAccessViolation.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  int SystemRegionType; // eax
  int v2; // edx
  __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(a1);
  v2 = SystemRegionType;
  if ( SystemRegionType == 4 )
    return 64LL;
  if ( SystemRegionType == 5 )
    return 256LL;
  result = 0LL;
  if ( v2 == 20 )
    return 64LL;
  return result;
}
