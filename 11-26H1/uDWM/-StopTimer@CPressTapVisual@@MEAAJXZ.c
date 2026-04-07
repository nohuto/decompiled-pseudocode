/*
 * XREFs of ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800BC6B0
 * Callers:
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800BC05C (--1CPressTapVisual@@MEAA@XZ.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800BC640 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 * Callees:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180006510 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CPressTapVisual::StopTimer(CTimelineBase **this)
{
  CPressTapVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (CPressTapVisual *)this;
  v2 = this[41];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 41) = 0LL;
  }
  v3 = CTouchVisual::StopTimer(v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x105u, 0LL);
  return v4;
}
