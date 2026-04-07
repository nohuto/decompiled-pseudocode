/*
 * XREFs of ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x180073524
 * Callers:
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180072DC4 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180072DF8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180072FFC (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800873B0 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x1800E560C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPolicy(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 64LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           a1);
}
