/*
 * XREFs of HalpIommuDomainGetLogicalAddressRange @ 0x14049F2BC
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x1404A2FD0 (IommuMapIdentityRangeEx.c)
 *     IommuReserveLogicalAddressRange @ 0x1405A1F80 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDomainGetLogicalAddressRange(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rcx

  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
    return guard_dispatch_icall_no_overrides(v6, a2);
  if ( !a2 )
    return 3221225659LL;
  if ( (*a2 & 0xFFFLL) != 0 )
    return 3221225712LL;
  *a6 = *a2;
  return 0LL;
}
