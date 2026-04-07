/*
 * XREFs of ?GetChopStart@CAnimatedTransitionVisual@@UEAAJPEAN@Z @ 0x1800A3AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopStart(CAnimatedTransitionVisual *this, double *a2)
{
  if ( !*((_BYTE *)this + 952) )
    return 2147943568LL;
  *a2 = *((double *)this + 118);
  return 0LL;
}
