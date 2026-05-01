/*
 * XREFs of ??_GInputEaterElement@@UEAAPEAXI@Z @ 0x1804DA360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputEaterElement@@UEAA@XZ @ 0x1804DA2C0 (--1InputEaterElement@@UEAA@XZ.c)
 */

InputEaterElement *__fastcall InputEaterElement::`scalar deleting destructor'(InputEaterElement *this, char a2)
{
  InputEaterElement::~InputEaterElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
