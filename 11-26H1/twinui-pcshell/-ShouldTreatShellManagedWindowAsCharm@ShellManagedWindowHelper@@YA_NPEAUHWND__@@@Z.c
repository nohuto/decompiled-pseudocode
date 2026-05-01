/*
 * XREFs of ?ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1802E5A80
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsCharm(ShellManagedWindowHelper *this, HWND a2)
{
  return GetPropW((HWND)this, L"Microsoft.Windows.ShellManagedWindowAsCharm") != 0LL;
}
