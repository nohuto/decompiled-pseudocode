/*
 * XREFs of ??1ClipPlaneIterator@@QEAA@XZ @ 0x1800AD17C
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002D120 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall ClipPlaneIterator::~ClipPlaneIterator(ClipPlaneIterator *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 88);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 56);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 24);
}
