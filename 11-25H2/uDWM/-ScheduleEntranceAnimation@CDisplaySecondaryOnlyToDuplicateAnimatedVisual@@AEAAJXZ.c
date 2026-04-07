/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B4248
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B41D0 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18006DD50 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::ScheduleEntranceAnimation(__int64 this)
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
         (unsigned int *)(this + 412));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8C,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
