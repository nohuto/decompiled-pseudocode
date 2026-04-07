/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B1A64
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800868E0 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18006DD50 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800AF8A8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::ScheduleEntranceAnimations(CDisplayExtendAnimatedVisual *this)
{
  struct IAnimationListener *v1; // rbp
  struct IAnimationListener *v3; // rsi
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CDisplayExtendAnimatedVisual *)((char *)this + 240);
  v3 = (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL));
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 49),
         v3,
         *((_DWORD *)this + 81),
         *((_DWORD *)this + 82),
         (unsigned int *)this + 111);
  if ( v4 < 0 )
  {
    v5 = 275LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CAnimatedTransitionVisual *)*((unsigned int *)this + 82),
         (CAnimatedTransitionVisual ***)this + 50,
         v3,
         *((_DWORD *)this + 81),
         *((_DWORD *)this + 82),
         (unsigned int *)this + 114);
  if ( v4 < 0 )
  {
    v5 = 283LL;
    goto LABEL_3;
  }
  v7 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 80),
         *((struct CAnimatedTransitionVisual **)this + 53),
         v1,
         *((_DWORD *)this + 79),
         *((_DWORD *)this + 80),
         (unsigned int *)this + 112);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
