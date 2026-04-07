/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z @ 0x180068920
 * Callers:
 *     ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x1800688D0 (-AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z.c)
 * Callees:
 *     ?AddNineGridAtlasSize@CAtlasedImage@@MEAAXAEBU_MARGINS@@PEAI@Z @ 0x180068950 (-AddNineGridAtlasSize@CAtlasedImage@@MEAAXAEBU_MARGINS@@PEAI@Z.c)
 */

void __fastcall CAtlasedImage::AddApproximateAtlasSize(CAtlasedImage *this, unsigned int *a2)
{
  const struct _MARGINS *v3; // rdx

  v3 = (const struct _MARGINS *)*((_QWORD *)this + 9);
  if ( v3 )
    CAtlasedImage::AddNineGridAtlasSize(this, v3 + 2, a2);
}
