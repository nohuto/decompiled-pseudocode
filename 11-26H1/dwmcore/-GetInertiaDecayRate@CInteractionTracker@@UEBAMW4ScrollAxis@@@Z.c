/*
 * XREFs of ?GetInertiaDecayRate@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x180270BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CInteractionTracker::GetInertiaDecayRate(float *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx

  result = 0.0;
  if ( !a2 )
    return a1[55];
  v3 = a2 - 1;
  if ( !v3 )
    return a1[56];
  if ( v3 == 1 )
    return a1[69];
  return result;
}
