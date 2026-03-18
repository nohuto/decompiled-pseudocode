/*
 * XREFs of HalpIommuDomainMarkHiberLogicalRange @ 0x14058D8C4
 * Callers:
 *     HalpDmaMarkHiberAdapter @ 0x14050C790 (HalpDmaMarkHiberAdapter.c)
 * Callees:
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x1405A0970 (HalpIommuDmarPageTableMarkHiberPhase.c)
 */

__int64 __fastcall HalpIommuDomainMarkHiberLogicalRange(void *a1)
{
  __int64 result; // rax

  if ( !HalpHvIommu )
    return HalpIommuDmarPageTableMarkHiberPhase(a1);
  return result;
}
