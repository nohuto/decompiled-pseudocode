/*
 * XREFs of ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x18031FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskbarLayoutParser@@UEAA@XZ @ 0x18031FD8C (--1TaskbarLayoutParser@@UEAA@XZ.c)
 */

OLECHAR **__fastcall TaskbarLayoutParser::`scalar deleting destructor'(OLECHAR **this, char a2)
{
  TaskbarLayoutParser::~TaskbarLayoutParser(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
