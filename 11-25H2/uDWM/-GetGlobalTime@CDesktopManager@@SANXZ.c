/*
 * XREFs of ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x180009DF4
 * Callers:
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x180008B30 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001BAFC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18005751C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18007BA70 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

double CDesktopManager::GetGlobalTime(void)
{
  return *((double *)CDesktopManager::s_pDesktopManagerInstance + 32);
}
