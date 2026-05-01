/*
 * XREFs of ??_ECAppTransitionTargetManager@@UEAAPEAXI@Z @ 0x1804E4A00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppTransitionTargetManager@@UEAA@XZ @ 0x1804E48E0 (--1CAppTransitionTargetManager@@UEAA@XZ.c)
 */

CAppTransitionTargetManager *__fastcall CAppTransitionTargetManager::`vector deleting destructor'(
        CAppTransitionTargetManager *this,
        char a2)
{
  CAppTransitionTargetManager::~CAppTransitionTargetManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
