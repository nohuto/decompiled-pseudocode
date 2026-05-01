/*
 * XREFs of ??_ECGlyphButtonElement@@UEAAPEAXI@Z @ 0x1804BDE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CGlyphButtonElement@@UEAA@XZ @ 0x1804BDA14 (--1CGlyphButtonElement@@UEAA@XZ.c)
 */

CGlyphButtonElement *__fastcall CGlyphButtonElement::`vector deleting destructor'(CGlyphButtonElement *this, char a2)
{
  CGlyphButtonElement::~CGlyphButtonElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A0);
  return this;
}
