/*
 * XREFs of ??_ECPathSegmentsShape@@UEAAPEAXI@Z @ 0x18004FD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPathSegmentsShape@@UEAA@XZ @ 0x18004FF50 (--1CPathSegmentsShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CPathSegmentsShape *__fastcall CPathSegmentsShape::`vector deleting destructor'(CPathSegmentsShape *this, char a2)
{
  CPathSegmentsShape::~CPathSegmentsShape(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
