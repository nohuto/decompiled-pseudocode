/*
 * XREFs of ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x18037A490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x18037A44C (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
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
