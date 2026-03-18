/*
 * XREFs of ?GetInertiaDecayRate@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x180273660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CInteractionTracker2::GetInertiaDecayRate(float *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx

  result = 0.0;
  if ( !a2 )
    return a1[115];
  v3 = a2 - 1;
  if ( !v3 )
    return a1[116];
  if ( v3 == 1 )
    return a1[129];
  return result;
}
