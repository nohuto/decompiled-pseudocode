/*
 * XREFs of ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x18047656C
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180146EF0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x180147F94 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

char __fastcall KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(
        KeyboardHosting::ViewRectProvider *this,
        struct Windows::Foundation::Rect *a2,
        struct Windows::Foundation::Rect *a3)
{
  char v3; // bl
  const struct Windows::Foundation::Rect *v4; // rdx
  KeyboardHosting *v5; // r8
  float *v6; // rdx
  float *v7; // r8
  float v8; // xmm1_4
  float v9; // xmm0_4
  LONG v10; // eax
  float v11; // xmm1_4
  LONG v12; // eax
  float v13; // xmm0_4
  LONG v14; // eax
  float v15; // xmm1_4
  LONG v16; // r9d
  float v17; // xmm1_4
  LONG v18; // eax
  float v19; // xmm0_4
  int v20; // ecx
  RECT rcSrc2; // [rsp+20h] [rbp-40h] BYREF
  RECT rcSrc1; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  if ( !KeyboardHosting::IsRectNull(a2, a2) && !KeyboardHosting::IsRectNull(v5, v4) )
  {
    v8 = v6[1];
    v9 = *v6 + v6[2];
    rcSrc1.left = (int)*v6;
    v10 = (int)v8;
    v11 = v8 + v6[3];
    rcSrc1.top = v10;
    v12 = (int)v9;
    v13 = *v7;
    rcSrc1.right = v12;
    v14 = (int)v11;
    v15 = v7[1];
    v16 = (int)v15;
    rcSrc1.bottom = v14;
    v17 = v15 + v7[3];
    v18 = (int)v13;
    rcSrc2.top = v16;
    v19 = v13 + v7[2];
    v20 = (int)v17;
    rcSrc2.left = v18;
    rcSrc2.bottom = (int)v17;
    rcSrc2.right = (int)v19;
    if ( v18 == (int)v19 )
      rcSrc2.right = (int)v19 + 1;
    if ( v16 == v20 )
      rcSrc2.bottom = v20 + 1;
    rcDst = 0LL;
    return IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
  }
  return v3;
}
