/*
 * XREFs of ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x1803F3508
 * Callers:
 *     ??_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z @ 0x1803F3430 (--_EPrivilegedOperationsService@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18010BD64 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
