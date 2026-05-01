/*
 * XREFs of ??_GEmulatedFullScreenManager@@UEAAPEAXI@Z @ 0x18021CB0C
 * Callers:
 *     ??_EEmulatedFullScreenManager@@WCI@EAAPEAXI@Z @ 0x180546A20 (--_EEmulatedFullScreenManager@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1EmulatedFullScreenManager@@UEAA@XZ @ 0x1802C3020 (--1EmulatedFullScreenManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

EmulatedFullScreenManager *__fastcall EmulatedFullScreenManager::`scalar deleting destructor'(
        EmulatedFullScreenManager *this,
        char a2)
{
  EmulatedFullScreenManager::~EmulatedFullScreenManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
