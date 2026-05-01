/*
 * XREFs of ??4?$SP@EV?$SP_HLOCAL@E@@@@QEAAAEAV0@V?$CTypeWrapper@PEAE@@@Z @ 0x1802CA074
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x18019913C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BEF0 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CFC (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ @ 0x1803D0010 (--R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ.c)
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180601A94 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 * Callees:
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1801E45D4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 */

void **__fastcall SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(void **a1, void *a2)
{
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(a1);
  *a1 = a2;
  return a1;
}
