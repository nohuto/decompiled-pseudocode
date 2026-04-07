/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0D68 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  unsigned int v2; // ebx
  CTimelineBase *v3; // rcx
  int v4; // eax

  v2 = 0;
  v3 = (CTimelineBase *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    if ( *((_BYTE *)v3 + 72) )
    {
      *((_QWORD *)this + 57) = 0LL;
      CTimelineBase::Release(v3);
      v4 = CDisplayDuplicateToExtendAnimatedVisual::ScheduleEntranceAnimations(this);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x130u, 0LL);
        CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      }
    }
  }
  return v2;
}
