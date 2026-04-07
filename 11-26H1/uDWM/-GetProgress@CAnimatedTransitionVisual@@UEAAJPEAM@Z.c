/*
 * XREFs of ?GetProgress@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x18007A490
 * Callers:
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180095EB0 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetProgress(CAnimatedTransitionVisual *this, float *a2)
{
  *a2 = *((float *)this + 229);
  return 0LL;
}
