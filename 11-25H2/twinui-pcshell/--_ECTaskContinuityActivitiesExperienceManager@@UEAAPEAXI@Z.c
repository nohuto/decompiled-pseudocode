/*
 * XREFs of ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x180372A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x1803729D0 (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
 */

CTaskContinuityActivitiesExperienceManager *__fastcall CTaskContinuityActivitiesExperienceManager::`vector deleting destructor'(
        CTaskContinuityActivitiesExperienceManager *this,
        char a2)
{
  CTaskContinuityActivitiesExperienceManager::~CTaskContinuityActivitiesExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
