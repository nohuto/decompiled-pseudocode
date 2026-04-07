/*
 * XREFs of ?StopImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800B3B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::StopImpl(CDisplayBlackCurtainAnimatedVisual *this)
{
  CTimelineBase *v1; // rax

  v1 = (CTimelineBase *)*((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  if ( v1 )
    CTimelineBase::Release(v1);
  return 0LL;
}
