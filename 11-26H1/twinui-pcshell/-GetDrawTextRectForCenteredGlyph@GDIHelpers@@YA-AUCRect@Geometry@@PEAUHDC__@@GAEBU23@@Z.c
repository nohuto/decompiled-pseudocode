/*
 * XREFs of ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z @ 0x18021AA24
 * Callers:
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x18021A928 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x18053C774 (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall GDIHelpers::GetDrawTextRectForCenteredGlyph(__int64 a1, HDC a2, unsigned __int16 a3, __int64 a4)
{
  UINT v4; // ebp
  float tmAscent; // xmm1_4
  float v9; // xmm3_4
  _GLYPHMETRICS gm; // [rsp+40h] [rbp-148h] BYREF
  _OUTLINETEXTMETRICW potm; // [rsp+60h] [rbp-128h] BYREF

  v4 = a3;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  memset_0(&potm, 0, sizeof(potm));
  memset(&gm, 0, sizeof(gm));
  if ( GetOutlineTextMetricsW(a2, 0xE8u, &potm)
    && GetGlyphOutlineW(a2, v4, 0, &gm, 0, 0LL, &`GDIHelpers::GetDrawTextRectForCenteredGlyph'::`2'::identityMatrix) )
  {
    tmAscent = (float)potm.otmTextMetrics.tmAscent;
    v9 = (float)((float)((float)((float)(*(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4)) * 0.5) + (float)*(int *)(a4 + 4))
               - (float)((float)(int)gm.gmBlackBoxY * 0.5))
       + (float)gm.gmptGlyphOrigin.y;
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *(_DWORD *)(a1 + 4) = (int)(float)(v9 - tmAscent);
  }
  return a1;
}
