/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B20F8
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B2080 (-OnGlobalTimeUpdatedImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18006DD50 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800AF8A8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::ScheduleEntranceAnimation(
        CDisplayExtendToDuplicateAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL));
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 49),
         v2,
         *((_DWORD *)this + 76),
         *((_DWORD *)this + 77),
         (unsigned int *)this + 109);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CAnimatedTransitionVisual *)*((unsigned int *)this + 77),
           (CAnimatedTransitionVisual ***)this + 50,
           v2,
           *((_DWORD *)this + 76),
           *((_DWORD *)this + 77),
           (unsigned int *)this + 111);
    v7 = v6;
    if ( v6 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
