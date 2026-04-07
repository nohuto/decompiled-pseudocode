/*
 * XREFs of ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x18001E1EC
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x18001D070 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18006A740 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006DC2C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

double CDesktopManager::GetGlobalTime(void)
{
  return *((double *)CDesktopManager::s_pDesktopManagerInstance + 32);
}
