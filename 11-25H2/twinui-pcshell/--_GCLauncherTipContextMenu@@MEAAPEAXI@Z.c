/*
 * XREFs of ??_GCLauncherTipContextMenu@@MEAAPEAXI@Z @ 0x1800A4F90
 * Callers:
 *     ??_ECLauncherTipContextMenu@@OBI@EAAPEAXI@Z @ 0x1805DC5F0 (--_ECLauncherTipContextMenu@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLauncherTipContextMenu@@MEAA@XZ @ 0x1800A4FCC (--1CLauncherTipContextMenu@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CLauncherTipContextMenu *__fastcall CLauncherTipContextMenu::`scalar deleting destructor'(
        CLauncherTipContextMenu *this,
        char a2)
{
  CLauncherTipContextMenu::~CLauncherTipContextMenu(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A0);
  return this;
}
