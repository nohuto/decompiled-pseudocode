/*
 * XREFs of BgpFoGetTextMetrics @ 0x14051954C
 * Callers:
 *     BgpConsoleSetPointSize @ 0x140715D50 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x140C51CF0 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140C51FA0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140D139B0 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x1407189B8 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
