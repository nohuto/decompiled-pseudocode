/*
 * XREFs of ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BBF30
 * Callers:
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800BBB94 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800BBEF0 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BBFA0 (-UpdateTransition@CPenPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180006510 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::StopTimer(CTimelineBase **this)
{
  CPenPressHoldVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (CPenPressHoldVisual *)this;
  v2 = this[29];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 29) = 0LL;
  }
  v3 = CTouchVisual::StopTimer(v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x84u, 0LL);
  return v4;
}
