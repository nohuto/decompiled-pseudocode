/*
 * XREFs of HalpIommuFlushDomainTB @ 0x1404C3C2C
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x14058D580 (HalpIommuDereferenceHardwareDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFlushDomainTB(__int64 a1, __int64 a2)
{
  if ( HalpHvIommu )
    return 3221225659LL;
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2);
  return 0LL;
}
