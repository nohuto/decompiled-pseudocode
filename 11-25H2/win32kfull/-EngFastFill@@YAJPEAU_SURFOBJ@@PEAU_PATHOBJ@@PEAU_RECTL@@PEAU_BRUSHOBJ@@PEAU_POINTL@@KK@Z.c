/*
 * XREFs of ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A3EF8
 * Callers:
 *     EngFillPath @ 0x1400A3A10 (EngFillPath.c)
 * Callees:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1400F7764 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1400FBA48 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140217164 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140224434 (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 */

__int64 __fastcall EngFastFill(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v10; // esi
  unsigned int *v11; // rdi
  int v12; // edx
  unsigned int iSolidColor; // r9d
  ULONG v16; // r9d
  unsigned int v17; // ecx
  _DWORD *pvRbrush; // rax
  ULONG v19; // r9d

  v10 = -1;
  v11 = (unsigned int *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  if ( !a1->iType )
  {
    v12 = gaMix[a6 & 0xF] | (gaMix[(a6 >> 8) & 0xF] << 8);
    switch ( v12 )
    {
      case 0:
        iSolidColor = 0;
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
      case 0xF0F0:
        iSolidColor = a4->iSolidColor;
        if ( iSolidColor != -1 )
          return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
        v17 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
        if ( v17 - 2 <= 1 )
        {
          if ( pvGetEngRbrush(a4) )
          {
            pvRbrush = a4[1].pvRbrush;
            if ( pvRbrush[5] == 8 && pvRbrush[6] == 8 )
              return (unsigned int)bBrushPathN_8x8((struct SURFACE *)v11, a2, a3, a4, a5, v11[24], a7);
          }
        }
        else if ( v17 >= 3 && pvGetEngRbrush(a4) && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
        {
          return (unsigned int)bBrushPath((struct SURFACE *)v11, a2, a3, a4, a5, 0, a7);
        }
        break;
      case 0x5A5A:
        v16 = a4->iSolidColor;
        if ( v16 != -1 )
          return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, v16, 1, a7);
        if ( *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60) >= 3u
          && pvGetEngRbrush(a4)
          && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
        {
          return (unsigned int)bBrushPath((struct SURFACE *)v11, a2, a3, a4, a5, 2u, a7);
        }
        break;
      case 0xAAAA:
        return 1;
      case 0xF0F:
        v19 = a4->iSolidColor;
        if ( v19 != -1 )
        {
          iSolidColor = ~v19;
          return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
        }
        if ( *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60) >= 3u
          && pvGetEngRbrush(a4)
          && *((_DWORD *)a4[1].pvRbrush + 5) >= 4u )
        {
          return (unsigned int)bBrushPath((struct SURFACE *)v11, a2, a3, a4, a5, 1u, a7);
        }
        break;
      case 0x5555:
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, 0xFFFFFFFF, 1, a7);
      case 0xFFFF:
        iSolidColor = -1;
        return (unsigned int)bPaintPath((struct SURFACE *)v11, a2, a3, iSolidColor, 0, a7);
      default:
        return v10;
    }
  }
  return v10;
}
