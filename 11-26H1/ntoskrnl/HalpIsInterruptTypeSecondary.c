/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x140430260
 * Callers:
 *     HalpCheckInterruptType @ 0x1404301F4 (HalpCheckInterruptType.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140788D40 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1407890A0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140B49A2C (HalpQueryPrimaryInterruptInformation.c)
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
