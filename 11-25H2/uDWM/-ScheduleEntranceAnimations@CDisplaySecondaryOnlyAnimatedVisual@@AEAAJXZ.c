/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800B3D98
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x180086D50 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18006DD50 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::ScheduleEntranceAnimations(__int64 this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)-this,
         *(struct CAnimatedTransitionVisual **)(this + 392),
         (struct IAnimationListener *)((this + 240) & -(__int64)(this != 0)),
         *(_DWORD *)(this + 304),
         *(_DWORD *)(this + 308),
         (unsigned int *)(this + 408));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
