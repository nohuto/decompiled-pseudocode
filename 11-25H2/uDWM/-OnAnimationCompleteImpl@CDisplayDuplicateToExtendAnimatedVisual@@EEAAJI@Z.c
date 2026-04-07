/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800B0C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::OnAnimationCompleteImpl(
        CDisplayDuplicateToExtendAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 116) )
  {
    *((_DWORD *)this + 116) = -1;
    return CDisplayDuplicateToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 117) )
  {
    *((_DWORD *)this + 117) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 118) )
      *((_DWORD *)this + 118) = -1;
    if ( a2 == *((_DWORD *)this + 119) )
      *((_DWORD *)this + 119) = -1;
    if ( a2 == *((_DWORD *)this + 120) )
      *((_DWORD *)this + 120) = -1;
    if ( a2 == *((_DWORD *)this + 121) )
      *((_DWORD *)this + 121) = -1;
    return 0LL;
  }
}
