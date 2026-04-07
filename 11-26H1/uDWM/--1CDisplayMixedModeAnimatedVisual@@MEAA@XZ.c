/*
 * XREFs of ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B206C
 * Callers:
 *     ??_GCDisplayMixedModeAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B21E0 (--_GCDisplayMixedModeAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800AE56C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 *     ??1?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AF92C (--1-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDisplayMixedModeAnimatedVisual::~CDisplayMixedModeAnimatedVisual(
        CDisplayMixedModeAnimatedVisual *this)
{
  int v2; // eax
  void *v3; // rcx
  __int64 *v4; // rcx
  __int64 *v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplayMixedModeAnimatedVisual::`vftable'{for `CSolidRectangleVisual'};
  *((_QWORD *)this + 26) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      33LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v6);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::~com_ptr_t<CTimeline<float>,wil::err_returncode_policy>((CTimelineBase **)this + 54);
  v3 = (void *)*((_QWORD *)this + 51);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 53) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
  }
  v4 = (__int64 *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v4,
      *((__int64 **)this + 49));
    std::_Deallocate<16>(
      *((void **)this + 48),
      (*((_QWORD *)this + 50) - *((_QWORD *)this + 48)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 45);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v5,
      *((__int64 **)this + 46));
    std::_Deallocate<16>(
      *((void **)this + 45),
      (*((_QWORD *)this + 47) - *((_QWORD *)this + 45)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
  }
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}
