/*
 * XREFs of ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18013E2C4
 * Callers:
 *     ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18013E198 (-IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPo.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAUtagRECT@@@Z @ 0x18013F338 (-GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAUtagRECT@@@Z.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Rect *a2)
{
  const struct Windows::Foundation::Rect *v3; // rdx
  bool result; // al
  struct tagRECT v5; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 144), a2)
    || !KeyboardHosting::IsRectNull((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 176), v3) )
  {
    v5 = 0LL;
    KeyboardHosting::TabTipAdapterPolicy::GetPrimaryMonitorRect(&v5);
    if ( *((float *)this + 40) != (float)(v5.right - 1) || *((float *)this + 43) != 0.0 )
      return 1;
  }
  return result;
}
