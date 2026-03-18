/*
 * XREFs of GetScrollbarTypeString @ 0x14029454C
 * Callers:
 *     xxxSetScrollBar @ 0x1400504D8 (xxxSetScrollBar.c)
 *     xxxShowScrollBar @ 0x1401D4208 (xxxShowScrollBar.c)
 *     GetWndSBParmsCrossProcess @ 0x140221788 (GetWndSBParmsCrossProcess.c)
 *     NtUserSBGetParms @ 0x14024C8E0 (NtUserSBGetParms.c)
 *     _SBGetParms @ 0x14026015C (_SBGetParms.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetScrollbarTypeString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "SB_HORZ";
  v1 = a1 - 1;
  if ( !v1 )
    return "SB_VERT";
  v2 = v1 - 1;
  if ( !v2 )
    return "SB_CTL";
  if ( v2 == 1 )
    return "SB_BOTH";
  return "UNKNOWN";
}
