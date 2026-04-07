/*
 * XREFs of ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DDAF8
 * Callers:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800DD78C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800DD800 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetMidpoint@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAA?AUtagPOINT@@UtagRECT@@UtagSIZE@@H@Z @ 0x1800DD6EC (-GetMidpoint@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAA-AUtagPOINT@@UtagRECT@@.c)
 *     ?WFRectToDpiScaledMarginRect@@YA?AUtagRECT@@URect@Foundation@Windows@winrt@@@Z @ 0x1800DDBA8 (-WFRectToDpiScaledMarginRect@@YA-AUtagRECT@@URect@Foundation@Windows@winrt@@@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v4; // rax
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v5; // rcx
  bool v6; // zf
  __int64 v7; // rbx
  const struct tagPOINT *Midpoint; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  const struct tagPOINT *v11; // rax
  __int64 v12; // r8
  struct tagSIZE v13[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-10h] BYREF
  struct tagRECT v15; // [rsp+60h] [rbp+10h] BYREF

  *(_OWORD *)&v13[0].cx = *(_OWORD *)((char *)this + 84);
  v4 = (_OWORD *)WFRectToDpiScaledMarginRect(v14, v13, a3);
  v6 = *((_QWORD *)this + 7) == 0LL;
  *(_OWORD *)&v13[0].cx = *v4;
  if ( !v6 )
  {
    v7 = *((_QWORD *)this + 6);
    Midpoint = (const struct tagPOINT *)winrt::Udwm::Transitions::implementation::UserResizeVisual::GetMidpoint(
                                          v5,
                                          &v15,
                                          (struct tagSIZE)v13,
                                          *(_QWORD *)(v7 + 64),
                                          -32);
    CVisual::SetOffset((struct tagPOINT *)v7, Midpoint, v9);
    *(__m128i *)&v13[0].cx = _mm_load_si128((const __m128i *)&_xmm);
  }
  v10 = *((_QWORD *)this + 9);
  v11 = (const struct tagPOINT *)winrt::Udwm::Transitions::implementation::UserResizeVisual::GetMidpoint(
                                   v5,
                                   &v15,
                                   (struct tagSIZE)v13,
                                   *(_QWORD *)(v10 + 64),
                                   0);
  CVisual::SetOffset((struct tagPOINT *)v10, v11, v12);
}
