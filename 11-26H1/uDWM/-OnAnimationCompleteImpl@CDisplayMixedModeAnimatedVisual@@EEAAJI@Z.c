/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayMixedModeAnimatedVisual@@EEAAJI@Z @ 0x1800B2660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayMixedModeAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 110) )
  {
    *((_DWORD *)this + 110) = -1;
    return CDisplayMixedModeAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 111) )
  {
    *((_DWORD *)this + 111) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 112) )
      *((_DWORD *)this + 112) = -1;
    return 0LL;
  }
}
