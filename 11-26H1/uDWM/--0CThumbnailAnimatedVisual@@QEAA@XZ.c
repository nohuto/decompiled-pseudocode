/*
 * XREFs of ??0CThumbnailAnimatedVisual@@QEAA@XZ @ 0x18002703C
 * Callers:
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180026FA0 (--0CThumbnailVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CPrimitiveGroupVisual@@IEAA@XZ @ 0x180027818 (--0CPrimitiveGroupVisual@@IEAA@XZ.c)
 */

CThumbnailAnimatedVisual *__fastcall CThumbnailAnimatedVisual::CThumbnailAnimatedVisual(CThumbnailAnimatedVisual *this)
{
  CThumbnailAnimatedVisual *result; // rax

  CPrimitiveGroupVisual::CPrimitiveGroupVisual(this);
  *(_QWORD *)this = &CThumbnailAnimatedVisual::`vftable'{for `CCanvasVisual'};
  *((_QWORD *)this + 23) = &CPrimitiveGroupVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 33) = &CThumbnailAnimatedVisual::`vftable';
  *((_OWORD *)this + 17) = 0LL;
  *((_OWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_BYTE *)this + 328) = 0;
  *(_QWORD *)((char *)this + 332) = 0LL;
  result = this;
  *((_BYTE *)this + 340) = 0;
  return result;
}
