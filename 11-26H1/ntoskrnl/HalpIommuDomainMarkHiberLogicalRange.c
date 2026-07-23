/*
 * XREFs of HalpIommuDomainMarkHiberLogicalRange @ 0x140590044
 * Callers:
 *     HalpDmaMarkHiberAdapter @ 0x140506200 (HalpDmaMarkHiberAdapter.c)
 * Callees:
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x1405A3180 (HalpIommuDmarPageTableMarkHiberPhase.c)
 */

__int64 __fastcall HalpIommuDomainMarkHiberLogicalRange(void *a1)
{
  __int64 result; // rax

  if ( !HalpHvIommu )
    return HalpIommuDmarPageTableMarkHiberPhase(a1);
  return result;
}
