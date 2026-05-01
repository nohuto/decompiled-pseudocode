/*
 * XREFs of ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x18022E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCharmsWindowManager@@MEAA@XZ @ 0x1802AA88C (--1CCharmsWindowManager@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCharmsWindowManager *__fastcall CCharmsWindowManager::`vector deleting destructor'(
        CCharmsWindowManager *this,
        char a2)
{
  CCharmsWindowManager::~CCharmsWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
