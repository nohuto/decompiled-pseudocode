/*
 * XREFs of ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x1803798A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x18037986C (--1ImeNotificationExperienceManager@@UEAA@XZ.c)
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
