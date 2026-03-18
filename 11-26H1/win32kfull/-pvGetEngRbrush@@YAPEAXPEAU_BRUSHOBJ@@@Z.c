/*
 * XREFs of ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018888C
 * Callers:
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DC9FC (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140118D68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@HH@Z @ 0x14030A9D8 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@HH@Z.c)
 */

PVOID __fastcall pvGetEngRbrush(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  PVOID pvRbrush; // rcx

  result = a1[1].pvRbrush;
  if ( !result )
  {
    if ( bGetRealizedBrush(
           *(struct BRUSH **)&a1[4].flColorType,
           (struct EBRUSHOBJ *)a1,
           (int (*)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))EngRealizeBrush) )
    {
      vTryToCacheRealization(
        (struct EBRUSHOBJ *)a1,
        (struct RBRUSH *)a1[1].pvRbrush,
        *(struct BRUSH **)&a1[4].flColorType,
        1,
        0);
      return a1[1].pvRbrush;
    }
    else
    {
      pvRbrush = a1[1].pvRbrush;
      if ( pvRbrush )
      {
        Win32FreePool(pvRbrush);
        a1[1].pvRbrush = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
