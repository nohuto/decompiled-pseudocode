/*
 * XREFs of ?GetChopStop@CAnimatedTransitionVisual@@UEAAJPEAN@Z @ 0x1800962E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopStop(CAnimatedTransitionVisual *this, double *a2)
{
  if ( !*((_BYTE *)this + 952) )
    return 2147943568LL;
  *a2 = *((double *)this + 118);
  return 0LL;
}
