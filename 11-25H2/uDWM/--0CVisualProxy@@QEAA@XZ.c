/*
 * XREFs of ??0CVisualProxy@@QEAA@XZ @ 0x180007B28
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180005DBC (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180006C44 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCContainerVisualProxy@@@CCompositor@@IEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x180007B50 (--$CreateProxy@VCContainerVisualProxy@@@CCompositor@@IEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800746F4 (--$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800AB4A0 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 */

CVisualProxy *__fastcall CVisualProxy::CVisualProxy(CVisualProxy *this)
{
  CVisualProxy *v1; // rcx
  CVisualProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v1;
  *(_QWORD *)v1 = &CVisualProxy::`vftable';
  *((_QWORD *)v1 + 3) = 0LL;
  return result;
}
