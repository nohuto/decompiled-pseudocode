/*
 * XREFs of ??_EAccessibilityExperienceManager@@EEAAPEAXI@Z @ 0x18047BAF4
 * Callers:
 *     ??_EAccessibilityExperienceManager@@GDA@EAAPEAXI@Z @ 0x18047B9A0 (--_EAccessibilityExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x18047B2A8 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 */

AccessibilityExperienceManager *__fastcall AccessibilityExperienceManager::`vector deleting destructor'(
        AccessibilityExperienceManager *this,
        char a2)
{
  AccessibilityExperienceManager::~AccessibilityExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E0);
  return this;
}
