/*
 * XREFs of ?Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400FEE20
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     <none>
 */

struct ThreadRestrictNewHandlesRegion *__fastcall ThreadRestrictNewHandlesRegion::Get(struct _GRETHREAD *a1)
{
  if ( a1 )
    return (struct ThreadRestrictNewHandlesRegion *)*((_QWORD *)a1 + 41);
  else
    return 0LL;
}
