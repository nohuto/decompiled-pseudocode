/*
 * XREFs of SHFusionUninitialize @ 0x1802C4FBC
 * Callers:
 *     DllMain @ 0x18015E7F8 (DllMain.c)
 * Callees:
 *     <none>
 */

void SHFusionUninitialize()
{
  if ( g_hActCtx != (HANDLE)-1LL )
  {
    ReleaseActCtx(g_hActCtx);
    g_hActCtx = (HANDLE)-1LL;
  }
  if ( hModule )
    hModule = (HMODULE)-1LL;
}
