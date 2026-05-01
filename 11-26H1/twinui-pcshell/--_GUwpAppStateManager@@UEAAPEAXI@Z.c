/*
 * XREFs of ??_GUwpAppStateManager@@UEAAPEAXI@Z @ 0x18022E960
 * Callers:
 *     <none>
 * Callees:
 *     ??1UwpAppStateManager@@UEAA@XZ @ 0x1802B8D78 (--1UwpAppStateManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

UwpAppStateManager *__fastcall UwpAppStateManager::`scalar deleting destructor'(UwpAppStateManager *this, char a2)
{
  UwpAppStateManager::~UwpAppStateManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
