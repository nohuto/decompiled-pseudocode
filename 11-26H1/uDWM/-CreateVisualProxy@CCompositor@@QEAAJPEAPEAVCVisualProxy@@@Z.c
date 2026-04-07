/*
 * XREFs of ?CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z @ 0x180082CA0
 * Callers:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180061C00 (-Initialize@CVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateVisualProxy(CCompositor *this, struct CVisualProxy **a2)
{
  return CResourceProxy::Create<CVisualProxy>(*((_QWORD *)this + 3), a2);
}
