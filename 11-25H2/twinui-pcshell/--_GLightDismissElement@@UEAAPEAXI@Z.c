/*
 * XREFs of ??_GLightDismissElement@@UEAAPEAXI@Z @ 0x1804C7E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1LightDismissElement@@UEAA@XZ @ 0x1804C7DD4 (--1LightDismissElement@@UEAA@XZ.c)
 */

LightDismissElement *__fastcall LightDismissElement::`scalar deleting destructor'(LightDismissElement *this, char a2)
{
  LightDismissElement::~LightDismissElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
