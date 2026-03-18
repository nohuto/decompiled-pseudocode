/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x1405876DC
 * Callers:
 *     HalpIommuInitSystem @ 0x140BEB6E0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3596LL);
}
