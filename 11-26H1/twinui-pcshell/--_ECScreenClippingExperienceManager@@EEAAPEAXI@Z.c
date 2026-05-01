/*
 * XREFs of ??_ECScreenClippingExperienceManager@@EEAAPEAXI@Z @ 0x18039A980
 * Callers:
 *     <none>
 * Callees:
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1802868FC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CScreenClippingExperienceManager *__fastcall CScreenClippingExperienceManager::`vector deleting destructor'(
        CScreenClippingExperienceManager *this,
        char a2)
{
  CScreenClippingExperienceManager::~CScreenClippingExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
