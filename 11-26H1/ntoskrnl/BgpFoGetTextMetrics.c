/*
 * XREFs of BgpFoGetTextMetrics @ 0x140512FBC
 * Callers:
 *     BgpConsoleSetPointSize @ 0x14071AA40 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140C57FA0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140D19B78 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14071D6A8 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
