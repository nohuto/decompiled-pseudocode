/*
 * XREFs of ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x18013E0C4
 * Callers:
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18013DF3C (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801D5FB8 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBase@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x180278D64 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBas.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289DE0 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

const struct KeyframeValue *__fastcall CKeyframeAnimation::GetLastKeyframeValue(CKeyframeAnimation *this)
{
  __int64 v1; // r8
  const struct KeyframeValue *result; // rax
  int v3; // ecx

  v1 = *((_QWORD *)this + 38);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 104);
    if ( v3 )
      return *(const struct KeyframeValue **)(*(_QWORD *)(v1 + 96) + 24LL * (unsigned int)(v3 - 1) + 8);
  }
  return result;
}
