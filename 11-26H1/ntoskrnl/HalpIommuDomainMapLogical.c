/*
 * XREFs of HalpIommuDomainMapLogical @ 0x14047B6F8
 * Callers:
 *     IommuMapLogicalRange @ 0x14059F230 (IommuMapLogicalRange.c)
 *     IommuMapReservedLogicalRange @ 0x14059F2B0 (IommuMapReservedLogicalRange.c)
 * Callees:
 *     IommupHvMapDeviceLogical @ 0x14047B750 (IommupHvMapDeviceLogical.c)
 *     HalpIommuMapLogical @ 0x14047B810 (HalpIommuMapLogical.c)
 */

__int64 __fastcall HalpIommuDomainMapLogical(ULONG_PTR a1, int a2, int a3, __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogical(a1, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogical(a1, a5);
}
