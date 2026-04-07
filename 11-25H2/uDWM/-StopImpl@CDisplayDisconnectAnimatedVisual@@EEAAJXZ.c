/*
 * XREFs of ?StopImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x1800B01B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::StopImpl(CDisplayDisconnectAnimatedVisual *this)
{
  __int64 v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = *((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = (CTimelineBase *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = 0LL;
  if ( v3 )
    CTimelineBase::Release(v3);
  return 0LL;
}
