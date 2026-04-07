/*
 * XREFs of ?CreateBitmapSourceProxy@CCompositor@@QEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x180031A58
 * Callers:
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180031A04 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateBitmapSourceProxy(CCompositor *this, struct CBitmapSourceProxy **a2)
{
  return CCompositor::CreateProxy<CBitmapSourceProxy>(this, a2);
}
