/*
 * XREFs of ??_ECDesktopPositioner@@UEAAPEAXI@Z @ 0x1804EE04C
 * Callers:
 *     ??_ECDesktopPositioner@@WDA@EAAPEAXI@Z @ 0x1804EDEF0 (--_ECDesktopPositioner@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x1800F621C (--1CDesktopPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDesktopPositioner *__fastcall CDesktopPositioner::`vector deleting destructor'(CDesktopPositioner *this, char a2)
{
  CDesktopPositioner::~CDesktopPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x240);
  return this;
}
