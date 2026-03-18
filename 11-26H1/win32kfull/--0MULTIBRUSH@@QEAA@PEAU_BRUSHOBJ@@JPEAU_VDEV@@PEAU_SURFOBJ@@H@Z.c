/*
 * XREFs of ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14006719C
 * Callers:
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1400622A0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140064150 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140065E64 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140066750 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x140066E90 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1403286C0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     BRUSHOBJ_pvGetRbrush @ 0x140188800 (BRUSHOBJ_pvGetRbrush.c)
 *     ?bMultiBrush@RBRUSH@@QEAAHHH@Z @ 0x14030A8B4 (-bMultiBrush@RBRUSH@@QEAAHHH@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

MULTIBRUSH *__fastcall MULTIBRUSH::MULTIBRUSH(
        MULTIBRUSH *this,
        struct _BRUSHOBJ *a2,
        int a3,
        struct _VDEV *a4,
        struct _SURFOBJ *a5,
        int a6)
{
  void *v10; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = -1LL;
  *((_QWORD *)this + 2) = (unsigned __int64)&a5[-1].pvScan0 & -(__int64)(a5 != 0LL);
  *((_DWORD *)this + 1) = -1;
  if ( a2 )
  {
    *((_QWORD *)this + 4) = a2->pvRbrush;
    if ( a6 && a2->iSolidColor == -1 )
    {
      *((_QWORD *)this + 3) = *(_QWORD *)&a2[3].flColorType;
      if ( !a2->pvRbrush )
      {
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = BRUSHOBJ_pvGetRbrush(a2);
        v10 = *(void **)(*((_QWORD *)this + 1) + 8LL);
        *((_QWORD *)this + 4) = v10;
        if ( v10 )
        {
          memset_0(v10, 0, 16 * a3 + 8);
          **((_DWORD **)this + 4) = *((_DWORD *)a4 + 4);
          RBRUSH::bMultiBrush((RBRUSH *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) - 16LL), 1, 0);
        }
        else
        {
          *(_DWORD *)this = 0;
        }
      }
    }
    else
    {
      *((_DWORD *)this + 1) = a2->iSolidColor;
    }
  }
  return this;
}
