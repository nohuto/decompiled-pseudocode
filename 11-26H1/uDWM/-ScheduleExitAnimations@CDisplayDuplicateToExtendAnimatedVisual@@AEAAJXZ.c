/*
 * XREFs of ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B09B4
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0B70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::ScheduleExitAnimations(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  CDisplayAnimatedVisual *v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL));
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 51),
         v2,
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 70),
         (unsigned int *)this + 110);
  if ( v4 < 0 )
  {
    v5 = 186LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         v3,
         *((struct CAnimatedTransitionVisual **)this + 47),
         v2,
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 70),
         (unsigned int *)this + 108);
  if ( v4 < 0 )
  {
    v5 = 194LL;
    goto LABEL_3;
  }
  v8 = CDisplayAnimatedVisual::ScheduleAnimation(
         v7,
         (CAnimatedTransitionVisual ***)this + 48,
         v2,
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 70),
         (unsigned int *)this + 112);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCA,
    (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
