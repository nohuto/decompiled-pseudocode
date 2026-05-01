/*
 * XREFs of ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1801B34A8
 * Callers:
 *     ??_ECAppTransitionManager@@WBI@EAAPEAXI@Z @ 0x1804CFD50 (--_ECAppTransitionManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAppTransitionManager@@UEAA@XZ @ 0x1801B34E4 (--1CAppTransitionManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
