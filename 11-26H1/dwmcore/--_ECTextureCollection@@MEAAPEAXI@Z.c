/*
 * XREFs of ??_ECTextureCollection@@MEAAPEAXI@Z @ 0x1802B1610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CTextureCollection@@MEAA@XZ @ 0x1802B1544 (--1CTextureCollection@@MEAA@XZ.c)
 */

CTextureCollection *__fastcall CTextureCollection::`vector deleting destructor'(CTextureCollection *this, char a2)
{
  CTextureCollection::~CTextureCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
