/*
 * XREFs of ?SetMargins@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJU_MARGINS@@@Z @ 0x1801B40DC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x18004A8F0 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetMargins(__int64 a1, __m128i *a2)
{
  signed __int64 v2; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (int)a2->m128i_i64[0] < 0
    || (HIDWORD(a2->m128i_i64[0]) & 0x80000000) != 0
    || (v2 = _mm_srli_si128(*a2, 8).m128i_u64[0], (int)v2 < 0)
    || v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xDFu, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60B,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  else
  {
    *(__m128i *)(a1 + 88) = *a2;
    CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)a1);
    return 0LL;
  }
}
