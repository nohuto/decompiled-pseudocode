/*
 * XREFs of ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180088ED0
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18007ADDC (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800AC2C8 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::ClearPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 88LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
    16LL);
}
