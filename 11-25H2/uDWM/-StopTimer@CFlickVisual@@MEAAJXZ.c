/*
 * XREFs of ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800B5500
 * Callers:
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180093D80 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800B535C (--1CFlickVisual@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180030710 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CFlickVisual::StopTimer(CTimelineBase **this)
{
  CFlickVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (CFlickVisual *)this;
  v2 = this[39];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 39) = 0LL;
  }
  v3 = CTouchVisual::StopTimer(v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xDBu, 0LL);
  return v4;
}
