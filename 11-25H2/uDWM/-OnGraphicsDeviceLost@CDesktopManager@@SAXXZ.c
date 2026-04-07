/*
 * XREFs of ?OnGraphicsDeviceLost@CDesktopManager@@SAXXZ @ 0x1800AD444
 * Callers:
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x180099BEC (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CDesktopManager::OnGraphicsDeviceLost(void)
{
  CWindowList::OnGraphicsDeviceLost(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
}
