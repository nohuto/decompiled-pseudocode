/*
 * XREFs of ??_ECWindowIconLoader@@UEAAPEAXI@Z @ 0x1800F0D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowIconLoader@@UEAA@XZ @ 0x1800F0DAC (--1CWindowIconLoader@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWindowIconLoader *__fastcall CWindowIconLoader::`vector deleting destructor'(CWindowIconLoader *this, char a2)
{
  CWindowIconLoader::~CWindowIconLoader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
