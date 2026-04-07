/*
 * XREFs of ??0CCanvasVisual@@IEAA@XZ @ 0x180009F1C
 * Callers:
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180009E4C (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x180076DB0 (--0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18007C97C (--0CAccent@@IEAA@XZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::CCanvasVisual(CCanvasVisual *this)
{
  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CCanvasVisual::`vftable';
  return this;
}
