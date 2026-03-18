/*
 * XREFs of ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140277CD4
 * Callers:
 *     CleanupIAMAccess @ 0x140219550 (CleanupIAMAccess.c)
 * Callees:
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140227D84 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z @ 0x140277C50 (-CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C23F0 (-SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WIN.c)
 */

void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *a1)
{
  struct tagWND *v2; // r8

  if ( *((_QWORD *)a1 + 36) )
  {
    *((_QWORD *)a1 + 36) = 0LL;
    if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
      ShellWindowManagement::SetShellSpecialWindow(a1, 0LL, 0LL);
    else
      HMAssignmentUnlock((char *)a1 + 296);
    HMAssignmentUnlock((char *)a1 + 304);
    CleanupActivationFiltersForDesktop(a1);
    ShellWindowManagement::SetWindow(a1, 0LL, v2);
  }
  if ( *((struct tagDESKTOP **)a1 + 39) != (struct tagDESKTOP *)((char *)a1 + 312) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4783);
  Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline();
}
