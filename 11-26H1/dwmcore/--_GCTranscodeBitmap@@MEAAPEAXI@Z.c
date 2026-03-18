/*
 * XREFs of ??_GCTranscodeBitmap@@MEAAPEAXI@Z @ 0x1802B2410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CTranscodeBitmap@@MEAA@XZ @ 0x1802B23D8 (--1CTranscodeBitmap@@MEAA@XZ.c)
 */

CTranscodeBitmap *__fastcall CTranscodeBitmap::`scalar deleting destructor'(CTranscodeBitmap *this, char a2)
{
  CTranscodeBitmap::~CTranscodeBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
