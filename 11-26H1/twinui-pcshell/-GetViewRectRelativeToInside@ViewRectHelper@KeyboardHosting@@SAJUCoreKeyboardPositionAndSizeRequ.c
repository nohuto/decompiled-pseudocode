/*
 * XREFs of ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x180481770
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
        __int64 a1,
        const struct Windows::Foundation::Rect *a2)
{
  float *v2; // rdx
  float *v3; // r8
  __int64 v4; // r9
  float v5; // xmm2_4
  float v6; // xmm3_4
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4

  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)(a1 + 56), a2) )
  {
    v5 = (float)*(int *)(v4 + 8);
    v6 = (float)*(int *)(v4 + 4);
  }
  else
  {
    v5 = *(float *)(v4 + 64);
    v6 = *(float *)(v4 + 68);
  }
  v7 = *(_DWORD *)(v4 + 24);
  if ( (v7 & 0xC) == 0 )
  {
    v8 = (float)((float)(v2[2] - v5) * 0.5) + *v2;
LABEL_9:
    *v3 = v8;
    goto LABEL_13;
  }
  if ( (v7 & 4) != 0 )
  {
    v9 = *v2;
    if ( (v7 & 8) == 0 )
    {
      v8 = (float)*(int *)(v4 + 12) + v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( (v7 & 8) == 0 )
      goto LABEL_13;
    v9 = (float)((float)(v2[2] + *v2) - v5) - (float)*(int *)(v4 + 12);
  }
  *v3 = v9;
LABEL_13:
  if ( (v7 & 3) == 0 )
  {
    v10 = (float)(v2[3] - v6) * 0.5;
LABEL_20:
    v3[1] = v10 + v2[1];
    return 0LL;
  }
  if ( (v7 & 2) != 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      v3[1] = v2[1];
      return 0LL;
    }
  }
  else if ( (v7 & 1) != 0 )
  {
    v10 = (float)*(int *)(v4 + 16);
    goto LABEL_20;
  }
  if ( (v7 & 2) != 0 )
    v3[1] = (float)((float)(v2[3] + v2[1]) - v6) - (float)*(int *)(v4 + 16);
  return 0LL;
}
