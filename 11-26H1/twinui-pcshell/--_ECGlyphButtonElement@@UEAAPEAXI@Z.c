/*
 * XREFs of ??_ECGlyphButtonElement@@UEAAPEAXI@Z @ 0x1804CFCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CGlyphButtonElement@@UEAA@XZ @ 0x1804CF8BC (--1CGlyphButtonElement@@UEAA@XZ.c)
 */

CGlyphButtonElement *__fastcall CGlyphButtonElement::`vector deleting destructor'(CGlyphButtonElement *this, char a2)
{
  CGlyphButtonElement::~CGlyphButtonElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A0);
  return this;
}
