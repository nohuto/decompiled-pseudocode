/*
 * XREFs of ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x180371E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x180371E34 (--1ImeNotificationExperienceManager@@UEAA@XZ.c)
 */

ImeNotificationExperienceManager *__fastcall ImeNotificationExperienceManager::`vector deleting destructor'(
        ImeNotificationExperienceManager *this,
        char a2)
{
  ImeNotificationExperienceManager::~ImeNotificationExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
