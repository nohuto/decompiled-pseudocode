/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800B388C
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x180076C80 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::ScheduleEntranceAnimations(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 45),
         (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 69),
         (unsigned int *)this + 94);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
