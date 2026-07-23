/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x140474984
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x140474620 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapLogicalRange @ 0x1404748C0 (IommuUnmapLogicalRange.c)
 *     IommuMapLogicalRangeEx @ 0x140474E60 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x1404A2FD0 (IommuMapIdentityRangeEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405A1930 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x1405A1F80 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDomainFreeLogicalAddressRange(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    return guard_dispatch_icall_no_overrides(v2, a2);
  else
    return (a2 & 0xFFF) != 0 ? 0xC000000D : 0;
}
