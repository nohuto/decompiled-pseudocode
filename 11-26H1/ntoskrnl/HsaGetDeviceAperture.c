/*
 * XREFs of HsaGetDeviceAperture @ 0x1405300CC
 * Callers:
 *     HsaUpdateRemappingTableEntry @ 0x1404FD950 (HsaUpdateRemappingTableEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x1405AC180 (HsaFreeRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x1405AD5E0 (HsaUpdateRemappingDestination.c)
 * Callees:
 *     ExtEnvCriticalFailure @ 0x140530120 (ExtEnvCriticalFailure.c)
 */

unsigned __int64 __fastcall HsaGetDeviceAperture(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  v1 = HIWORD(a1);
  if ( (unsigned int)v1 >= 0x20 )
    ExtEnvCriticalFailure(a1, 0, 0, 0, 0LL);
  v2 = qword_140F87760[v1];
  result = 0LL;
  if ( v2 )
    return v2 + ((unsigned __int64)((unsigned __int16)a1 >> 9) << 6);
  return result;
}
