/*
 * XREFs of ??_EPWSLayoutParser@@UEAAPEAXI@Z @ 0x1803F1ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PWSLayoutParser@@UEAA@XZ @ 0x1803F1D6C (--1PWSLayoutParser@@UEAA@XZ.c)
 */

OLECHAR **__fastcall PWSLayoutParser::`vector deleting destructor'(OLECHAR **this, char a2)
{
  PWSLayoutParser::~PWSLayoutParser(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
