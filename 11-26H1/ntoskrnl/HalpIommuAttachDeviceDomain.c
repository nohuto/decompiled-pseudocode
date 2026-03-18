/*
 * XREFs of HalpIommuAttachDeviceDomain @ 0x14058BB60
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x14058DCF4 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x14058DE4C (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuAttachDeviceDomain(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( HalpHvIommu )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = a3;
  return result;
}
