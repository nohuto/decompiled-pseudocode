/*
 * XREFs of ??_EGamingOverlayExperienceManager@@EEAAPEAXI@Z @ 0x180345368
 * Callers:
 *     ??_EGamingOverlayExperienceManager@@GDA@EAAPEAXI@Z @ 0x180344DF0 (--_EGamingOverlayExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x180342624 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 */

GamingOverlayExperienceManager *__fastcall GamingOverlayExperienceManager::`vector deleting destructor'(
        GamingOverlayExperienceManager *this,
        char a2)
{
  GamingOverlayExperienceManager::~GamingOverlayExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
