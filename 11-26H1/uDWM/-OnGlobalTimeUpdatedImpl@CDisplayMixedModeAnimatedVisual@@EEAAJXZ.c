/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B26B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x18007B13C (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::OnGlobalTimeUpdatedImpl(CDisplayMixedModeAnimatedVisual *this)
{
  unsigned int v2; // ebx
  CTimelineBase *v3; // rcx
  int v4; // eax

  v2 = 0;
  v3 = (CTimelineBase *)*((_QWORD *)this + 54);
  if ( v3 )
  {
    if ( *((_BYTE *)v3 + 72) )
    {
      *((_QWORD *)this + 54) = 0LL;
      CTimelineBase::Release(v3);
      v4 = CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation(this);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x7Fu, 0LL);
        CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      }
    }
  }
  return v2;
}
