/*
 * XREFs of ??_ECAllUpViewService@@UEAAPEAXI@Z @ 0x180486B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAllUpViewService@@UEAA@XZ @ 0x1804868F8 (--1CAllUpViewService@@UEAA@XZ.c)
 */

CAllUpViewService *__fastcall CAllUpViewService::`vector deleting destructor'(CAllUpViewService *this, char a2)
{
  CAllUpViewService::~CAllUpViewService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
