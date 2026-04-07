/*
 * XREFs of ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800B4300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnAnimationCompleteImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        int a2)
{
  if ( a2 == *((_DWORD *)this + 98) )
  {
    *((_DWORD *)this + 98) = -1;
    return CDisplaySecondaryOnlyToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  }
  if ( a2 == *((_DWORD *)this + 99) )
  {
    *((_DWORD *)this + 99) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  if ( a2 == *((_DWORD *)this + 100) )
  {
    *((_DWORD *)this + 100) = -1;
    return CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  }
  return 0LL;
}
