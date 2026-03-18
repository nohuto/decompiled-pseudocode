/*
 * XREFs of IommupValidateMdl @ 0x140511904
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14047ACB0 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x14047B4F0 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x1404A9940 (IommuMapIdentityRangeEx.c)
 *     IommupProcessPhysicalAddress @ 0x1404AF760 (IommupProcessPhysicalAddress.c)
 *     IommuMapIdentityRange @ 0x14059F1C0 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x14059F230 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x14059FA50 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
