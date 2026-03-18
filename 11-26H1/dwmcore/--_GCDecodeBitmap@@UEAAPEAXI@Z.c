/*
 * XREFs of ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x1801B0F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDecodeBitmap@@UEAA@XZ @ 0x1801B0F7C (--1CDecodeBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::`scalar deleting destructor'(CDecodeBitmap *this, char a2)
{
  CDecodeBitmap::~CDecodeBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
