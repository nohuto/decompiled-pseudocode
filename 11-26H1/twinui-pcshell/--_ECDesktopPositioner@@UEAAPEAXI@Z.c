/*
 * XREFs of ??_ECDesktopPositioner@@UEAAPEAXI@Z @ 0x18050F63C
 * Callers:
 *     ??_ECDesktopPositioner@@WDA@EAAPEAXI@Z @ 0x18050F4E0 (--_ECDesktopPositioner@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x18018DC58 (--1CDesktopPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDesktopPositioner *__fastcall CDesktopPositioner::`vector deleting destructor'(CDesktopPositioner *this, char a2)
{
  CDesktopPositioner::~CDesktopPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x240);
  return this;
}
