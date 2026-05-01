/*
 * XREFs of ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x1803E9AA8
 * Callers:
 *     ??_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z @ 0x1803E99D0 (--_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x1802238B8 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PrivilegedOperationsService *__fastcall PrivilegedOperationsService::`scalar deleting destructor'(
        PrivilegedOperationsService *this,
        char a2)
{
  PrivilegedOperationsService::~PrivilegedOperationsService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
