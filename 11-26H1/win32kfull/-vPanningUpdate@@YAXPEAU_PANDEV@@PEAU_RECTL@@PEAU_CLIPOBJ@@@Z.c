/*
 * XREFs of ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1403232A8
 * Callers:
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x140288680 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1403212B0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140321430 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140321E90 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140322050 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1403221B0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140322340 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1403224B0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x140322620 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x140296758 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vPanningUpdate(struct _PANDEV *a1, __m128i *a2, struct _CLIPOBJ *a3)
{
  int left; // edx
  LONG v6; // ecx
  LONG v7; // r9d
  LONG top; // eax
  LONG right; // eax
  LONG v10; // ecx
  LONG bottom; // eax
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  HSEMAPHORE v15; // [rsp+38h] [rbp-28h] BYREF
  __m128i v16; // [rsp+40h] [rbp-20h] BYREF

  v16 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    left = a2->m128i_i32[0];
    v6 = a2->m128i_i32[1];
    v7 = a2->m128i_i32[2];
    if ( a3->rclBounds.left > left )
      left = a3->rclBounds.left;
    top = a3->rclBounds.top;
    v16.m128i_i32[0] = left;
    if ( top > v6 )
      v6 = top;
    right = a3->rclBounds.right;
    v16.m128i_i32[1] = v6;
    v10 = a2->m128i_i32[3];
    if ( right < v7 )
      v7 = right;
    bottom = a3->rclBounds.bottom;
    v16.m128i_i32[2] = v7;
    if ( bottom < v10 )
      v10 = bottom;
    v16.m128i_i32[3] = v10;
  }
  else
  {
    v7 = a2->m128i_i32[2];
    v16 = *a2;
    left = _mm_cvtsi128_si32(v16);
  }
  if ( left < v7 && v16.m128i_i32[1] < v16.m128i_i32[3] )
  {
    v15 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
    EngAcquireSemaphore(v15);
    v13 = *((_QWORD *)a1 + 12);
    v12 = *((_QWORD *)a1 + 11);
    v14 = *((_QWORD *)a1 + 10);
    RGNOBJ::vSet((RGNOBJ *)&v13, (const struct _RECTL *const)&v16);
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)&v14, (struct RGNOBJ *)&v13, 0xEu) )
      RGNOBJ::vSet((RGNOBJ *)&v12);
    *((_QWORD *)a1 + 11) = v14;
    *((_QWORD *)a1 + 10) = v12;
    *((_DWORD *)a1 + 26) = 1;
    PANDEVLOCK::vUnLock(&v15);
  }
}
