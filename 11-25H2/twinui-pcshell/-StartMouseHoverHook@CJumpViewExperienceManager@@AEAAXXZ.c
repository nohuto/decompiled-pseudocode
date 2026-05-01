/*
 * XREFs of ?StartMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x180387658
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180386B80 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180387130 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CJumpViewExperienceManager::StartMouseHoverHook(CJumpViewExperienceManager *this)
{
  if ( !*((_QWORD *)this + 64) )
    *((_QWORD *)this + 64) = SetWindowsHookExW(
                               14,
                               (HOOKPROC)CJumpViewExperienceManager::LowLevelMouseHookProc,
                               &_ImageBase,
                               0);
}
