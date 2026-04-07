/*
 * XREFs of ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B1BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AEECC (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::StartImpl(CDisplayExtendToDuplicateAnimatedVisual *this)
{
  const struct CDWMDisplay **v1; // rax
  struct CAnimatedTransitionVisual **v2; // rsi
  __int64 v4; // rcx
  const struct CDWMDisplay *v5; // rdi
  int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (const struct CDWMDisplay **)*((_QWORD *)this + 31);
  v2 = (struct CAnimatedTransitionVisual **)((char *)this + 360);
  v4 = *((_QWORD *)this + 45);
  v5 = *v1;
  *v2 = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  v6 = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended((CDWMDisplaySet **)this, v2, v5, (__int64)this + 368);
  if ( v6 < 0 )
  {
    v7 = 49LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayExtendToDuplicateAnimatedVisual *)((char *)this + 208),
         *v2,
         (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
         *((_DWORD *)this + 68),
         *((_DWORD *)this + 70),
         (unsigned int *)this + 100);
  if ( v6 < 0 )
  {
    v7 = 57LL;
    goto LABEL_5;
  }
  v10 = CDisplayAnimatedVisual::ScheduleAnimation(
          v9,
          (CAnimatedTransitionVisual ***)this + 46,
          (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
          *((_DWORD *)this + 68),
          *((_DWORD *)this + 70),
          (unsigned int *)this + 102);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41,
    (int)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
