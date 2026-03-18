/*
 * XREFs of ?DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800E38B8
 * Callers:
 *     ?RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180202650 (-RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     McTemplateU0xxxqqqn_EventWriteTransfer @ 0x1800E4270 (McTemplateU0xxxqqqn_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CWindowNode::DxBltConsumedTelemetry(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CGdiSpriteBitmap *a3)
{
  __m128i v3; // xmm1
  _QWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  char v7; // r11
  int v8; // edx
  int v9; // r9d
  __int64 v10; // [rsp+60h] [rbp-38h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    if ( *((_BYTE *)a2 + 184) )
    {
      v3 = *(__m128i *)((char *)a2 + 156);
      v10 = *(_QWORD *)((char *)a2 + 172);
      if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty((char *)a3 + 344) )
      {
        v4[1] = v5;
        *v4 = v5;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v8 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
          v9 = _mm_cvtsi128_si32(v3);
          McTemplateU0xxxqqqn_EventWriteTransfer(v9, v8, *(_QWORD *)(v6 + 792), v9, v8, v10, SBYTE4(v10), v7);
        }
      }
    }
  }
}
