/*
 * XREFs of ?SetMargin@@YA_NPEAU_MARGINS@@AEBU1@PEBU1@@Z @ 0x18000E070
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18000DD10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18000E0A0 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 */

bool __fastcall SetMargin(struct _MARGINS *a1, const struct _MARGINS *a2, const struct _MARGINS *a3)
{
  return SetMargin(a1, a2->cxLeftWidth, a2->cxRightWidth, a2->cyTopHeight, a2->cyBottomHeight, a3);
}
