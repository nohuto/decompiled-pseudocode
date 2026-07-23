/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x14047578C
 * Callers:
 *     IommuMapLogicalRangeEx @ 0x140474E60 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x1404A2FD0 (IommuMapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058F814 (HalpIommuAllocateDmaDomain.c)
 *     IommuMapReservedLogicalRange @ 0x1405A1AA0 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x1405A1F80 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x1404754D4 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x1404757DC (HalpIommuMapLogicalRange.c)
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
