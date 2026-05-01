/*
 * XREFs of ??_GSharedDesktopBackgroundVisualHost@@UEAAPEAXI@Z @ 0x1805E1380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x1805E10CC (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
 */

SharedDesktopBackgroundVisualHost *__fastcall SharedDesktopBackgroundVisualHost::`scalar deleting destructor'(
        SharedDesktopBackgroundVisualHost *this,
        char a2)
{
  SharedDesktopBackgroundVisualHost::~SharedDesktopBackgroundVisualHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x168);
  return this;
}
