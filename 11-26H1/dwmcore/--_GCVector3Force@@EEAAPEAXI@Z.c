/*
 * XREFs of ??_GCVector3Force@@EEAAPEAXI@Z @ 0x1801DA590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVector3Force@@EEAA@XZ @ 0x1801DA5CC (--1CVector3Force@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CVector3Force *__fastcall CVector3Force::`scalar deleting destructor'(CVector3Force *this, char a2)
{
  CVector3Force::~CVector3Force(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x168uLL);
  return this;
}
