/*
 * XREFs of ??_GCBitmapLock@@MEAAPEAXI@Z @ 0x18019DD80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapLock@@MEAA@XZ @ 0x18019DDBC (--1CBitmapLock@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
