/*
 * XREFs of ?CleanupThemeStatics@CWindowIconic@@SAXXZ @ 0x180033AAC
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180033990 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CWindowIconic::CleanupThemeStatics(void)
{
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages, 1);
}
