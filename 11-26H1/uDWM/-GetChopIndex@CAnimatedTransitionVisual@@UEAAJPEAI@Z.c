/*
 * XREFs of ?GetChopIndex@CAnimatedTransitionVisual@@UEAAJPEAI@Z @ 0x18007C0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetChopIndex(CAnimatedTransitionVisual *this, unsigned int *a2)
{
  if ( !*((_BYTE *)this + 936) && !*((_BYTE *)this + 952) )
    return 2147943568LL;
  *a2 = *((_DWORD *)this + 231);
  return 0LL;
}
