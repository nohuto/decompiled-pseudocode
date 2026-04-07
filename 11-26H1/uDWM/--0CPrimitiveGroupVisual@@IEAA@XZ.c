/*
 * XREFs of ??0CPrimitiveGroupVisual@@IEAA@XZ @ 0x180027818
 * Callers:
 *     ??0CThumbnailAnimatedVisual@@QEAA@XZ @ 0x18002703C (--0CThumbnailAnimatedVisual@@QEAA@XZ.c)
 *     ?Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z @ 0x180027730 (-Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x1800211A8 (--0CCanvasVisual@@IEAA@XZ.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 */

CPrimitiveGroupVisual *__fastcall CPrimitiveGroupVisual::CPrimitiveGroupVisual(CPrimitiveGroupVisual *this)
{
  CCanvasVisual::CCanvasVisual(this);
  CGraphicsResourceOwner::CGraphicsResourceOwner((CPrimitiveGroupVisual *)((char *)this + 184));
  *(_QWORD *)this = &CPrimitiveGroupVisual::`vftable'{for `CCanvasVisual'};
  *((_QWORD *)this + 23) = &CPrimitiveGroupVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_BYTE *)this + 256) = 0;
  return this;
}
