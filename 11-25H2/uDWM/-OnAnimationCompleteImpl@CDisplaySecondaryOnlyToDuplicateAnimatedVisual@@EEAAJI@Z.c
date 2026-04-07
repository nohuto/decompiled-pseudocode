/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJI@Z @ 0x1800B4190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::OnAnimationCompleteImpl(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 102) )
  {
    *((_DWORD *)this + 102) = -1;
    return CDisplaySecondaryOnlyToDuplicateAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 103) )
  {
    *((_DWORD *)this + 103) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    return 0LL;
  }
}
