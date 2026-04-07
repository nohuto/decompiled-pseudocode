/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C
 * Callers:
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180002F60 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x180009F1C (--0CCanvasVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18001D2C8 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800211D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180022DB4 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180030944 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054CA8 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CThumbnailAnimatedVisual@@QEAA@XZ @ 0x1800610C0 (--0CThumbnailAnimatedVisual@@QEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18006D2F8 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18006F0BC (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x18007E230 (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18007E694 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18008598C (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x180087684 (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18008D844 (--0CLivePreview@@IEAA@XZ.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B6EB8 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800B8A74 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800BE098 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CGlobalTimeTrackVisual@@IEAA@XZ @ 0x1800E117C (--0CGlobalTimeTrackVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800086EC (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CRenderDataVisual *__fastcall CRenderDataVisual::CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v2; // rdx

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CRenderDataVisual::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 208, 0LL, 0);
  *((_QWORD *)this + 25) &= v2;
  return this;
}
