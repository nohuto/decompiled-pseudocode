/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayMixedModeAnimatedVisual@@EEAAJI@Z @ 0x1800B2C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayMixedModeAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 118) )
  {
    *((_DWORD *)this + 118) = -1;
    return CDisplayMixedModeAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 119) )
  {
    *((_DWORD *)this + 119) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 120) )
      *((_DWORD *)this + 120) = -1;
    return 0LL;
  }
}
