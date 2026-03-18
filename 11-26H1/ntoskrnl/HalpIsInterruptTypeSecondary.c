/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x140423170
 * Callers:
 *     HalpCheckInterruptType @ 0x140423104 (HalpCheckInterruptType.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140786210 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x140786570 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140B47C9C (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIsInterruptTypeSecondary(int a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 && a2 >= SecondaryGsivRangeStart )
    return a2 < SecondaryGsivRangeSize + SecondaryGsivRangeStart;
  return v2;
}
