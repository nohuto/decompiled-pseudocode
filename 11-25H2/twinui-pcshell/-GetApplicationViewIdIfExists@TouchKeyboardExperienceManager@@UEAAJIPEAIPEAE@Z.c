/*
 * XREFs of ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAIPEAE@Z @ 0x1804606A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x1804605AC (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
        RTL_SRWLOCK *this,
        int a2,
        unsigned int *a3,
        char *a4)
{
  *a4 = TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(this - 25, a2, a3);
  return 0LL;
}
