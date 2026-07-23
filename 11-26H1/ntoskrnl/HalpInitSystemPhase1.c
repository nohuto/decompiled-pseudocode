/*
 * XREFs of HalpInitSystemPhase1 @ 0x140BEFA78
 * Callers:
 *     HalInitSystem @ 0x140BEF970 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140BEF9CC (HalpInitSystemHelper.c)
 */

bool HalpInitSystemPhase1()
{
  unsigned int v0; // ecx
  int v1; // edx

  if ( KeGetPcr()->Prcb.Number )
  {
    v0 = 19;
    v1 = 20;
  }
  else
  {
    v0 = 17;
    v1 = 18;
  }
  return (int)HalpInitSystemHelper(v0, v1) >= 0;
}
