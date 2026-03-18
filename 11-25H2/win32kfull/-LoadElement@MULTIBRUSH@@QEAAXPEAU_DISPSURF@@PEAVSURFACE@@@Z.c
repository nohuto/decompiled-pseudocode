/*
 * XREFs of ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x14000E784
 * Callers:
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14000B680 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000CCF0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000D8FC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000E26C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14000EA90 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401DBF80 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1401DC8D0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1403332F0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 */

void __fastcall MULTIBRUSH::LoadElement(MULTIBRUSH *this, struct _DISPSURF *a2, struct SURFACE *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  struct PALETTE *v12; // r10
  _DWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // r8d
  int NearestIndexFromColorref; // eax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v6 = Gre::Base::Globals(this);
  v7 = *((_QWORD *)this + 1);
  if ( v7 && a3 )
  {
    if ( *((_DWORD *)a2 + 6) )
    {
      v11 = *((_QWORD *)a2 + 6);
      v12 = (struct PALETTE *)*((_QWORD *)v6 + 471);
      if ( (*(_DWORD *)(v11 + 2156) & 0x100) != 0 )
        v12 = DrvRealizeHalftonePalette(*((HDEV *)a2 + 6), 0);
      if ( *((int *)a2 + 6) <= 0
        || (v13 = (_DWORD *)*((_QWORD *)this + 1), *v13 != -1)
        || (v14 = (unsigned int)v13[7], (_DWORD)v14 == -1) )
      {
        v15 = *((_QWORD *)this + 1);
        if ( *(_DWORD *)v15 == -1 )
        {
          v19 = *((_QWORD *)this + 4);
          if ( v19 )
          {
            *((_QWORD *)this + 5) = *(_QWORD *)(v15 + 32);
            *(_QWORD *)(v15 + 32) = *(_QWORD *)(v19 + 16 * (*((unsigned int *)a2 + 4) + 1LL));
            *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 4)
                                                                 + 16LL * *((unsigned int *)a2 + 4)
                                                                 + 8);
          }
        }
        else
        {
          v16 = *((_QWORD *)a3 + 16);
          v17 = *(_DWORD *)(v15 + 28);
          v20 = v16;
          if ( v16 && (v17 & 0x3000000) == 0 && (*(_DWORD *)(v11 + 2156) & 0x100) != 0 )
            NearestIndexFromColorref = XEPALOBJ::ulDispatchGFPEFunction(&v20, *(unsigned int *)(v16 + 96));
          else
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v16, v12, *(unsigned int *)(v15 + 28), 1LL);
          **((_DWORD **)this + 1) = NearestIndexFromColorref;
        }
      }
      else
      {
        **((_DWORD **)this + 1) = ulGetNearestIndexFromColorref(*((_QWORD *)a3 + 16), v12, v14, 1LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = 0LL;
      }
      v8 = (_QWORD *)((char *)this + 32);
    }
    else
    {
      v8 = (_QWORD *)((char *)this + 32);
      v9 = *((_QWORD *)this + 4);
      if ( v9 )
        *(_QWORD *)(v7 + 8) = *(_QWORD *)(v9 + 16LL * *((unsigned int *)a2 + 4) + 8);
    }
    if ( *v8 )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 80LL) = a3;
      v10 = *((_QWORD *)a3 + 16);
      if ( v10 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) = v10;
    }
  }
}
