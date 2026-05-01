/*
 * XREFs of ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x18048A38C
 * Callers:
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18021012C (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N@Z @ 0x18048A1C8 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N.c)
 */

char __fastcall KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(struct IUIAutomation **this)
{
  struct IUIAutomation *v1; // rdx
  char v2; // bl
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v2 = 0;
  v4 = 0;
  if ( (int)KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(
              (KeyboardHosting::UIAutomationHelpers *)this,
              v1,
              &v4) >= 0 )
    return v4;
  return v2;
}
