/*
 * XREFs of ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800063F0
 * Callers:
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180008230 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 * Callees:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180006510 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::StopTimer(CTimelineBase **this)
{
  CContactStationaryVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  CTimelineBase *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx

  v1 = (CContactStationaryVisual *)this;
  v2 = this[36];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 36) = 0LL;
  }
  v3 = (CTimelineBase *)*((_QWORD *)v1 + 35);
  if ( v3 )
  {
    CTimelineBase::Release(v3);
    *((_QWORD *)v1 + 35) = 0LL;
  }
  v4 = CTouchVisual::StopTimer(v1);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x160u, 0LL);
  return v5;
}
