/*
 * XREFs of ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801445E4
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8AC (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     RecoverWindowsProc @ 0x1801442A0 (RecoverWindowsProc.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180144578 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(
        ShellManagedWindowHelper *this,
        HWND a2)
{
  return GetPropW((HWND)this, L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") != 0LL;
}
