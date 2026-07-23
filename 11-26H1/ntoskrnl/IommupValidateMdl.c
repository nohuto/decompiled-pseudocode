/*
 * XREFs of IommupValidateMdl @ 0x14050B374
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x140474620 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x140474E60 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x1404A2FD0 (IommuMapIdentityRangeEx.c)
 *     IommupProcessPhysicalAddress @ 0x1404A8DF0 (IommupProcessPhysicalAddress.c)
 *     IommuMapIdentityRange @ 0x1405A19B0 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1405A1A20 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x1405A2240 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
