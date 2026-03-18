/*
 * XREFs of ??_ECBitmap@@MEAAPEAXI@Z @ 0x180224C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmap@@MEAA@XZ @ 0x1801926C8 (--1CBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
