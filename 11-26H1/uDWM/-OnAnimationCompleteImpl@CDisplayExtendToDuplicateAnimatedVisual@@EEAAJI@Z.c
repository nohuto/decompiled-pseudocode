/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJI@Z @ 0x1800B1980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayExtendToDuplicateAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 100) )
  {
    *((_DWORD *)this + 100) = -1;
    return CDisplayExtendToDuplicateAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 101) )
  {
    *((_DWORD *)this + 101) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 102) )
      *((_DWORD *)this + 102) = -1;
    if ( a2 == *((_DWORD *)this + 103) )
      *((_DWORD *)this + 103) = -1;
    return 0LL;
  }
}
