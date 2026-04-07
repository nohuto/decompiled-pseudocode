/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplayExtendAnimatedVisual@@EEAAJI@Z @ 0x1800B1370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::OnAnimationCompleteImpl(CDisplayExtendAnimatedVisual *this, int a2)
{
  if ( a2 == *((_DWORD *)this + 102) )
  {
    *((_DWORD *)this + 102) = -1;
    return CDisplayExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  else if ( a2 == *((_DWORD *)this + 103) )
  {
    *((_DWORD *)this + 103) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  else
  {
    if ( a2 == *((_DWORD *)this + 104) )
      *((_DWORD *)this + 104) = -1;
    if ( a2 == *((_DWORD *)this + 105) )
      *((_DWORD *)this + 105) = -1;
    if ( a2 == *((_DWORD *)this + 106) )
      *((_DWORD *)this + 106) = -1;
    return 0LL;
  }
}
