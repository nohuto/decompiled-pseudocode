/*
 * XREFs of ??_ECLauncherLaunch@@UEAAPEAXI@Z @ 0x180058810
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStoryboard@@UEAA@XZ @ 0x18005894C (--1CStoryboard@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CLauncherLaunch *__fastcall CLauncherLaunch::`vector deleting destructor'(CLauncherLaunch *this, char a2)
{
  CStoryboard::~CStoryboard(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
