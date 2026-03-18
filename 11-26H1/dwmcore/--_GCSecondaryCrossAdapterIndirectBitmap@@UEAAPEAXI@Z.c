/*
 * XREFs of ??_GCSecondaryCrossAdapterIndirectBitmap@@UEAAPEAXI@Z @ 0x1802B0430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ @ 0x1802B0400 (--1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ.c)
 */

CSecondaryCrossAdapterIndirectBitmap *__fastcall CSecondaryCrossAdapterIndirectBitmap::`scalar deleting destructor'(
        CSecondaryCrossAdapterIndirectBitmap *this,
        char a2)
{
  CSecondaryCrossAdapterIndirectBitmap::~CSecondaryCrossAdapterIndirectBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
