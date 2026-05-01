/*
 * XREFs of ??_ECSwitchItemElement@@UEAAPEAXI@Z @ 0x1804A4260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSwitchItemElement@@UEAA@XZ @ 0x1804A4098 (--1CSwitchItemElement@@UEAA@XZ.c)
 */

CSwitchItemElement *__fastcall CSwitchItemElement::`vector deleting destructor'(CSwitchItemElement *this, char a2)
{
  CSwitchItemElement::~CSwitchItemElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A8);
  return this;
}
