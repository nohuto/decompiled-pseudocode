/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x14047BE1C
 * Callers:
 *     IommuMapLogicalRangeEx @ 0x14047B4F0 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x1404A9940 (IommuMapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058D094 (HalpIommuAllocateDmaDomain.c)
 *     IommuMapReservedLogicalRange @ 0x14059F2B0 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x14059F790 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x14047BB64 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x14047BE6C (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(
        ULONG_PTR a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogicalRange(0, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogicalRange(a1, a2, a3, a4, a5);
}
