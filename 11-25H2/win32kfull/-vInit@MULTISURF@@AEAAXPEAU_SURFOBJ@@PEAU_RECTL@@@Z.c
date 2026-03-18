/*
 * XREFs of ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14000E994
 * Callers:
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14000A130 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14000ADB0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x14000BA90 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x14000C220 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000CCF0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000E26C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1401EF4E4 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401FEB88 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA4C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall MULTISURF::vInit(MULTISURF *this, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  DHPDEV dhpdev; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11

  *((_QWORD *)this + 11) = a2;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 12) = (char *)this + 8;
  *((_QWORD *)this + 10) = 0LL;
  if ( a2 )
  {
    *(struct _RECTL *)((char *)this + 8) = *a3;
    dhpdev = a2->dhpdev;
    *((_QWORD *)this + 3) = dhpdev;
    if ( dhpdev )
    {
      *(_QWORD *)this = (char *)a2 - 24;
      *((_QWORD *)this + 4) = a2->dhsurf;
      *((_DWORD *)this + 19) = a2[1].hsurf;
      if ( (unsigned int)IsMetaDevBitmapForMirroring(a2) && (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 40LL) & 0x20000) != 0 )
      {
        *(_QWORD *)(v6 + 80) = v7;
        *(_DWORD *)(v6 + 72) = 1;
        *(_WORD *)(v5 + 100) = v8;
        *(_QWORD *)(*(_QWORD *)v6 + 24LL) = v8;
        *(_QWORD *)(*(_QWORD *)v6 + 40LL) = v8;
        *(_DWORD *)(*(_QWORD *)v6 + 112LL) = v8;
      }
      else if ( *(_WORD *)(v5 + 100) != (_WORD)v8 || (*(_BYTE *)(v4 + 78) & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 72) = 2;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 3) = 0LL;
  }
}
