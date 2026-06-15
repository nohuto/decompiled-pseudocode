/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x180037F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x180037970 (--1CApplication@@MEAA@XZ.c)
 */

CApplication *__fastcall CApplication::`vector deleting destructor'(CApplication *this, char a2)
{
  CApplication::~CApplication(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2D8);
  return this;
}
