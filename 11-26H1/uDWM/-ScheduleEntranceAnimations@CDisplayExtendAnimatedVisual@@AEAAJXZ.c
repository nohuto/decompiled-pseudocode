/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B13E0
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x180074BF0 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::ScheduleEntranceAnimations(CDisplayExtendAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  unsigned __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  CDisplayAnimatedVisual *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL));
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 45),
         v2,
         *((_DWORD *)this + 73),
         *((_DWORD *)this + 74),
         (unsigned int *)this + 103);
  if ( v4 < 0 )
  {
    v5 = 275LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         v3,
         (CAnimatedTransitionVisual ***)this + 46,
         v2,
         *((_DWORD *)this + 73),
         *((_DWORD *)this + 74),
         (unsigned int *)this + 106);
  if ( v4 < 0 )
  {
    v5 = 283LL;
    goto LABEL_3;
  }
  v8 = CDisplayAnimatedVisual::ScheduleAnimation(
         v7,
         *((struct CAnimatedTransitionVisual **)this + 49),
         v2,
         *((_DWORD *)this + 71),
         *((_DWORD *)this + 72),
         (unsigned int *)this + 104);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
