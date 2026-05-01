/*
 * XREFs of ??_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z @ 0x1803E9A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ @ 0x1803E9988 (--1-$PrivilegedOperationsBase@UIPrivilegedForegroundOperations@@@@UEAA@XZ.c)
 */

CPrivilegedTabletModeOperations *__fastcall CPrivilegedTabletModeOperations::`scalar deleting destructor'(
        CPrivilegedTabletModeOperations *this,
        char a2)
{
  PrivilegedOperationsBase<IPrivilegedForegroundOperations>::~PrivilegedOperationsBase<IPrivilegedForegroundOperations>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
