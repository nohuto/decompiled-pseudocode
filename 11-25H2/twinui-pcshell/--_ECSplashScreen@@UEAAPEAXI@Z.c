/*
 * XREFs of ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x18030A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSplashScreen@@UEAA@XZ @ 0x18030A7A8 (--1CSplashScreen@@UEAA@XZ.c)
 */

CSplashScreen *__fastcall CSplashScreen::`vector deleting destructor'(CSplashScreen *this, char a2)
{
  CSplashScreen::~CSplashScreen(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
