/*
 * XREFs of ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B26B0
 * Callers:
 *     ??_GCDisplayMixedModeAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B27E0 (--_GCDisplayMixedModeAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A35AC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800AED38 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 *     ??1?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B009C (--1-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
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

  *(_QWORD *)this = &CDisplayMixedModeAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      33LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v6);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::~com_ptr_t<CTimeline<float>,wil::err_returncode_policy>((CTimelineBase **)this + 58);
  v3 = (void *)*((_QWORD *)this + 55);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 57) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
  }
  v4 = (__int64 *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v4,
      *((__int64 **)this + 53));
    std::_Deallocate<16,0>(
      *((void **)this + 52),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 54) - *((_QWORD *)this + 52)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 49);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v5,
      *((__int64 **)this + 50));
    std::_Deallocate<16,0>(
      *((void **)this + 49),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 51) - *((_QWORD *)this + 49)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
  }
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}
