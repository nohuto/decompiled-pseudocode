/*
 * XREFs of ??_GUwpAppStateManager@@UEAAPEAXI@Z @ 0x18023C820
 * Callers:
 *     <none>
 * Callees:
 *     ??1UwpAppStateManager@@UEAA@XZ @ 0x1802C26F4 (--1UwpAppStateManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

UwpAppStateManager *__fastcall UwpAppStateManager::`scalar deleting destructor'(UwpAppStateManager *this, char a2)
{
  UwpAppStateManager::~UwpAppStateManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
