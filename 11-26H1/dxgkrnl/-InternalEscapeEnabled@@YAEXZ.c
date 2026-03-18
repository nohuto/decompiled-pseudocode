/*
 * XREFs of ?InternalEscapeEnabled@@YAEXZ @ 0x1401948F8
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x14019364C (DxgkpIsDrtEnabled.c)
 */

unsigned __int8 InternalEscapeEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled() )
    return 1;
  return v0;
}
