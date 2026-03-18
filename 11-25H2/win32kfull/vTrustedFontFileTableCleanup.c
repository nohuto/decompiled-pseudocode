/*
 * XREFs of vTrustedFontFileTableCleanup @ 0x1403102F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize@TrustedFontFileTable@@SAXXZ @ 0x140310250 (-Uninitialize@TrustedFontFileTable@@SAXXZ.c)
 */

void vTrustedFontFileTableCleanup()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)UserIsServiceSession() )
    TrustedFontFileTable::Uninitialize(v1, v0);
}
