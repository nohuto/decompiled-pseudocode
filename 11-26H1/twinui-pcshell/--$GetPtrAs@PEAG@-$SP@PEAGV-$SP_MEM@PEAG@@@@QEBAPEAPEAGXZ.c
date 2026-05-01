/*
 * XREFs of ??$GetPtrAs@PEAG@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEBAPEAPEAGXZ @ 0x1802C6D98
 * Callers:
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1800FB828 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 *     ??R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ @ 0x180118888 (--R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x18014B1A4 (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180255130 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026DD9C (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ @ 0x1803D9C78 (--R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ.c)
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x1806275E0 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SP<unsigned short *,SP_MEM<unsigned short *>>::GetPtrAs<unsigned short *>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( !*a1 )
    return 0LL;
  return result;
}
