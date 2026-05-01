/*
 * XREFs of ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800955AC
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x1800943CC (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     RecoverWindowsProc @ 0x180094660 (RecoverWindowsProc.c)
 *     CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x180095128 (CClassicWindowManager--ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800955FC (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?IsTrayWindowCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1802E8D70 (-IsTrayWindowCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802EC550 (-EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsTrayWindowStyleCheck(HWND hWnd, HWND a2)
{
  return (GetWindowLongPtrW(hWnd, -20) & 0x40000) != 0 || (GetWindowLongPtrW(hWnd, -20) & 0x8000080) == 0;
}
