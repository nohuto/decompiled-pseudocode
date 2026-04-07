/*
 * XREFs of ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800BCE10
 * Callers:
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800BC7BC (--1CPressTapVisual@@MEAA@XZ.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800BCDA0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180030710 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CPressTapVisual::StopTimer(CTimelineBase **this)
{
  CPressTapVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (CPressTapVisual *)this;
  v2 = this[45];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 45) = 0LL;
  }
  v3 = CTouchVisual::StopTimer(v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x105u, 0LL);
  return v4;
}
