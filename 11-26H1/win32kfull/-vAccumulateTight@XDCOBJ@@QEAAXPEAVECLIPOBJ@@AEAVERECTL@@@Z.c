/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x14006E5A0 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620 (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreGradientFill @ 0x14007E5D4 (GreGradientFill.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1400AE8F8 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14023DAF4 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     NtGdiFastPolyPolyline @ 0x14027E1D0 (NtGdiFastPolyPolyline.c)
 *     DC_vAccumulateTight_clip_rect @ 0x14030F000 (DC_vAccumulateTight_clip_rect.c)
 *     NtGdiUpdateColors @ 0x140331CD0 (NtGdiUpdateColors.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  _DWORD *v3; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  LONG v7; // r9d
  int v8; // ecx
  int v9; // r8d
  LONG v10; // r10d
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __m128i v14; // [rsp+38h] [rbp-18h] BYREF

  v3 = *(_DWORD **)this;
  v5 = *a3;
  v14 = v5;
  v6 = v3[10] & 1;
  v7 = _mm_cvtsi128_si32(v5) - v3[2 * v6 + 254];
  v14.m128i_i32[0] = v7;
  v8 = v5.m128i_i32[2] - v3[2 * v6 + 254];
  v14.m128i_i32[2] = v8;
  v9 = v5.m128i_i32[1] - v3[2 * v6 + 255];
  v14.m128i_i32[1] = v9;
  v14.m128i_i32[3] = v5.m128i_i32[3] - v3[2 * v6 + 255];
  if ( (v3[9] & 0x40) != 0 )
  {
    v10 = v3[270];
    if ( v10 == v3[272] || v3[271] == v3[273] )
    {
      *(__m128i *)(v3 + 270) = v14;
    }
    else
    {
      if ( v7 < v10 )
      {
        v3[270] = v7;
        v8 = v14.m128i_i32[2];
        v9 = v14.m128i_i32[1];
      }
      if ( v9 < v3[271] )
      {
        v3[271] = v9;
        v8 = v14.m128i_i32[2];
      }
      if ( v8 > v3[272] )
        v3[272] = v8;
      if ( v14.m128i_i32[3] > v3[273] )
        v3[273] = v14.m128i_i32[3];
    }
    v13 = *(_QWORD *)(*(_QWORD *)this + 1184LL);
    if ( v13 )
    {
      v12 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
      v11 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
      if ( v12 && v11 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v11, (const struct _RECTL *const)&v14);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v11, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v13, (struct RGNOBJ *)&v12);
          *(_QWORD *)(*(_QWORD *)this + 1184LL) = v13;
        }
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v11);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v12);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
    }
  }
}
