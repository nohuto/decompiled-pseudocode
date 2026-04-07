/*
 * XREFs of ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18004E050
 * Callers:
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001F2B4 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreAllMarginsZero(const struct _MARGINS *a1)
{
  return !a1->cxLeftWidth && !a1->cyTopHeight && !a1->cxRightWidth && !a1->cyBottomHeight;
}
