/*
 * XREFs of ??_EIsGameManager@@UEAAPEAXI@Z @ 0x1803196F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1IsGameManager@@UEAA@XZ @ 0x18013EEE0 (--1IsGameManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

IsGameManager *__fastcall IsGameManager::`vector deleting destructor'(IsGameManager *this, char a2)
{
  IsGameManager::~IsGameManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
