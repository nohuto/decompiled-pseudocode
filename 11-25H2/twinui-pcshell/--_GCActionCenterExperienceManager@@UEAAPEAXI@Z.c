/*
 * XREFs of ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x18035D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18035D0EC (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 */

CActionCenterExperienceManager *__fastcall CActionCenterExperienceManager::`scalar deleting destructor'(
        CActionCenterExperienceManager *this,
        char a2)
{
  CActionCenterExperienceManager::~CActionCenterExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x360);
  return this;
}
