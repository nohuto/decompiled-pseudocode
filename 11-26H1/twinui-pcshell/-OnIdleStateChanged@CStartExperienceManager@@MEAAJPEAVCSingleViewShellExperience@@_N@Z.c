/*
 * XREFs of ?OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x18020F270
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x18038A778 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnIdleStateChanged(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        bool a3)
{
  if ( *((_DWORD *)a2 + 10) != 1 )
    CStartExperienceManager::ReactivateHelper((CStartExperienceManager *)((char *)this - 96), L"OnUserSessionIdle", a3);
  return 0LL;
}
