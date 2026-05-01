/*
 * XREFs of ??_ENotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1803808B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180380388 (--1Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 */

CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *__fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::`vector deleting destructor'(
        CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *this,
        char a2)
{
  CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::~Notification(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
