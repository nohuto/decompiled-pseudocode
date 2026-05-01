/*
 * XREFs of ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x180147F94
 * Callers:
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180094CE4 (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180095944 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180095A74 (-UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPosit.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180146EF0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x180147980 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA?AUtagRECT@@U3@URect@Foundation@Windows@@@Z @ 0x180147F28 (-GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA-AUtagRECT@@U3@URect@Foun.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1802C0788 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180462A74 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x1804728D4 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x180472AF4 (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x18047656C (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::IsRectNull(KeyboardHosting *this, const struct Windows::Foundation::Rect *a2)
{
  return *(float *)this == 0.0
      && *((float *)this + 1) == 0.0
      && *((float *)this + 2) == 0.0
      && *((float *)this + 3) == 0.0;
}
