/*
 * XREFs of HalpIommuDomainMapLogical @ 0x140475068
 * Callers:
 *     IommuMapLogicalRange @ 0x1405A1A20 (IommuMapLogicalRange.c)
 *     IommuMapReservedLogicalRange @ 0x1405A1AA0 (IommuMapReservedLogicalRange.c)
 * Callees:
 *     IommupHvMapDeviceLogical @ 0x1404750C0 (IommupHvMapDeviceLogical.c)
 *     HalpIommuMapLogical @ 0x140475180 (HalpIommuMapLogical.c)
 */

__int64 __fastcall HalpIommuDomainMapLogical(ULONG_PTR a1, int a2, int a3, __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogical(a1, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogical(a1, a5);
}
