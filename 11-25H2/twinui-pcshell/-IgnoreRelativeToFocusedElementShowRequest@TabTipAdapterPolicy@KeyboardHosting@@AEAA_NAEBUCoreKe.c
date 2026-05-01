/*
 * XREFs of ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180094CE4
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180094F90 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x180147F94 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ??$IgnoreRelativeToFocusedElementShowRequest@AEA_N_NAEAMAEAM@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_NAEAM2@Z @ 0x180473684 (--$IgnoreRelativeToFocusedElementShowRequest@AEA_N_NAEAMAEAM@TouchKeyboardExperienceTelemetryLog.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x1804737EC (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x180479B74 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToFocusedElementShowRequest(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  KeyboardHosting::TabTipAdapterPolicy *v2; // rdi
  KeyboardHosting::TabTipAdapterPolicy *v3; // rsi
  char v4; // bl
  const char *v5; // r9
  bool BoundingBox; // al
  KeyboardHosting *v7; // rcx
  const struct Windows::Foundation::Rect *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v13; // [rsp+48h] [rbp+10h] BYREF
  KeyboardHosting::TabTipAdapterPolicy *v14; // [rsp+50h] [rbp+18h] BYREF
  KeyboardHosting::TabTipAdapterPolicy *v15; // [rsp+58h] [rbp+20h]

  v2 = this;
  v3 = this;
  v15 = this;
  v4 = 0;
  if ( *(_DWORD *)a2 == 6 )
  {
    v13 = 0;
    v14 = this;
    try
    {
      std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___();
      BoundingBox = KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(*((KeyboardHosting::UIAutomationHelpers **)v3
                                                                                       + 87));
      v13 = BoundingBox;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x584,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        v5);
      v4 = 0;
      v2 = this;
      BoundingBox = v13;
      v3 = v15;
    }
    v7 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)v3 + 176);
    if ( !BoundingBox && !KeyboardHosting::IsRectNull(v7, v8) && *((float *)v2 + 38) < 1.0 && *((float *)v2 + 39) < 1.0 )
      v4 = 1;
    LOBYTE(v14) = KeyboardHosting::IsRectNull(v7, v8);
    TouchKeyboardExperienceTelemetryLogger::IgnoreRelativeToFocusedElementShowRequest<bool &,bool,float &,float &>(
      &v13,
      &v14,
      (char *)v2 + 152,
      (char *)v2 + 156);
  }
  return v4;
}
