/*
 * XREFs of ?SetRoot@CBaseRenderTargetProxy@@UEAAJPEAVCVisualProxy@@@Z @ 0x18009A410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseRenderTargetProxy::SetRoot(CBaseRenderTargetProxy *this, struct CVisualProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *((unsigned int *)a2 + 6);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 280LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           v2);
}
