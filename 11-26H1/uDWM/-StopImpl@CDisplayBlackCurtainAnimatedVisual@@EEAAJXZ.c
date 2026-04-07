/*
 * XREFs of ?StopImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800B3660
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::StopImpl(CDisplayBlackCurtainAnimatedVisual *this)
{
  CTimelineBase *v1; // rax

  v1 = (CTimelineBase *)*((_QWORD *)this + 45);
  *((_QWORD *)this + 45) = 0LL;
  if ( v1 )
    CTimelineBase::Release(v1);
  return 0LL;
}
