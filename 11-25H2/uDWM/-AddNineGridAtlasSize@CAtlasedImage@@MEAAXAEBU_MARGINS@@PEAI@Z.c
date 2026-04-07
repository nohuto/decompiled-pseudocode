/*
 * XREFs of ?AddNineGridAtlasSize@CAtlasedImage@@MEAAXAEBU_MARGINS@@PEAI@Z @ 0x180068950
 * Callers:
 *     ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x1800688D0 (-AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z.c)
 *     ?AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z @ 0x180068920 (-AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::AddNineGridAtlasSize(CAtlasedImage *this, const struct _MARGINS *a2, unsigned int *a3)
{
  *a3 += ((a2->cxLeftWidth > 0) + 1 + (a2->cxRightWidth > 0)) * ((a2->cyTopHeight > 0) + 1 + (a2->cyBottomHeight > 0));
}
