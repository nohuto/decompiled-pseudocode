/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x180074BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B1118 (-CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B13E0 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(CTimelineBase **this)
{
  int v2; // edi
  CTimelineBase *v3; // rcx
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 428) )
  {
    v5 = CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay((CDisplayExtendAnimatedVisual *)this);
    v2 = v5;
    if ( v5 < 0 )
    {
      v6 = v5;
      v7 = 219;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7, 0LL);
      CDisplayAnimatedVisual::Stop(this, 0LL);
      return (unsigned int)v2;
    }
    *((_BYTE *)this + 428) = 1;
  }
  v3 = this[50];
  if ( v3 )
  {
    if ( *((_BYTE *)v3 + 72) )
    {
      this[50] = 0LL;
      CTimelineBase::Release(v3);
      v2 = CDisplayExtendAnimatedVisual::ScheduleEntranceAnimations((CDisplayExtendAnimatedVisual *)this);
      v6 = v2;
      if ( v2 < 0 )
      {
        v7 = 227;
        goto LABEL_10;
      }
    }
  }
  return (unsigned int)v2;
}
