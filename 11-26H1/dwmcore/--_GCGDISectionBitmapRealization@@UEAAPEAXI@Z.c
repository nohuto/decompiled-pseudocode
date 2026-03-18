/*
 * XREFs of ??_GCGDISectionBitmapRealization@@UEAAPEAXI@Z @ 0x1801B3AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801B3AEC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CGDISectionBitmapRealization *__fastcall CGDISectionBitmapRealization::`scalar deleting destructor'(
        CGDISectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1A0uLL);
  return this;
}
