/*
 * XREFs of ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x180099BEC
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18008011C (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004059C (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180099C14 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

void __fastcall CGraphicsDeviceManager::HandleGraphicsDeviceLost(CGraphicsDeviceManager *this)
{
  CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
  CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(this);
  CDesktopManager::OnGraphicsDeviceLost();
}
