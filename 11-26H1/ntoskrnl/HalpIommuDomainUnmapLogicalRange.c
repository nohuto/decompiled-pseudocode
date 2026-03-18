/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x14047B04C
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14047ACB0 (IommuUnmapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058D094 (HalpIommuAllocateDmaDomain.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x14059F140 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapReservedLogicalRange @ 0x14059FAB0 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     IommupHvUnmapDeviceLogicalRange @ 0x14047B100 (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x14047B168 (HalpIommuFlushDomainTbs.c)
 *     HalpIommuUnmapLogicalRange @ 0x14047B208 (HalpIommuUnmapLogicalRange.c)
 *     IommupHvMapDeviceLogicalRange @ 0x14047BB64 (IommupHvMapDeviceLogicalRange.c)
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
