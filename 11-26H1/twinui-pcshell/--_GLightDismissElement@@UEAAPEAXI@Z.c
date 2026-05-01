/*
 * XREFs of ??_GLightDismissElement@@UEAAPEAXI@Z @ 0x1804D9EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1LightDismissElement@@UEAA@XZ @ 0x1804D9E70 (--1LightDismissElement@@UEAA@XZ.c)
 */

LightDismissElement *__fastcall LightDismissElement::`scalar deleting destructor'(LightDismissElement *this, char a2)
{
  LightDismissElement::~LightDismissElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
