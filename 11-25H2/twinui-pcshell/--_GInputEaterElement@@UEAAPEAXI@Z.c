/*
 * XREFs of ??_GInputEaterElement@@UEAAPEAXI@Z @ 0x1804C82A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputEaterElement@@UEAA@XZ @ 0x1804C8200 (--1InputEaterElement@@UEAA@XZ.c)
 */

InputEaterElement *__fastcall InputEaterElement::`scalar deleting destructor'(InputEaterElement *this, char a2)
{
  InputEaterElement::~InputEaterElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
