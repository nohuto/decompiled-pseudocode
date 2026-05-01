/*
 * XREFs of ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1802B7578
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z @ 0x18046DC10 (-GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
        KeyboardHosting::TabTipAdapter *this,
        struct tagRECT *a2)
{
  bool IsRectNull; // al
  __int64 v3; // r10
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  _DWORD *v7; // rdx
  __int64 result; // rax

  IsRectNull = KeyboardHosting::IsRectNull(
                 (KeyboardHosting::TabTipAdapter *)((char *)this + 472),
                 (const struct Windows::Foundation::Rect *)a2);
  v4 = *(float *)(v3 + 16 * !IsRectNull + 460);
  v5 = *(float *)(v3 + 16 * !IsRectNull + 456) + *(float *)(v3 + 16 * !IsRectNull + 464);
  v6 = v4 + *(float *)(v3 + 16 * !IsRectNull + 468);
  *v7 = (int)*(float *)(v3 + 16 * !IsRectNull + 456);
  v7[1] = (int)v4;
  result = 0LL;
  v7[2] = (int)v5;
  v7[3] = (int)v6;
  return result;
}
