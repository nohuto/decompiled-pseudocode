/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800746B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::OnGlobalTimeUpdatedImpl(__int64 this)
{
  CTimelineBase *v2; // rcx
  int v3; // esi
  __int64 v5; // rcx
  unsigned int v6; // eax

  v2 = *(CTimelineBase **)(this + 392);
  v3 = 0;
  if ( v2 && *((_BYTE *)v2 + 72) )
  {
    *(_QWORD *)(this + 392) = 0LL;
    CTimelineBase::Release(v2);
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayAnimatedVisual *)-this,
           *(struct CAnimatedTransitionVisual **)(this + 360),
           (struct IAnimationListener *)((this + 208) & -(__int64)(this != 0)),
           *(_DWORD *)(this + 292),
           *(_DWORD *)(this + 296),
           (unsigned int *)(this + 404));
    if ( v3 < 0 )
    {
      v6 = 175;
      goto LABEL_8;
    }
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           v5,
           this + 368,
           (this + 208) & -(__int64)(this != 0),
           *(unsigned int *)(this + 292),
           *(_DWORD *)(this + 296),
           this + 412);
    if ( v3 < 0 )
    {
      v6 = 183;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v6, 0LL);
      CDisplayAnimatedVisual::Stop(this, 0LL);
    }
  }
  return (unsigned int)v3;
}
