/*
 * XREFs of ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800C8B10
 * Callers:
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800C8A50 (-Stop@CTetherVisual@@UEAAXXZ.c)
 * Callees:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180006510 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CTetherVisual::StopTimer(CTimelineBase **this)
{
  CTetherVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  CTimelineBase *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx

  v1 = (CTetherVisual *)this;
  v2 = this[34];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 34) = 0LL;
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x12Du, 0LL);
  return v5;
}
