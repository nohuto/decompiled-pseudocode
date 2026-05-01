/*
 * XREFs of ??_GChromeManager@@UEAAPEAXI@Z @ 0x18021FBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ChromeManager@@UEAA@XZ @ 0x1802CA9C0 (--1ChromeManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ChromeManager *__fastcall ChromeManager::`scalar deleting destructor'(ChromeManager *this, char a2)
{
  ChromeManager::~ChromeManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
