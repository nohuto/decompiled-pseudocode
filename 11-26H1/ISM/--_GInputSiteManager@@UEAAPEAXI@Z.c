/*
 * XREFs of ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x180132FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x180132F30 (--1InputSiteManager@@UEAA@XZ.c)
 */

InputSiteManager *__fastcall InputSiteManager::`scalar deleting destructor'(InputSiteManager *this, char a2)
{
  InputSiteManager::~InputSiteManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
