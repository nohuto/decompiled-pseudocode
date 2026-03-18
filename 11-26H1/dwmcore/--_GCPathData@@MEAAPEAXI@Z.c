/*
 * XREFs of ??_GCPathData@@MEAAPEAXI@Z @ 0x180050050
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPathData@@MEAA@XZ @ 0x1800502C8 (--1CPathData@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CPathData *__fastcall CPathData::`scalar deleting destructor'(CPathData *this, char a2)
{
  CPathData::~CPathData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
