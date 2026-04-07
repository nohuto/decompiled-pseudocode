/*
 * XREFs of ?GetChopStart@CAnimatedTransitionVisual@@UEAAJPEAN@Z @ 0x1800962B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopStart(CAnimatedTransitionVisual *this, double *a2)
{
  if ( !*((_BYTE *)this + 936) )
    return 2147943568LL;
  *a2 = *((double *)this + 116);
  return 0LL;
}
