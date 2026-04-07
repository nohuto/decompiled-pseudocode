/*
 * XREFs of ?ModeChange@CAnalogCompositorManager@@SAJXZ @ 0x180065CB4
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180033BCC (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180067AF0 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

__int64 CAnalogCompositorManager::ModeChange(void)
{
  CAnalogCompositorManager::GetInstance();
  return 0LL;
}
