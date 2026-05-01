/*
 * XREFs of ??_GSharedDesktopBackgroundVisualHost@@UEAAPEAXI@Z @ 0x180605FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SharedDesktopBackgroundVisualHost@@UEAA@XZ @ 0x180605CE8 (--1SharedDesktopBackgroundVisualHost@@UEAA@XZ.c)
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
