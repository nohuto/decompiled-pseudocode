/*
 * XREFs of ??_ECComplexShape@@UEAAPEAXI@Z @ 0x180228CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CComplexShape@@UEAA@XZ @ 0x18021EA80 (--1CComplexShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CComplexShape *__fastcall CComplexShape::`vector deleting destructor'(CComplexShape *this, char a2)
{
  CComplexShape::~CComplexShape(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
