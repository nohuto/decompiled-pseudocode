/*
 * XREFs of ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x18018E000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CDrawListPrimitive0 *__fastcall CDrawListPrimitive0::`scalar deleting destructor'(CDrawListPrimitive0 *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
