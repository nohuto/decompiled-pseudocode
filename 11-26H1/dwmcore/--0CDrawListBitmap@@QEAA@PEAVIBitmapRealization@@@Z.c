/*
 * XREFs of ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180199658
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z @ 0x1802349D4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, struct IBitmapRealization *a2)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
