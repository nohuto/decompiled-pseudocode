/*
 * XREFs of ??_EIsGameManager@@UEAAPEAXI@Z @ 0x180315B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1IsGameManager@@UEAA@XZ @ 0x1801B8144 (--1IsGameManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

IsGameManager *__fastcall IsGameManager::`vector deleting destructor'(IsGameManager *this, char a2)
{
  IsGameManager::~IsGameManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
