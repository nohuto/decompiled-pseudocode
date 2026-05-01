/*
 * XREFs of ?StartMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x18038E6C4
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038DB60 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18038E1A0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
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
