/*
 * XREFs of ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x1802EC470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CClassicWindowManager@@MEAA@XZ @ 0x1802EC108 (--1CClassicWindowManager@@MEAA@XZ.c)
 */

CClassicWindowManager *__fastcall CClassicWindowManager::`scalar deleting destructor'(
        CClassicWindowManager *this,
        char a2)
{
  CClassicWindowManager::~CClassicWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
