/*
 * XREFs of ??_ESearchAppExperienceManager@@UEAAPEAXI@Z @ 0x18039A750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x18039A580 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 */

SearchAppExperienceManager *__fastcall SearchAppExperienceManager::`vector deleting destructor'(
        SearchAppExperienceManager *this,
        char a2)
{
  SearchAppExperienceManager::~SearchAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x228);
  return this;
}
