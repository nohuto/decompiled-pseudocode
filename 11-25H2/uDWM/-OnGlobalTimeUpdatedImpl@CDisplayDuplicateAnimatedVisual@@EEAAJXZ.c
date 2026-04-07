/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x180082810
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18006DD50 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800AF8A8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::OnGlobalTimeUpdatedImpl(CDisplayDuplicateAnimatedVisual *this)
{
  CTimelineBase *v2; // rcx
  int v3; // esi
  unsigned int v5; // eax

  v2 = (CTimelineBase *)*((_QWORD *)this + 53);
  v3 = 0;
  if ( v2 && *((_BYTE *)v2 + 72) )
  {
    *((_QWORD *)this + 53) = 0LL;
    CTimelineBase::Release(v2);
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayDuplicateAnimatedVisual *)((char *)this + 240),
           *((struct CAnimatedTransitionVisual **)this + 49),
           (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
           *((_DWORD *)this + 81),
           *((_DWORD *)this + 82),
           (unsigned int *)this + 109);
    if ( v3 < 0 )
    {
      v5 = 175;
      goto LABEL_8;
    }
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           *((unsigned int *)this + 82),
           (char *)this + 400,
           ((unsigned __int64)this + 240) & -(__int64)(this != 0LL),
           *((unsigned int *)this + 81),
           *((_DWORD *)this + 82),
           (char *)this + 444);
    if ( v3 < 0 )
    {
      v5 = 183;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v5, 0LL);
      CDisplayAnimatedVisual::Stop(this, 0LL);
    }
  }
  return (unsigned int)v3;
}
