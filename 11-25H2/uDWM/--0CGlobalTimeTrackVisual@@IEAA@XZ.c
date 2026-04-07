/*
 * XREFs of ??0CGlobalTimeTrackVisual@@IEAA@XZ @ 0x1800E117C
 * Callers:
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x1800DDC50 (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180009E0C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CGlobalTimeTrackVisual *__fastcall CGlobalTimeTrackVisual::CGlobalTimeTrackVisual(CGlobalTimeTrackVisual *this)
{
  CGlobalTimeTrackVisual *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CGlobalTimeTrackVisual::`vftable';
  result = this;
  *((_QWORD *)this + 30) = 0LL;
  return result;
}
