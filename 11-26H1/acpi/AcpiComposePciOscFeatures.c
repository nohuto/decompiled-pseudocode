/*
 * XREFs of AcpiComposePciOscFeatures @ 0x1400656F0
 * Callers:
 *     AcpiEvaluateBiosMethodsOnCxlBus @ 0x140065744 (AcpiEvaluateBiosMethodsOnCxlBus.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x140065844 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiComposePciOscFeatures(int a1)
{
  int *v1; // r10
  __int64 result; // rax
  __int64 v3; // r11
  int v4; // r9d
  int v5; // r8d
  unsigned int v6; // edx

  v1 = (int *)&PciRootBusValidFeatureSets;
  LODWORD(result) = 0;
  v3 = 3LL;
  do
  {
    v4 = *v1;
    v5 = a1 & *v1++;
    v6 = result | v4;
    if ( v5 != v4 )
      v6 = result;
    result = v6;
    --v3;
  }
  while ( v3 );
  if ( !AcpiUseFlexibleOscHandoffRegValue && (a1 & 0x15) != 0x15 )
    return 0LL;
  return result;
}
