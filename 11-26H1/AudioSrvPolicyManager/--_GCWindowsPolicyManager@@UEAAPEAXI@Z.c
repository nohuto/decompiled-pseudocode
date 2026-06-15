/*
 * XREFs of ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x180046170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18004605C (--1CWindowsPolicyManager@@UEAA@XZ.c)
 */

CWindowsPolicyManager *__fastcall CWindowsPolicyManager::`scalar deleting destructor'(
        CWindowsPolicyManager *this,
        char a2)
{
  CWindowsPolicyManager::~CWindowsPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
