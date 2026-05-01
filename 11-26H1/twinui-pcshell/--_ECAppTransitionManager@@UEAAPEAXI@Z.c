/*
 * XREFs of ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1801B7BB4
 * Callers:
 *     ??_ECAppTransitionManager@@WBI@EAAPEAXI@Z @ 0x1804E1FC0 (--_ECAppTransitionManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAppTransitionManager@@UEAA@XZ @ 0x1801B7BF0 (--1CAppTransitionManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAppTransitionManager *__fastcall CAppTransitionManager::`vector deleting destructor'(
        CAppTransitionManager *this,
        char a2)
{
  CAppTransitionManager::~CAppTransitionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x130);
  return this;
}
