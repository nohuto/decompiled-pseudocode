/*
 * XREFs of ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800C8ACC
 * Callers:
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800C8C00 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180006528 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CTetherVisual::StopDelayTimer(CTimelineBase **this)
{
  CTetherVisual *v1; // rdx
  CTimelineBase *v2; // rcx

  v1 = (CTetherVisual *)this;
  v2 = this[35];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 35) = 0LL;
  }
  if ( !*((_QWORD *)v1 + 34) )
    CTouchVisual::UnRegisterGlobalTimer(v1);
}
