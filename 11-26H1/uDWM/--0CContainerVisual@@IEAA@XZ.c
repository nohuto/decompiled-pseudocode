/*
 * XREFs of ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC
 * Callers:
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x1800211A8 (--0CCanvasVisual@@IEAA@XZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800211D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x1800218CC (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x180021AAC (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CWindowBorder@@IEAA@XZ @ 0x180022A9C (--0CWindowBorder@@IEAA@XZ.c)
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180027638 (--0CSpriteVisual@@QEAA@XZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180066D04 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x18006973C (--0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18006E4E0 (--0CAccent@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18008998C (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x18008AD68 (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18009EBC0 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800B7A4C (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800212F0 (--0CVisual@@IEAA@XZ.c)
 *     ??0VisualCollection@@QEAA@XZ @ 0x180021360 (--0VisualCollection@@QEAA@XZ.c)
 */

CContainerVisual *__fastcall CContainerVisual::CContainerVisual(CContainerVisual *this)
{
  _QWORD *v1; // r8
  CContainerVisual *v2; // r8
  CContainerVisual *result; // rax
  CContainerVisual **v4; // rcx

  CVisual::CVisual(this);
  *v1 = &CContainerVisual::`vftable';
  VisualCollection::VisualCollection((VisualCollection *)(v1 + 17));
  result = v2;
  *v4 = v2;
  return result;
}
