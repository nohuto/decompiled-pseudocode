/*
 * XREFs of ??_ENotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x180378A00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803784E8 (--1Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
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
