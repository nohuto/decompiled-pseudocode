/*
 * XREFs of ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0FDC
 * Callers:
 *     ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B15A0 (-StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AEECC (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::CaptureAndScheduleExitAnimations(CDisplayExtendAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // esi
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 360);
  v3 = *((_QWORD *)this + 45);
  *v1 = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended((CDWMDisplaySet **)this, v1, 0LL, (__int64)this + 368);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayExtendAnimatedVisual *)((char *)this + 208),
           *v1,
           (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
           *((_DWORD *)this + 73),
           *((_DWORD *)this + 75),
           (unsigned int *)this + 102);
    v9 = v7;
    if ( v7 >= 0 )
    {
      v10 = CDisplayAnimatedVisual::ScheduleAnimation(
              v8,
              (CAnimatedTransitionVisual ***)this + 46,
              (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
              *((_DWORD *)this + 73),
              *((_DWORD *)this + 75),
              (unsigned int *)this + 105);
      v11 = v10;
      if ( v10 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x99,
          (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
        (const char *)(unsigned int)v7);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
