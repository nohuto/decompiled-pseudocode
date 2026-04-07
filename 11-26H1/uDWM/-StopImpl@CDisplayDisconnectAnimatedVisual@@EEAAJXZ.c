/*
 * XREFs of ?StopImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x1800AFA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::StopImpl(CDisplayDisconnectAnimatedVisual *this)
{
  __int64 v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = *((_QWORD *)this + 45);
  *((_QWORD *)this + 45) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = (CTimelineBase *)*((_QWORD *)this + 46);
  *((_QWORD *)this + 46) = 0LL;
  if ( v3 )
    CTimelineBase::Release(v3);
  return 0LL;
}
