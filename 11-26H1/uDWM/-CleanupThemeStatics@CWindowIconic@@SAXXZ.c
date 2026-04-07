/*
 * XREFs of ?CleanupThemeStatics@CWindowIconic@@SAXXZ @ 0x180006820
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800066F4 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CWindowIconic::CleanupThemeStatics(void)
{
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages, 1);
}
