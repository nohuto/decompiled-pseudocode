/*
 * XREFs of ??_GChromeManager@@UEAAPEAXI@Z @ 0x1802112C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ChromeManager@@UEAA@XZ @ 0x1802C2130 (--1ChromeManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ChromeManager *__fastcall ChromeManager::`scalar deleting destructor'(ChromeManager *this, char a2)
{
  ChromeManager::~ChromeManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
