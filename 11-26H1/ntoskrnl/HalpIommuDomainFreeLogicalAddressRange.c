/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x14047B014
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14047ACB0 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapLogicalRange @ 0x14047AF50 (IommuUnmapLogicalRange.c)
 *     IommuMapLogicalRangeEx @ 0x14047B4F0 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x1404A9940 (IommuMapIdentityRangeEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x14059F140 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x14059F790 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
