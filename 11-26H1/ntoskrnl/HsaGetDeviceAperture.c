/*
 * XREFs of HsaGetDeviceAperture @ 0x14052DBAC
 * Callers:
 *     HsaUpdateRemappingTableEntry @ 0x140504080 (HsaUpdateRemappingTableEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405A8C60 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1405A9970 (HsaFreeRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x1405AADD0 (HsaUpdateRemappingDestination.c)
 * Callees:
 *     ExtEnvCriticalFailure @ 0x14052DC00 (ExtEnvCriticalFailure.c)
 */

unsigned __int64 __fastcall HsaGetDeviceAperture(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  v1 = HIWORD(a1);
  if ( (unsigned int)v1 >= 0x20 )
    ExtEnvCriticalFailure(a1, 0, 0, 0, 0LL);
  v2 = qword_140F873A0[v1];
  result = 0LL;
  if ( v2 )
    return v2 + ((unsigned __int64)((unsigned __int16)a1 >> 9) << 6);
  return result;
}
