/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0
 * Callers:
 *     DxgkEngAccumD3DPresentBounds @ 0x140041200 (DxgkEngAccumD3DPresentBounds.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620 (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     NtGdiUpdateColors @ 0x140331CD0 (NtGdiUpdateColors.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ERECTL *a2)
{
  _DWORD *v2; // r8
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v2 = *(_DWORD **)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x20) != 0 )
  {
    if ( *(_DWORD *)a2 < v2[266] )
      v2[266] = *(_DWORD *)a2;
    v3 = *((_DWORD *)a2 + 1);
    if ( v3 < v2[267] )
      v2[267] = v3;
    v4 = *((_DWORD *)a2 + 2);
    if ( v4 > v2[268] )
      v2[268] = v4;
    v5 = *((_DWORD *)a2 + 3);
    if ( v5 > v2[269] )
      v2[269] = v5;
  }
  v6 = *(_DWORD **)this;
  if ( (v6[9] & 0x80u) != 0 )
  {
    if ( *(_DWORD *)a2 < v6[274] )
      v6[274] = *(_DWORD *)a2;
    v7 = *((_DWORD *)a2 + 1);
    if ( v7 < v6[275] )
      v6[275] = v7;
    v8 = *((_DWORD *)a2 + 2);
    if ( v8 > v6[276] )
      v6[276] = v8;
    v9 = *((_DWORD *)a2 + 3);
    if ( v9 > v6[277] )
      v6[277] = v9;
  }
}
