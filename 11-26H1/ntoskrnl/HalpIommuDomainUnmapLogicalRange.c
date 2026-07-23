/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x1404749BC
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x140474620 (IommuUnmapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058F814 (HalpIommuAllocateDmaDomain.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405A1930 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapReservedLogicalRange @ 0x1405A22A0 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     IommupHvUnmapDeviceLogicalRange @ 0x140474A70 (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x140474AD8 (HalpIommuFlushDomainTbs.c)
 *     HalpIommuUnmapLogicalRange @ 0x140474B78 (HalpIommuUnmapLogicalRange.c)
 *     IommupHvMapDeviceLogicalRange @ 0x1404754D4 (IommupHvMapDeviceLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, _QWORD *a3, char a4)
{
  int v8; // edi
  unsigned int v9; // eax

  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
  {
    v8 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), a3, a2);
    v9 = HalpIommuFlushDomainTbs(a1, a2, *a3);
    if ( v8 >= 0 )
      return v9;
    return (unsigned int)v8;
  }
  else if ( a4 )
  {
    return IommupHvMapDeviceLogicalRange(a1, a2);
  }
  else
  {
    return IommupHvUnmapDeviceLogicalRange(a1, a2);
  }
}
