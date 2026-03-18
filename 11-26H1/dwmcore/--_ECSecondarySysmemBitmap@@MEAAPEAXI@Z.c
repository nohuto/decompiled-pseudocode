/*
 * XREFs of ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x1801D1450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x1801D148C (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::`vector deleting destructor'(
        CSecondarySysmemBitmap *this,
        char a2)
{
  CSecondarySysmemBitmap::~CSecondarySysmemBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
