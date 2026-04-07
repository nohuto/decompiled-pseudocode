/*
 * XREFs of ??0CThumbnailVisual@@IEAA@XZ @ 0x180026FA0
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x180026100 (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CThumbnailAnimatedVisual@@QEAA@XZ @ 0x18002703C (--0CThumbnailAnimatedVisual@@QEAA@XZ.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::CThumbnailVisual(CThumbnailVisual *this)
{
  CThumbnailVisual *result; // rax

  CThumbnailAnimatedVisual::CThumbnailAnimatedVisual(this);
  *(_QWORD *)this = &CThumbnailVisual::`vftable'{for `CCanvasVisual'};
  *((_QWORD *)this + 23) = &CPrimitiveGroupVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 33) = &CThumbnailAnimatedVisual::`vftable';
  *((_QWORD *)this + 43) = &CThumbnailVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 107) = 0;
  result = this;
  *((_BYTE *)this + 416) = 1;
  *((_OWORD *)this + 30) = 0LL;
  return result;
}
